/*
 * 
 * (c) Copyright 1989 OPEN SOFTWARE FOUNDATION, INC.
 * (c) Copyright 1989 HEWLETT-PACKARD COMPANY
 * (c) Copyright 1989 DIGITAL EQUIPMENT CORPORATION
 * To anyone who acknowledges that this file is provided "AS IS"
 * without any express or implied warranty:
 *                 permission to use, copy, modify, and distribute this
 * file for any purpose is hereby granted without fee, provided that
 * the above copyright notices and this notice appears in all source
 * code copies, and that none of the names of Open Software
 * Foundation, Inc., Hewlett-Packard Company, or Digital Equipment
 * Corporation be used in advertising or publicity pertaining to
 * distribution of the software without specific, written prior
 * permission.  Neither Open Software Foundation, Inc., Hewlett-
 * Packard Company, nor Digital Equipment Corporation makes any
 * representations about the suitability of this software for any
 * purpose.
 * 
 */
/*
 */
/*
**
**  NAME:
**
**      rpcmem.c
**
**  FACILITY:
**
**      Remote Procedure Call (RPC) 
**
**  ABSTRACT:
**
**  non-macro version of runtime memory allocator (see rpcmem.h)
**
**
*/

#include <commonp.h>
#ifdef HAVE_OS_WIN32
#include <dce/dce_win32mem.h>
#endif

PRIVATE pointer_t rpc__mem_alloc
#ifdef _DCE_PROTO_
(
    unsigned32 size,
    unsigned32 type,
    unsigned32 flags __attribute__((__unused__))
)
#else
(size, type, flags)
unsigned32 size;
unsigned32 type;
unsigned32 flags;
#endif
{
    char *addr;

    RPC_MEM_ALLOC_IL(addr, char *, size, type, flags);

#ifdef DEBUG
    if ((type & 0xff) == rpc_g_dbg_switches[rpc_es_dbg_mem_type])
    {
        RPC_DBG_PRINTF(rpc_e_dbg_mem, 1,
	    ("(rpc__mem_alloc) type %x - %x @ %x\n",
	    type, size, addr));
    }
    else
    {
	RPC_DBG_PRINTF(rpc_e_dbg_mem, 10,
	    ("(rpc__mem_alloc) type %x - %x @ %x\n",
	    type, size, addr));
    }
#endif

    return addr;
}

PRIVATE pointer_t rpc__mem_realloc
#ifdef _DCE_PROTO_
(
    pointer_t addr,
    unsigned32 size,
    unsigned32 type,
    unsigned32 flags __attribute__((__unused__))
)
#else
(addr, size, type, flags)
pointer_t addr;
unsigned32 size;
unsigned32 type;
unsigned32 flags;
#endif
{
    RPC_MEM_REALLOC_IL(addr, pointer_t, size, type, flags);

#ifdef DEBUG
    if ((type & 0xff) == rpc_g_dbg_switches[rpc_es_dbg_mem_type])
    {
        RPC_DBG_PRINTF(rpc_e_dbg_mem, 1,
	    ("(rpc__mem_realloc) type %x - %x @ %x\n",
	    type, size, addr));
    }
    else
    {
	RPC_DBG_PRINTF(rpc_e_dbg_mem, 10,
	    ("(rpc__mem_realloc) type %x - %x @ %x\n",
	    type, size, addr));
    }
#endif

    return addr;
}

PRIVATE void rpc__mem_free
#ifdef _DCE_PROTO_
(
    pointer_t addr,
    unsigned32 type
)
#else
(addr, type)
pointer_t addr;
unsigned32 type;
#endif
{

#ifdef DEBUG
    if ((type & 0xff) == rpc_g_dbg_switches[rpc_es_dbg_mem_type])
    {
        RPC_DBG_PRINTF(rpc_e_dbg_mem, 1,
	    ("(rpc__mem_free) type %x @ %x\n",
	    type, addr));
    }
    else
    {
	RPC_DBG_PRINTF(rpc_e_dbg_mem, 10,
	    ("(rpc__mem_free) type %x @ %x\n",
	    type, addr));
    }
#endif

    RPC_MEM_FREE_IL(addr, type);
}
