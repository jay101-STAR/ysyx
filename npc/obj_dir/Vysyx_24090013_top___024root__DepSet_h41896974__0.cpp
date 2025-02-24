// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090013_top.h for the primary calling header

#include "Vysyx_24090013_top__pch.h"
#include "Vysyx_24090013_top__Syms.h"
#include "Vysyx_24090013_top___024root.h"

extern "C" void ebreak(int station, int inst);

VL_INLINE_OPT void Vysyx_24090013_top___024root____Vdpiimwrap_ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root____Vdpiimwrap_ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__ebreak_TOP\n"); );
    // Body
    int station__Vcvt;
    for (size_t station__Vidx = 0; station__Vidx < 1; ++station__Vidx) station__Vcvt = station;
    int inst__Vcvt;
    for (size_t inst__Vidx = 0; inst__Vidx < 1; ++inst__Vidx) inst__Vcvt = inst;
    ebreak(station__Vcvt, inst__Vcvt);
}

extern "C" void get_register_value(int reg_num, int source_value);

VL_INLINE_OPT void Vysyx_24090013_top___024root____Vdpiimwrap_ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__get_register_value_TOP(IData/*31:0*/ reg_num, IData/*31:0*/ source_value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root____Vdpiimwrap_ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__get_register_value_TOP\n"); );
    // Body
    int reg_num__Vcvt;
    for (size_t reg_num__Vidx = 0; reg_num__Vidx < 1; ++reg_num__Vidx) reg_num__Vcvt = reg_num;
    int source_value__Vcvt;
    for (size_t source_value__Vidx = 0; source_value__Vidx < 1; ++source_value__Vidx) source_value__Vcvt = source_value;
    get_register_value(reg_num__Vcvt, source_value__Vcvt);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090013_top___024root___dump_triggers__ico(Vysyx_24090013_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24090013_top___024root___eval_triggers__ico(Vysyx_24090013_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root___eval_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered.set(0U, (IData)(vlSelfRef.__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24090013_top___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090013_top___024root___dump_triggers__act(Vysyx_24090013_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vysyx_24090013_top___024root___eval_triggers__act(Vysyx_24090013_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vysyx_24090013_top___024root___dump_triggers__act(vlSelf);
    }
#endif
}
