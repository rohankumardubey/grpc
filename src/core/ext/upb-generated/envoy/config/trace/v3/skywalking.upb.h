/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/trace/v3/skywalking.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_TRACE_V3_SKYWALKING_PROTO_UPB_H_
#define ENVOY_CONFIG_TRACE_V3_SKYWALKING_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct envoy_config_trace_v3_SkyWalkingConfig;
struct envoy_config_trace_v3_ClientConfig;
typedef struct envoy_config_trace_v3_SkyWalkingConfig envoy_config_trace_v3_SkyWalkingConfig;
typedef struct envoy_config_trace_v3_ClientConfig envoy_config_trace_v3_ClientConfig;
extern const upb_msglayout envoy_config_trace_v3_SkyWalkingConfig_msginit;
extern const upb_msglayout envoy_config_trace_v3_ClientConfig_msginit;
struct envoy_config_core_v3_GrpcService;
struct google_protobuf_UInt32Value;
extern const upb_msglayout envoy_config_core_v3_GrpcService_msginit;
extern const upb_msglayout google_protobuf_UInt32Value_msginit;


/* envoy.config.trace.v3.SkyWalkingConfig */

UPB_INLINE envoy_config_trace_v3_SkyWalkingConfig *envoy_config_trace_v3_SkyWalkingConfig_new(upb_arena *arena) {
  return (envoy_config_trace_v3_SkyWalkingConfig *)_upb_msg_new(&envoy_config_trace_v3_SkyWalkingConfig_msginit, arena);
}
UPB_INLINE envoy_config_trace_v3_SkyWalkingConfig *envoy_config_trace_v3_SkyWalkingConfig_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_trace_v3_SkyWalkingConfig *ret = envoy_config_trace_v3_SkyWalkingConfig_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_config_trace_v3_SkyWalkingConfig_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_config_trace_v3_SkyWalkingConfig *envoy_config_trace_v3_SkyWalkingConfig_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_config_trace_v3_SkyWalkingConfig *ret = envoy_config_trace_v3_SkyWalkingConfig_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_config_trace_v3_SkyWalkingConfig_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_config_trace_v3_SkyWalkingConfig_serialize(const envoy_config_trace_v3_SkyWalkingConfig *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_trace_v3_SkyWalkingConfig_msginit, arena, len);
}

UPB_INLINE bool envoy_config_trace_v3_SkyWalkingConfig_has_grpc_service(const envoy_config_trace_v3_SkyWalkingConfig *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct envoy_config_core_v3_GrpcService* envoy_config_trace_v3_SkyWalkingConfig_grpc_service(const envoy_config_trace_v3_SkyWalkingConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), const struct envoy_config_core_v3_GrpcService*); }
UPB_INLINE bool envoy_config_trace_v3_SkyWalkingConfig_has_client_config(const envoy_config_trace_v3_SkyWalkingConfig *msg) { return _upb_hasbit(msg, 2); }
UPB_INLINE const envoy_config_trace_v3_ClientConfig* envoy_config_trace_v3_SkyWalkingConfig_client_config(const envoy_config_trace_v3_SkyWalkingConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), const envoy_config_trace_v3_ClientConfig*); }

UPB_INLINE void envoy_config_trace_v3_SkyWalkingConfig_set_grpc_service(envoy_config_trace_v3_SkyWalkingConfig *msg, struct envoy_config_core_v3_GrpcService* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), struct envoy_config_core_v3_GrpcService*) = value;
}
UPB_INLINE struct envoy_config_core_v3_GrpcService* envoy_config_trace_v3_SkyWalkingConfig_mutable_grpc_service(envoy_config_trace_v3_SkyWalkingConfig *msg, upb_arena *arena) {
  struct envoy_config_core_v3_GrpcService* sub = (struct envoy_config_core_v3_GrpcService*)envoy_config_trace_v3_SkyWalkingConfig_grpc_service(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_GrpcService*)_upb_msg_new(&envoy_config_core_v3_GrpcService_msginit, arena);
    if (!sub) return NULL;
    envoy_config_trace_v3_SkyWalkingConfig_set_grpc_service(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_config_trace_v3_SkyWalkingConfig_set_client_config(envoy_config_trace_v3_SkyWalkingConfig *msg, envoy_config_trace_v3_ClientConfig* value) {
  _upb_sethas(msg, 2);
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), envoy_config_trace_v3_ClientConfig*) = value;
}
UPB_INLINE struct envoy_config_trace_v3_ClientConfig* envoy_config_trace_v3_SkyWalkingConfig_mutable_client_config(envoy_config_trace_v3_SkyWalkingConfig *msg, upb_arena *arena) {
  struct envoy_config_trace_v3_ClientConfig* sub = (struct envoy_config_trace_v3_ClientConfig*)envoy_config_trace_v3_SkyWalkingConfig_client_config(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_trace_v3_ClientConfig*)_upb_msg_new(&envoy_config_trace_v3_ClientConfig_msginit, arena);
    if (!sub) return NULL;
    envoy_config_trace_v3_SkyWalkingConfig_set_client_config(msg, sub);
  }
  return sub;
}

/* envoy.config.trace.v3.ClientConfig */

UPB_INLINE envoy_config_trace_v3_ClientConfig *envoy_config_trace_v3_ClientConfig_new(upb_arena *arena) {
  return (envoy_config_trace_v3_ClientConfig *)_upb_msg_new(&envoy_config_trace_v3_ClientConfig_msginit, arena);
}
UPB_INLINE envoy_config_trace_v3_ClientConfig *envoy_config_trace_v3_ClientConfig_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  envoy_config_trace_v3_ClientConfig *ret = envoy_config_trace_v3_ClientConfig_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &envoy_config_trace_v3_ClientConfig_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE envoy_config_trace_v3_ClientConfig *envoy_config_trace_v3_ClientConfig_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  envoy_config_trace_v3_ClientConfig *ret = envoy_config_trace_v3_ClientConfig_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &envoy_config_trace_v3_ClientConfig_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *envoy_config_trace_v3_ClientConfig_serialize(const envoy_config_trace_v3_ClientConfig *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &envoy_config_trace_v3_ClientConfig_msginit, arena, len);
}

typedef enum {
  envoy_config_trace_v3_ClientConfig_backend_token_specifier_backend_token = 3,
  envoy_config_trace_v3_ClientConfig_backend_token_specifier_NOT_SET = 0
} envoy_config_trace_v3_ClientConfig_backend_token_specifier_oneofcases;
UPB_INLINE envoy_config_trace_v3_ClientConfig_backend_token_specifier_oneofcases envoy_config_trace_v3_ClientConfig_backend_token_specifier_case(const envoy_config_trace_v3_ClientConfig* msg) { return (envoy_config_trace_v3_ClientConfig_backend_token_specifier_oneofcases)*UPB_PTR_AT(msg, UPB_SIZE(32, 64), int32_t); }

UPB_INLINE upb_strview envoy_config_trace_v3_ClientConfig_service_name(const envoy_config_trace_v3_ClientConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview); }
UPB_INLINE upb_strview envoy_config_trace_v3_ClientConfig_instance_name(const envoy_config_trace_v3_ClientConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(12, 24), upb_strview); }
UPB_INLINE bool envoy_config_trace_v3_ClientConfig_has_backend_token(const envoy_config_trace_v3_ClientConfig *msg) { return _upb_getoneofcase(msg, UPB_SIZE(32, 64)) == 3; }
UPB_INLINE upb_strview envoy_config_trace_v3_ClientConfig_backend_token(const envoy_config_trace_v3_ClientConfig *msg) { return UPB_READ_ONEOF(msg, upb_strview, UPB_SIZE(24, 48), UPB_SIZE(32, 64), 3, upb_strview_make("", strlen(""))); }
UPB_INLINE bool envoy_config_trace_v3_ClientConfig_has_max_cache_size(const envoy_config_trace_v3_ClientConfig *msg) { return _upb_hasbit(msg, 1); }
UPB_INLINE const struct google_protobuf_UInt32Value* envoy_config_trace_v3_ClientConfig_max_cache_size(const envoy_config_trace_v3_ClientConfig *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(20, 40), const struct google_protobuf_UInt32Value*); }

UPB_INLINE void envoy_config_trace_v3_ClientConfig_set_service_name(envoy_config_trace_v3_ClientConfig *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(4, 8), upb_strview) = value;
}
UPB_INLINE void envoy_config_trace_v3_ClientConfig_set_instance_name(envoy_config_trace_v3_ClientConfig *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(12, 24), upb_strview) = value;
}
UPB_INLINE void envoy_config_trace_v3_ClientConfig_set_backend_token(envoy_config_trace_v3_ClientConfig *msg, upb_strview value) {
  UPB_WRITE_ONEOF(msg, upb_strview, UPB_SIZE(24, 48), value, UPB_SIZE(32, 64), 3);
}
UPB_INLINE void envoy_config_trace_v3_ClientConfig_set_max_cache_size(envoy_config_trace_v3_ClientConfig *msg, struct google_protobuf_UInt32Value* value) {
  _upb_sethas(msg, 1);
  *UPB_PTR_AT(msg, UPB_SIZE(20, 40), struct google_protobuf_UInt32Value*) = value;
}
UPB_INLINE struct google_protobuf_UInt32Value* envoy_config_trace_v3_ClientConfig_mutable_max_cache_size(envoy_config_trace_v3_ClientConfig *msg, upb_arena *arena) {
  struct google_protobuf_UInt32Value* sub = (struct google_protobuf_UInt32Value*)envoy_config_trace_v3_ClientConfig_max_cache_size(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_UInt32Value*)_upb_msg_new(&google_protobuf_UInt32Value_msginit, arena);
    if (!sub) return NULL;
    envoy_config_trace_v3_ClientConfig_set_max_cache_size(msg, sub);
  }
  return sub;
}

extern const upb_msglayout_file envoy_config_trace_v3_skywalking_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_CONFIG_TRACE_V3_SKYWALKING_PROTO_UPB_H_ */
