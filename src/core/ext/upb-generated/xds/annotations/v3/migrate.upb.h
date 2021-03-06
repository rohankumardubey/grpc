/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     xds/annotations/v3/migrate.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef XDS_ANNOTATIONS_V3_MIGRATE_PROTO_UPB_H_
#define XDS_ANNOTATIONS_V3_MIGRATE_PROTO_UPB_H_

#include "upb/msg_internal.h"
#include "upb/decode.h"
#include "upb/decode_fast.h"
#include "upb/encode.h"

#include "upb/port_def.inc"

#ifdef __cplusplus
extern "C" {
#endif

struct xds_annotations_v3_MigrateAnnotation;
struct xds_annotations_v3_FieldMigrateAnnotation;
struct xds_annotations_v3_FileMigrateAnnotation;
typedef struct xds_annotations_v3_MigrateAnnotation xds_annotations_v3_MigrateAnnotation;
typedef struct xds_annotations_v3_FieldMigrateAnnotation xds_annotations_v3_FieldMigrateAnnotation;
typedef struct xds_annotations_v3_FileMigrateAnnotation xds_annotations_v3_FileMigrateAnnotation;
extern const upb_msglayout xds_annotations_v3_MigrateAnnotation_msginit;
extern const upb_msglayout xds_annotations_v3_FieldMigrateAnnotation_msginit;
extern const upb_msglayout xds_annotations_v3_FileMigrateAnnotation_msginit;
extern const upb_msglayout_ext xds_annotations_v3_message_migrate_ext;
extern const upb_msglayout_ext xds_annotations_v3_field_migrate_ext;
extern const upb_msglayout_ext xds_annotations_v3_enum_migrate_ext;
extern const upb_msglayout_ext xds_annotations_v3_enum_value_migrate_ext;
extern const upb_msglayout_ext xds_annotations_v3_file_migrate_ext;
struct google_protobuf_EnumOptions;
struct google_protobuf_EnumValueOptions;
struct google_protobuf_FieldOptions;
struct google_protobuf_FileOptions;
struct google_protobuf_MessageOptions;
extern const upb_msglayout google_protobuf_EnumOptions_msginit;
extern const upb_msglayout google_protobuf_EnumValueOptions_msginit;
extern const upb_msglayout google_protobuf_FieldOptions_msginit;
extern const upb_msglayout google_protobuf_FileOptions_msginit;
extern const upb_msglayout google_protobuf_MessageOptions_msginit;


/* xds.annotations.v3.MigrateAnnotation */

UPB_INLINE xds_annotations_v3_MigrateAnnotation *xds_annotations_v3_MigrateAnnotation_new(upb_arena *arena) {
  return (xds_annotations_v3_MigrateAnnotation *)_upb_msg_new(&xds_annotations_v3_MigrateAnnotation_msginit, arena);
}
UPB_INLINE xds_annotations_v3_MigrateAnnotation *xds_annotations_v3_MigrateAnnotation_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  xds_annotations_v3_MigrateAnnotation *ret = xds_annotations_v3_MigrateAnnotation_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &xds_annotations_v3_MigrateAnnotation_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE xds_annotations_v3_MigrateAnnotation *xds_annotations_v3_MigrateAnnotation_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  xds_annotations_v3_MigrateAnnotation *ret = xds_annotations_v3_MigrateAnnotation_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &xds_annotations_v3_MigrateAnnotation_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *xds_annotations_v3_MigrateAnnotation_serialize(const xds_annotations_v3_MigrateAnnotation *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &xds_annotations_v3_MigrateAnnotation_msginit, arena, len);
}

UPB_INLINE upb_strview xds_annotations_v3_MigrateAnnotation_rename(const xds_annotations_v3_MigrateAnnotation *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }

UPB_INLINE void xds_annotations_v3_MigrateAnnotation_set_rename(xds_annotations_v3_MigrateAnnotation *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}

/* xds.annotations.v3.FieldMigrateAnnotation */

UPB_INLINE xds_annotations_v3_FieldMigrateAnnotation *xds_annotations_v3_FieldMigrateAnnotation_new(upb_arena *arena) {
  return (xds_annotations_v3_FieldMigrateAnnotation *)_upb_msg_new(&xds_annotations_v3_FieldMigrateAnnotation_msginit, arena);
}
UPB_INLINE xds_annotations_v3_FieldMigrateAnnotation *xds_annotations_v3_FieldMigrateAnnotation_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  xds_annotations_v3_FieldMigrateAnnotation *ret = xds_annotations_v3_FieldMigrateAnnotation_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &xds_annotations_v3_FieldMigrateAnnotation_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE xds_annotations_v3_FieldMigrateAnnotation *xds_annotations_v3_FieldMigrateAnnotation_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  xds_annotations_v3_FieldMigrateAnnotation *ret = xds_annotations_v3_FieldMigrateAnnotation_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &xds_annotations_v3_FieldMigrateAnnotation_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *xds_annotations_v3_FieldMigrateAnnotation_serialize(const xds_annotations_v3_FieldMigrateAnnotation *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &xds_annotations_v3_FieldMigrateAnnotation_msginit, arena, len);
}

UPB_INLINE upb_strview xds_annotations_v3_FieldMigrateAnnotation_rename(const xds_annotations_v3_FieldMigrateAnnotation *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }
UPB_INLINE upb_strview xds_annotations_v3_FieldMigrateAnnotation_oneof_promotion(const xds_annotations_v3_FieldMigrateAnnotation *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_strview); }

UPB_INLINE void xds_annotations_v3_FieldMigrateAnnotation_set_rename(xds_annotations_v3_FieldMigrateAnnotation *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}
UPB_INLINE void xds_annotations_v3_FieldMigrateAnnotation_set_oneof_promotion(xds_annotations_v3_FieldMigrateAnnotation *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(8, 16), upb_strview) = value;
}

/* xds.annotations.v3.FileMigrateAnnotation */

UPB_INLINE xds_annotations_v3_FileMigrateAnnotation *xds_annotations_v3_FileMigrateAnnotation_new(upb_arena *arena) {
  return (xds_annotations_v3_FileMigrateAnnotation *)_upb_msg_new(&xds_annotations_v3_FileMigrateAnnotation_msginit, arena);
}
UPB_INLINE xds_annotations_v3_FileMigrateAnnotation *xds_annotations_v3_FileMigrateAnnotation_parse(const char *buf, size_t size,
                        upb_arena *arena) {
  xds_annotations_v3_FileMigrateAnnotation *ret = xds_annotations_v3_FileMigrateAnnotation_new(arena);
  if (!ret) return NULL;
  if (!upb_decode(buf, size, ret, &xds_annotations_v3_FileMigrateAnnotation_msginit, arena)) return NULL;
  return ret;
}
UPB_INLINE xds_annotations_v3_FileMigrateAnnotation *xds_annotations_v3_FileMigrateAnnotation_parse_ex(const char *buf, size_t size,
                           const upb_extreg *extreg, int options,
                           upb_arena *arena) {
  xds_annotations_v3_FileMigrateAnnotation *ret = xds_annotations_v3_FileMigrateAnnotation_new(arena);
  if (!ret) return NULL;
  if (!_upb_decode(buf, size, ret, &xds_annotations_v3_FileMigrateAnnotation_msginit, extreg, options, arena)) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char *xds_annotations_v3_FileMigrateAnnotation_serialize(const xds_annotations_v3_FileMigrateAnnotation *msg, upb_arena *arena, size_t *len) {
  return upb_encode(msg, &xds_annotations_v3_FileMigrateAnnotation_msginit, arena, len);
}

UPB_INLINE upb_strview xds_annotations_v3_FileMigrateAnnotation_move_to_package(const xds_annotations_v3_FileMigrateAnnotation *msg) { return *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview); }

UPB_INLINE void xds_annotations_v3_FileMigrateAnnotation_set_move_to_package(xds_annotations_v3_FileMigrateAnnotation *msg, upb_strview value) {
  *UPB_PTR_AT(msg, UPB_SIZE(0, 0), upb_strview) = value;
}

UPB_INLINE bool xds_annotations_v3_has_message_migrate(const struct google_protobuf_MessageOptions *msg) { return _upb_msg_getext(msg, &xds_annotations_v3_message_migrate_ext) != NULL; }
UPB_INLINE const xds_annotations_v3_MigrateAnnotation* xds_annotations_v3_message_migrate(const struct google_protobuf_MessageOptions *msg) { const upb_msg_ext *ext = _upb_msg_getext(msg, &xds_annotations_v3_message_migrate_ext); UPB_ASSERT(ext); return *UPB_PTR_AT(&ext->data, 0, const xds_annotations_v3_MigrateAnnotation*); }
UPB_INLINE bool xds_annotations_v3_has_field_migrate(const struct google_protobuf_FieldOptions *msg) { return _upb_msg_getext(msg, &xds_annotations_v3_field_migrate_ext) != NULL; }
UPB_INLINE const xds_annotations_v3_FieldMigrateAnnotation* xds_annotations_v3_field_migrate(const struct google_protobuf_FieldOptions *msg) { const upb_msg_ext *ext = _upb_msg_getext(msg, &xds_annotations_v3_field_migrate_ext); UPB_ASSERT(ext); return *UPB_PTR_AT(&ext->data, 0, const xds_annotations_v3_FieldMigrateAnnotation*); }
UPB_INLINE bool xds_annotations_v3_has_enum_migrate(const struct google_protobuf_EnumOptions *msg) { return _upb_msg_getext(msg, &xds_annotations_v3_enum_migrate_ext) != NULL; }
UPB_INLINE const xds_annotations_v3_MigrateAnnotation* xds_annotations_v3_enum_migrate(const struct google_protobuf_EnumOptions *msg) { const upb_msg_ext *ext = _upb_msg_getext(msg, &xds_annotations_v3_enum_migrate_ext); UPB_ASSERT(ext); return *UPB_PTR_AT(&ext->data, 0, const xds_annotations_v3_MigrateAnnotation*); }
UPB_INLINE bool xds_annotations_v3_has_enum_value_migrate(const struct google_protobuf_EnumValueOptions *msg) { return _upb_msg_getext(msg, &xds_annotations_v3_enum_value_migrate_ext) != NULL; }
UPB_INLINE const xds_annotations_v3_MigrateAnnotation* xds_annotations_v3_enum_value_migrate(const struct google_protobuf_EnumValueOptions *msg) { const upb_msg_ext *ext = _upb_msg_getext(msg, &xds_annotations_v3_enum_value_migrate_ext); UPB_ASSERT(ext); return *UPB_PTR_AT(&ext->data, 0, const xds_annotations_v3_MigrateAnnotation*); }
UPB_INLINE bool xds_annotations_v3_has_file_migrate(const struct google_protobuf_FileOptions *msg) { return _upb_msg_getext(msg, &xds_annotations_v3_file_migrate_ext) != NULL; }
UPB_INLINE const xds_annotations_v3_FileMigrateAnnotation* xds_annotations_v3_file_migrate(const struct google_protobuf_FileOptions *msg) { const upb_msg_ext *ext = _upb_msg_getext(msg, &xds_annotations_v3_file_migrate_ext); UPB_ASSERT(ext); return *UPB_PTR_AT(&ext->data, 0, const xds_annotations_v3_FileMigrateAnnotation*); }
extern const upb_msglayout_file xds_annotations_v3_migrate_proto_upb_file_layout;

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port_undef.inc"

#endif  /* XDS_ANNOTATIONS_V3_MIGRATE_PROTO_UPB_H_ */
