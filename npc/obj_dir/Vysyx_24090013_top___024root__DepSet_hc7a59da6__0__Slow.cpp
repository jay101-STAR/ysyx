// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_24090013_top.h for the primary calling header

#include "Vysyx_24090013_top__pch.h"
#include "Vysyx_24090013_top___024root.h"

VL_ATTR_COLD void Vysyx_24090013_top___024root___eval_static(Vysyx_24090013_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vysyx_24090013_top___024root___eval_initial__TOP(Vysyx_24090013_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24090013_top___024root___eval_initial(Vysyx_24090013_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_24090013_top___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vysyx_24090013_top___024root___eval_initial__TOP(Vysyx_24090013_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__key_list[0U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__key_list[1U] = 0U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__pair_list[1U] = 0ULL;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[3U] = 8U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[4U] = 2U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[5U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[2U] = 5U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[3U] = 8U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[4U] = 2U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[5U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[1U] = 0x600000000ULL;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__key_list[0U] = 8U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__key_list[1U] = 5U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[0U] = 3U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[1U] = 4U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[2U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[3U] = 2U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[4U] = 0U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[2U] = 8U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[3U] = 5U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[4U] = 2U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[5U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[2U] = 8U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[3U] = 5U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[4U] = 2U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[5U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__key_list[0U] = 0U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[2U] = 8U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[3U] = 5U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[4U] = 2U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[5U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[0U] = 2U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[2U] = 3U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[3U] = 4U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[0U] = 0x702U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[1U] = 0x601U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[2U] = 0x803U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[3U] = 0x504U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[0U] = 0x73U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[1U] = 0x17U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[2U] = 0x37U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[3U] = 0x67U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[4U] = 0x6fU;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[5U] = 0x13U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[6U] = 0x33U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[0U] = 9U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[1U] = 7U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[2U] = 6U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[3U] = 8U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[4U] = 5U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[5U] = 2U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[6U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[0U] = 0x739U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[1U] = 0x177U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[2U] = 0x376U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[3U] = 0x678U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[4U] = 0x6f5U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[5U] = 0x132U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[6U] = 0x331U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[2U] = 8U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[3U] = 5U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[4U] = 2U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[5U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[5U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[0U] = 0xeU;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[1U] = 0xcU;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[2U] = 0x11U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[3U] = 0xaU;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[4U] = 5U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[5U] = 3U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[2U] = 8U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[3U] = 5U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[4U] = 2U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[5U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[1U] = 0U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[2U] = 0U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[5U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[0U] = 0xeU;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[1U] = 0xcU;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[2U] = 0x10U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[3U] = 0xaU;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[4U] = 4U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[5U] = 3U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__key_list[0U] = 0U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__pair_list[0U] = 0U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[0U] = 7U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[1U] = 6U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[2U] = 8U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[3U] = 5U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[4U] = 2U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[5U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[2U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[3U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[4U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[5U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[0U] = 0xfU;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[1U] = 0xdU;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[2U] = 0x11U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[3U] = 0xbU;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[4U] = 5U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[5U] = 3U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[0U] = 8U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[1U] = 5U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[2U] = 7U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[3U] = 6U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[4U] = 2U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[5U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__key_list[0U] = 8U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__key_list[1U] = 5U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__data_list[0U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__data_list[1U] = 1U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__pair_list[0U] = 0x11U;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__pair_list[1U] = 0xbU;
    if (VL_UNLIKELY((0U != (3U & vlSelfRef.ysyx_24090013_top__DOT__openmips_instrom_addr)))) {
        VL_WRITEF_NX("PC is not 4-byte aligned\n",0);
    }
}

VL_ATTR_COLD void Vysyx_24090013_top___024root___eval_final(Vysyx_24090013_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090013_top___024root___dump_triggers__stl(Vysyx_24090013_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vysyx_24090013_top___024root___eval_phase__stl(Vysyx_24090013_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24090013_top___024root___eval_settle(Vysyx_24090013_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vysyx_24090013_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("/home/jay/Desktop/ics2024/ysyx-workbench/npc/vsrc/ysyx_24090013_top.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vysyx_24090013_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090013_top___024root___dump_triggers__stl(Vysyx_24090013_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24090013_top___024root___stl_sequent__TOP__0(Vysyx_24090013_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24090013_top___024root___eval_stl(Vysyx_24090013_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vysyx_24090013_top___024root___stl_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        vlSelfRef.__Vm_traceActivity[0U] = 1U;
    }
}

void Vysyx_24090013_top___024root____Vdpiimwrap_ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__get_register_value_TOP(IData/*31:0*/ reg_num, IData/*31:0*/ source_value);
void Vysyx_24090013_top___024root____Vdpiimwrap_ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__ebreak_TOP(IData/*31:0*/ station, IData/*31:0*/ inst);

VL_ATTR_COLD void Vysyx_24090013_top___024root___stl_sequent__TOP__0(Vysyx_24090013_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_24090013_top___024root____Vdpiimwrap_ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__get_register_value_TOP(0xaU, 
                                                                                vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf
                                                                                [0xaU]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[0U] 
        = (0x700000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[2U] 
        = (0x500000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[0U] 
        = (0x300000000ULL | (QData)((IData)(((IData)(4U) 
                                             + vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc))));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[1U] 
        = (0x400000000ULL | (QData)((IData)(((IData)(4U) 
                                             + vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc))));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[0U] 
        = ((IData)(4U) + vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[1U] 
        = ((IData)(4U) + vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[0U] 
        = vlSelfRef.inst_rom_1[0U];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[1U] 
        = vlSelfRef.inst_rom_1[1U];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[2U] 
        = vlSelfRef.inst_rom_1[2U];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[3U] 
        = vlSelfRef.inst_rom_1[3U];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[4U] 
        = vlSelfRef.inst_rom_1[4U];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[5U] 
        = vlSelfRef.inst_rom_1[5U];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[6U] 
        = vlSelfRef.inst_rom_1[6U];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[7U] 
        = vlSelfRef.inst_rom_1[7U];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[8U] 
        = vlSelfRef.inst_rom_1[8U];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[9U] 
        = vlSelfRef.inst_rom_1[9U];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[0xaU] 
        = vlSelfRef.inst_rom_1[0xaU];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[0xbU] 
        = vlSelfRef.inst_rom_1[0xbU];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[0xcU] 
        = vlSelfRef.inst_rom_1[0xcU];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[0xdU] 
        = vlSelfRef.inst_rom_1[0xdU];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[0xeU] 
        = vlSelfRef.inst_rom_1[0xeU];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[0xfU] 
        = vlSelfRef.inst_rom_1[0xfU];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[0x10U] 
        = vlSelfRef.inst_rom_1[0x10U];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[0x11U] 
        = vlSelfRef.inst_rom_1[0x11U];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[0x12U] 
        = vlSelfRef.inst_rom_1[0x12U];
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[0x13U] 
        = vlSelfRef.inst_rom_1[0x13U];
    vlSelfRef.__VdfgRegularize_hd87f99a1_0_0 = ((0x13U 
                                                 >= 
                                                 (0x1fU 
                                                  & ((vlSelfRef.ysyx_24090013_top__DOT__openmips_instrom_addr 
                                                      - (IData)(0x80000000U)) 
                                                     >> 2U)))
                                                 ? 
                                                vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom
                                                [(0x1fU 
                                                  & ((vlSelfRef.ysyx_24090013_top__DOT__openmips_instrom_addr 
                                                      - (IData)(0x80000000U)) 
                                                     >> 2U))]
                                                 : 0U);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__pair_list[0U] 
        = (0x100000000ULL | (QData)((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_0_0)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.__VdfgRegularize_hd87f99a1_0_0;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__openmips_instrom_ren) 
                       == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__openmips_instrom_ren) 
           == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__openmips_instrom_ren) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__openmips_instrom_ren) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__hit)
            ? vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__lut_out
            : 0U);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[0U] 
        = (0x700000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data))));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[1U] 
        = (0x600000000ULL | (QData)((IData)((0xfffff000U 
                                             & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data))));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[0U] 
        = (0xe0U | (0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                             >> 7U)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[1U] 
        = (0xc0U | (0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                             >> 7U)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[2U] 
        = (0x100U | (0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                              >> 7U)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[3U] 
        = (0xa0U | (0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                             >> 7U)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[4U] 
        = (0x40U | (0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                             >> 7U)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[5U] 
        = (0x20U | (0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                             >> 7U)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[0U] 
        = (0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                    >> 7U));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[1U] 
        = (0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                    >> 7U));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[2U] 
        = (0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                    >> 7U));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[3U] 
        = (0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                    >> 7U));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[4U] 
        = (0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                    >> 7U));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[5U] 
        = (0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                    >> 7U));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__lut_out 
        = ((- (IData)(((7U & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                              >> 0xcU)) == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__hit 
        = ((7U & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                  >> 0xcU)) == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex1 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__hit)
            ? (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__lut_out)
            : 0U);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[0U] 
        = (0xfffff000U & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[1U] 
        = (0xfffff000U & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immJ 
        = (((- (IData)((vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                        >> 0x1fU))) << 0x15U) | ((0x100000U 
                                                  & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data) 
                                                    | ((0x800U 
                                                        & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                             >> 0x14U))))));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI 
        = (((- (IData)((vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                        >> 0x1fU))) << 0xcU) | (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                >> 0x14U));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data) 
                       == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data) 
           == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list
                          [6U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list
              [6U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list
              [6U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit)
            ? (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out)
            : 0U);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__pair_list[0U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex1;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[4U] 
        = (0x200U | (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex1));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex1;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex1;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[2U] 
        = (0x500000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immJ)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immJ;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[3U] 
        = (0x800000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[4U] 
        = (0x200000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI;
    if ((9U == (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type))) {
        if ((0U == (7U & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                          >> 0xcU)))) {
            Vysyx_24090013_top___024root____Vdpiimwrap_ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__ebreak_TOP(1U, vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data);
        } else {
            Vysyx_24090013_top___024root____Vdpiimwrap_ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__ebreak_TOP(2U, vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data);
        }
    }
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                       == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
           == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_addr 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit)
            ? (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out)
            : 0U);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
            == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__key_list
            [0U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
           == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__key_list
               [1U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_pc_pc_wen 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__hit) 
           && (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__lut_out));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
            == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list
            [0U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
           == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list
               [1U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list
               [2U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list
               [3U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list
               [4U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list
               [5U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit) 
           && (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
            == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list
            [0U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
           == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list
               [1U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list
               [2U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list
               [3U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list
               [4U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list
               [5U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_reg_rs2_ren 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit) 
           && (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
            == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list
            [0U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
           == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list
               [1U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list
               [2U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list
               [3U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list
               [4U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list
               [5U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_reg_rs1_ren 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit) 
           && (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__lut_out 
        = ((- (IData)(((vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                        >> 0x19U) == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__hit 
        = ((vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
            >> 0x19U) == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex2 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__hit)
            ? (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__lut_out)
            : 0U);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[0U] 
        = (0xeU | (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[1U] 
        = (0xcU | (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[2U] 
        = (0x10U | (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[3U] 
        = (0xaU | (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[4U] 
        = (4U | (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[5U] 
        = (2U | (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs2_data 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_reg_rs2_ren)
            ? vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf
           [(0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                      >> 0x14U))] : 0U);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_reg_rs1_ren)
            ? vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf
           [(0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                      >> 0xfU))] : 0U);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[5U] 
        = (0x100U | (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex2));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex2;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out 
        = (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
            == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list
            [0U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
           == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list
               [1U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list
               [2U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list
               [3U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list
               [4U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out) 
           | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
               == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list
               [5U]) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_wen 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit) 
           && (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[5U] 
        = (0x100000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs2_data)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs2_data;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[3U] 
        = (0x800000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[4U] 
        = (0x200000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[5U] 
        = (0x100000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                       == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
           == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out) 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_alucex 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit)
            ? (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out)
            : 0U);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                       == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
           == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs2_data 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit)
            ? vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out
            : 0U);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                       == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
           == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs1_data 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit)
            ? vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out
            : 0U);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[2U] 
        = (0x100000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs1_data)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs1_data;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs1_data 
           + vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs2_data);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__pair_list[0U] 
        = (0x800000000ULL | (QData)((IData)((0xfffffffeU 
                                             & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add))));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__pair_list[1U] 
        = (0x500000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[3U] 
        = (0x200000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[4U] 
        = (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__data_list[0U] 
        = (0xfffffffeU & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                       == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
           == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_pc_pc_data 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__hit)
            ? vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__lut_out
            : ((IData)(4U) + vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_alucex) 
                       == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_alucex) 
           == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_alucex) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_alucex) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_alucex) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_alucex) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_alucex) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_alucex) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_alucex) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_alucex) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__hit)
            ? vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__lut_out
            : 0U);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_pc0__DOT__new_pc 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_pc_pc_wen)
            ? vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_pc_pc_data
            : ((IData)(4U) + vlSelfRef.ysyx_24090013_top__DOT__openmips_instrom_addr));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[0U] 
        = (0x800000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[1U] 
        = (0x500000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[2U] 
        = (0x700000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[3U] 
        = (0x600000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[4U] 
        = (0x200000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[5U] 
        = (0x100000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1)));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[0U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[1U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[2U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[3U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[4U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[5U] 
        = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1;
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                       == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list
                       [0U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
           == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list
           [0U]);
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list
                          [1U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list
              [1U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list
                          [2U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list
              [2U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list
                          [3U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list
              [3U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list
                          [4U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list
              [4U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out 
        = (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
                          == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list
                          [5U]))) & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit) 
           | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type) 
              == vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list
              [5U]));
    vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_data 
        = ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit)
            ? vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out
            : 0U);
}

VL_ATTR_COLD void Vysyx_24090013_top___024root___eval_triggers__stl(Vysyx_24090013_top___024root* vlSelf);

VL_ATTR_COLD bool Vysyx_24090013_top___024root___eval_phase__stl(Vysyx_24090013_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vysyx_24090013_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vysyx_24090013_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090013_top___024root___dump_triggers__ico(Vysyx_24090013_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root___dump_triggers__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090013_top___024root___dump_triggers__act(Vysyx_24090013_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vysyx_24090013_top___024root___dump_triggers__nba(Vysyx_24090013_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vysyx_24090013_top___024root___ctor_var_reset(Vysyx_24090013_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(640, vlSelf->inst_rom_1);
    vlSelf->ysyx_24090013_top__DOT__instrom_openmips_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__openmips_instrom_addr = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__openmips_instrom_ren = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_reg_rs1_ren = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_reg_rs2_ren = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_alucex = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_addr = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_pc_pc_wen = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_pc_pc_data = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_pc0__DOT__new_pc = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immJ = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex1 = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex2 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(4);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(36);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(36);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(11);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(15);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(12);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(8);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1 = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(36);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(40);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(36);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(1);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_I(9);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(5);
    }
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(5);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 20; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(33);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->__VdfgRegularize_hd87f99a1_0_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
