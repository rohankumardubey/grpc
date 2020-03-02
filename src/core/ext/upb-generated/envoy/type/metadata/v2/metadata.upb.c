/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/metadata/v2/metadata.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/msg.h"
#include "envoy/type/metadata/v2/metadata.upb.h"
#include "udpa/annotations/migrate.upb.h"
#include "validate/validate.upb.h"

#include "upb/port_def.inc"

static const upb_msglayout *const envoy_type_metadata_v2_MetadataKey_submsgs[1] = {
  &envoy_type_metadata_v2_MetadataKey_PathSegment_msginit,
};

static const upb_msglayout_field envoy_type_metadata_v2_MetadataKey__fields[2] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(8, 16), 0, 0, 11, 3},
};

const upb_msglayout envoy_type_metadata_v2_MetadataKey_msginit = {
  &envoy_type_metadata_v2_MetadataKey_submsgs[0],
  &envoy_type_metadata_v2_MetadataKey__fields[0],
  UPB_SIZE(16, 32), 2, false,
};

static const upb_msglayout_field envoy_type_metadata_v2_MetadataKey_PathSegment__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 9, 1},
};

const upb_msglayout envoy_type_metadata_v2_MetadataKey_PathSegment_msginit = {
  NULL,
  &envoy_type_metadata_v2_MetadataKey_PathSegment__fields[0],
  UPB_SIZE(16, 32), 1, false,
};

static const upb_msglayout *const envoy_type_metadata_v2_MetadataKind_submsgs[4] = {
  &envoy_type_metadata_v2_MetadataKind_Cluster_msginit,
  &envoy_type_metadata_v2_MetadataKind_Host_msginit,
  &envoy_type_metadata_v2_MetadataKind_Request_msginit,
  &envoy_type_metadata_v2_MetadataKind_Route_msginit,
};

static const upb_msglayout_field envoy_type_metadata_v2_MetadataKind__fields[4] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 2, 11, 1},
  {2, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 3, 11, 1},
  {3, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 0, 11, 1},
  {4, UPB_SIZE(0, 0), UPB_SIZE(-5, -9), 1, 11, 1},
};

const upb_msglayout envoy_type_metadata_v2_MetadataKind_msginit = {
  &envoy_type_metadata_v2_MetadataKind_submsgs[0],
  &envoy_type_metadata_v2_MetadataKind__fields[0],
  UPB_SIZE(8, 16), 4, false,
};

const upb_msglayout envoy_type_metadata_v2_MetadataKind_Request_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false,
};

const upb_msglayout envoy_type_metadata_v2_MetadataKind_Route_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false,
};

const upb_msglayout envoy_type_metadata_v2_MetadataKind_Cluster_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false,
};

const upb_msglayout envoy_type_metadata_v2_MetadataKind_Host_msginit = {
  NULL,
  NULL,
  UPB_SIZE(0, 0), 0, false,
};

#include "upb/port_undef.inc"
