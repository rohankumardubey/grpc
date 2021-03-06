/*
 *
 * Copyright 2015 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#include "test/core/security/oauth2_utils.h"

#include <string.h>

#include <grpc/grpc.h>
#include <grpc/grpc_security.h>
#include <grpc/slice.h>
#include <grpc/support/alloc.h>
#include <grpc/support/log.h>
#include <grpc/support/sync.h>

#include "src/core/lib/iomgr/exec_ctx.h"
#include "src/core/lib/security/credentials/credentials.h"

typedef struct oauth2_request {
  gpr_mu* mu = nullptr;
  grpc_polling_entity pops = {};
  bool is_done = false;
  char* token = nullptr;

  grpc_core::CredentialsMetadataArray md_array;
  grpc_closure closure = {};
} oauth2_request;

static void on_oauth2_response(void* arg, grpc_error_handle error) {
  oauth2_request* request = static_cast<oauth2_request*>(arg);
  char* token = nullptr;
  grpc_core::Slice token_slice;
  if (error != GRPC_ERROR_NONE) {
    gpr_log(GPR_ERROR, "Fetching token failed: %s",
            grpc_error_std_string(error).c_str());
  } else {
    GPR_ASSERT(request->md_array.size() == 1);
    token_slice = request->md_array[0].second.Ref();
    token = static_cast<char*>(gpr_malloc(token_slice.length() + 1));
    memcpy(token, token_slice.data(), token_slice.length());
    token[token_slice.length()] = '\0';
  }
  gpr_mu_lock(request->mu);
  request->is_done = true;
  request->token = token;
  GRPC_LOG_IF_ERROR(
      "pollset_kick",
      grpc_pollset_kick(grpc_polling_entity_pollset(&request->pops), nullptr));
  gpr_mu_unlock(request->mu);
}

static void do_nothing(void* /*arg*/, grpc_error_handle /*error*/) {}

char* grpc_test_fetch_oauth2_token_with_credentials(
    grpc_call_credentials* creds) {
  oauth2_request request;
  grpc_core::ExecCtx exec_ctx;
  grpc_closure do_nothing_closure;
  grpc_auth_metadata_context null_ctx = {"", "", nullptr, nullptr};

  grpc_pollset* pollset =
      static_cast<grpc_pollset*>(gpr_zalloc(grpc_pollset_size()));
  grpc_pollset_init(pollset, &request.mu);
  request.pops = grpc_polling_entity_create_from_pollset(pollset);
  request.is_done = false;

  GRPC_CLOSURE_INIT(&do_nothing_closure, do_nothing, nullptr,
                    grpc_schedule_on_exec_ctx);

  GRPC_CLOSURE_INIT(&request.closure, on_oauth2_response, &request,
                    grpc_schedule_on_exec_ctx);

  grpc_error_handle error = GRPC_ERROR_NONE;
  if (creds->get_request_metadata(&request.pops, null_ctx, &request.md_array,
                                  &request.closure, &error)) {
    // Synchronous result; invoke callback directly.
    on_oauth2_response(&request, error);
    GRPC_ERROR_UNREF(error);
  }
  grpc_core::ExecCtx::Get()->Flush();

  gpr_mu_lock(request.mu);
  while (!request.is_done) {
    grpc_pollset_worker* worker = nullptr;
    if (!GRPC_LOG_IF_ERROR(
            "pollset_work",
            grpc_pollset_work(grpc_polling_entity_pollset(&request.pops),
                              &worker, GRPC_MILLIS_INF_FUTURE))) {
      request.is_done = true;
    }
  }
  gpr_mu_unlock(request.mu);

  grpc_pollset_shutdown(grpc_polling_entity_pollset(&request.pops),
                        &do_nothing_closure);
  grpc_core::ExecCtx::Get()->Flush();
  grpc_pollset_destroy(grpc_polling_entity_pollset(&request.pops));
  gpr_free(pollset);
  return request.token;
}
