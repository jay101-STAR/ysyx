// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYX_24090013_TOP__DPI_H_
#define VERILATED_VYSYX_24090013_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/jay/Desktop/ics2024/ysyx-workbench/npc/vsrc/ysyx_24090013_id.v:18:32
    extern void ebreak(int station, int inst);
    // DPI import at /home/jay/Desktop/ics2024/ysyx-workbench/npc/vsrc/ysyx_24090013_registerfile.v:31:32
    extern void get_register_value(int reg_num, int source_value);

#ifdef __cplusplus
}
#endif

#endif  // guard
