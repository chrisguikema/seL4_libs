/*
 * Copyright 2018, Data61
 * Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 * ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(DATA61_BSD)
 */
#ifndef __DEBUG_ARCH_REGISTERS_H
#define __DEBUG_ARCH_REGISTERS_H

#include <sel4/sel4.h>
#include <stddef.h>
#include <utils/util.h>

static UNUSED const char *register_names[] = {
    /* FIXME: Add the full set of registers */
    "ra",
    "sp",
    "t0",
    "t1",
    "t2",
    "a0",
    "a1",
    "a2",
    "a3",
    "a4",
    "a5",
    "a6",
    "a7",
    "t3",
    "t4",
    "t5",
    "t6",

};

#endif /* __DEBUG_ARCH_REGISTERS_H */