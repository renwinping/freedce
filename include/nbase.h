/* Generated by IDL compiler version OSF DCE T1.1.0-03 with GNU Flex/Bison */
#ifndef nbase_v0_0_included
#define nbase_v0_0_included
#ifndef IDLBASE_H
#include <dce/idlbase.h>
#endif

#ifdef __cplusplus
    extern "C" {
#endif

#include <dce/nbase.h>
typedef idl_usmall_int unsigned8;
typedef idl_ushort_int unsigned16;
typedef idl_ulong_int unsigned32;
typedef idl_small_int signed8;
typedef idl_short_int signed16;
typedef idl_long_int signed32;
typedef unsigned32 boolean32;
typedef idl_ulong_int error_status_t;
#define error_status_ok (0)
typedef struct  {
unsigned32 time_low;
unsigned16 time_mid;
unsigned16 time_hi_and_version;
unsigned8 clock_seq_hi_and_reserved;
unsigned8 clock_seq_low;
idl_byte node[6];
} uuid_t;
typedef uuid_t *uuid_p_t;
typedef struct  {
idl_ulong_int time_high;
idl_ushort_int time_low;
idl_ushort_int reserved;
idl_byte family;
idl_byte host[7];
} uuid_old_t;
typedef struct  {
unsigned32 tower_length;
idl_byte tower_octet_string[1];
} twr_t;
typedef twr_t *twr_p_t;
#define ndr_c_int_big_endian (0)
#define ndr_c_int_little_endian (1)
#define ndr_c_float_ieee (0)
#define ndr_c_float_vax (1)
#define ndr_c_float_cray (2)
#define ndr_c_float_ibm (3)
#define ndr_c_char_ascii (0)
#define ndr_c_char_ebcdic (1)
typedef struct  {
unsigned8 int_rep;
unsigned8 char_rep;
unsigned8 float_rep;
idl_byte reserved;
} ndr_format_t;
typedef ndr_format_t *ndr_format_p_t;
typedef struct ndr_context_handle {
unsigned32 context_handle_attributes;
uuid_t context_handle_uuid;
} ndr_context_handle;
typedef idl_byte ISO_LATIN_1;
typedef struct  {
idl_byte row;
idl_byte column;
} ISO_MULTI_LINGUAL;
typedef struct  {
idl_byte group;
idl_byte plane;
idl_byte row;
idl_byte column;
} ISO_UCS;
#define dce_c_rpc_authn_protocol_none (0)
#define dce_c_rpc_authn_protocol_krb5 (1)
#define dce_c_rpc_authn_protocol_dummy (2)
#define dce_c_rpc_authn_protocol_dssa (3)
typedef unsigned8 dce_rpc_authn_protocol_id_t;

#ifdef __cplusplus
    }
#endif

#endif
