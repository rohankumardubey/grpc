/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/core/v3/grpc_method_list.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_CORE_V3_GRPC_METHOD_LIST_PROTO_UPBDEFS_H_
#define ENVOY_CONFIG_CORE_V3_GRPC_METHOD_LIST_PROTO_UPBDEFS_H_

#include "upb/def.h"
#include "upb/port_def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/def.h"

#include "upb/port_def.inc"

extern upb_def_init envoy_config_core_v3_grpc_method_list_proto_upbdefinit;

UPB_INLINE const upb_msgdef *envoy_config_core_v3_GrpcMethodList_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_core_v3_grpc_method_list_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.core.v3.GrpcMethodList");
}

UPB_INLINE const upb_msgdef *envoy_config_core_v3_GrpcMethodList_Service_getmsgdef(upb_symtab *s) {
  _upb_symtab_loaddefinit(s, &envoy_config_core_v3_grpc_method_list_proto_upbdefinit);
  return upb_symtab_lookupmsg(s, "envoy.config.core.v3.GrpcMethodList.Service");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* ENVOY_CONFIG_CORE_V3_GRPC_METHOD_LIST_PROTO_UPBDEFS_H_ */
