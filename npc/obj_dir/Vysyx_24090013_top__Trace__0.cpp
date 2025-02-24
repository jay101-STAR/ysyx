// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24090013_top__Syms.h"


void Vysyx_24090013_top___024root__trace_chg_0_sub_0(Vysyx_24090013_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_24090013_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root__trace_chg_0\n"); );
    // Init
    Vysyx_24090013_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24090013_top___024root*>(voidSelf);
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_24090013_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_24090013_top___024root__trace_chg_0_sub_0(Vysyx_24090013_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<7>/*223:0*/ __Vtemp_11;
    VlWide<7>/*223:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<7>/*223:0*/ __Vtemp_33;
    VlWide<7>/*223:0*/ __Vtemp_42;
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+1,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__key_list[1]));
        bufp->chgCData(oldp+2,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+3,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+4,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+5,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__key_list[1]),4);
        bufp->chgBit(oldp+6,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+7,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__data_list[1]));
        bufp->chgCData(oldp+8,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+9,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+10,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[0]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[1]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[2]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[3]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[4]),8);
        bufp->chgCData(oldp+15,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+16,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+17,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+18,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+19,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+20,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+21,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+22,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+23,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+24,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+25,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+26,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+27,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+28,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+29,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+30,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+31,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+32,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[5]),4);
        bufp->chgSData(oldp+33,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[0]),11);
        bufp->chgSData(oldp+34,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[1]),11);
        bufp->chgSData(oldp+35,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[2]),11);
        bufp->chgSData(oldp+36,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[3]),11);
        bufp->chgSData(oldp+37,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[4]),11);
        bufp->chgSData(oldp+38,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[5]),11);
        bufp->chgSData(oldp+39,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[6]),11);
        bufp->chgCData(oldp+40,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+41,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+42,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+43,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+44,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+45,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+46,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+47,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+48,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+49,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+50,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[3]),4);
        bufp->chgCData(oldp+51,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[4]),4);
        bufp->chgCData(oldp+52,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[5]),4);
        bufp->chgCData(oldp+53,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[6]),4);
        bufp->chgCData(oldp+54,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+55,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+56,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+57,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+58,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+59,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+60,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+61,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+62,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[2]),5);
        bufp->chgCData(oldp+63,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[3]),5);
        bufp->chgCData(oldp+64,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[4]),5);
        bufp->chgCData(oldp+65,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[5]),5);
        bufp->chgCData(oldp+66,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+67,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+68,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+69,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+70,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+71,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[5]),4);
        bufp->chgBit(oldp+72,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+73,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+74,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+75,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+76,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+77,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[5]));
        bufp->chgCData(oldp+78,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+79,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+80,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[2]),5);
        bufp->chgCData(oldp+81,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[3]),5);
        bufp->chgCData(oldp+82,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[4]),5);
        bufp->chgCData(oldp+83,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[5]),5);
        bufp->chgCData(oldp+84,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+85,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+86,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+87,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+88,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+89,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[5]),4);
        bufp->chgBit(oldp+90,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+91,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+92,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+93,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+94,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+95,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[5]));
        bufp->chgCData(oldp+96,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+97,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+98,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[2]),5);
        bufp->chgCData(oldp+99,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[3]),5);
        bufp->chgCData(oldp+100,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[4]),5);
        bufp->chgCData(oldp+101,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[5]),5);
        bufp->chgCData(oldp+102,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+103,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+104,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+105,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+106,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+107,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[5]),4);
        bufp->chgBit(oldp+108,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+109,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+110,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+111,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+112,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+113,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[5]));
        bufp->chgCData(oldp+114,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+115,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+116,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+117,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+118,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+119,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+120,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+121,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+122,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+123,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+124,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+125,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[5]),4);
        bufp->chgSData(oldp+126,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__pair_list[0]),11);
        bufp->chgCData(oldp+127,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+128,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__data_list[0]),8);
        bufp->chgCData(oldp+129,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__key_list[0]),7);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+130,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[0]),32);
        bufp->chgIData(oldp+131,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[1]),32);
        bufp->chgIData(oldp+132,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[2]),32);
        bufp->chgIData(oldp+133,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[3]),32);
        bufp->chgIData(oldp+134,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[4]),32);
        bufp->chgIData(oldp+135,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[5]),32);
        bufp->chgIData(oldp+136,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[6]),32);
        bufp->chgIData(oldp+137,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[7]),32);
        bufp->chgIData(oldp+138,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[8]),32);
        bufp->chgIData(oldp+139,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[9]),32);
        bufp->chgIData(oldp+140,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[10]),32);
        bufp->chgIData(oldp+141,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[11]),32);
        bufp->chgIData(oldp+142,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[12]),32);
        bufp->chgIData(oldp+143,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[13]),32);
        bufp->chgIData(oldp+144,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[14]),32);
        bufp->chgIData(oldp+145,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[15]),32);
        bufp->chgIData(oldp+146,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[16]),32);
        bufp->chgIData(oldp+147,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[17]),32);
        bufp->chgIData(oldp+148,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[18]),32);
        bufp->chgIData(oldp+149,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[19]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgIData(oldp+150,(vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data),32);
        __Vtemp_1[0U] = vlSelfRef.__VdfgRegularize_hd87f99a1_0_0;
        __Vtemp_1[1U] = 1U;
        __Vtemp_1[2U] = 0U;
        bufp->chgWData(oldp+151,(__Vtemp_1),66);
        bufp->chgQData(oldp+154,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+156,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+158,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+159,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+160,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+161,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+162,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data),32);
        bufp->chgIData(oldp+163,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs2_data),32);
        bufp->chgBit(oldp+164,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_reg_rs1_ren));
        bufp->chgBit(oldp+165,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_reg_rs2_ren));
        bufp->chgCData(oldp+166,((0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+167,((0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                           >> 0x14U))),5);
        bufp->chgIData(oldp+168,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs1_data),32);
        bufp->chgIData(oldp+169,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs2_data),32);
        bufp->chgBit(oldp+170,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen));
        bufp->chgCData(oldp+171,((0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                           >> 7U))),5);
        bufp->chgCData(oldp+172,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type),4);
        bufp->chgCData(oldp+173,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_alucex),8);
        bufp->chgIData(oldp+174,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_data),32);
        bufp->chgCData(oldp+175,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_addr),5);
        bufp->chgBit(oldp+176,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_wen));
        bufp->chgBit(oldp+177,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_pc_pc_wen));
        bufp->chgIData(oldp+178,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_pc_pc_data),32);
        bufp->chgIData(oldp+179,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1),32);
        bufp->chgIData(oldp+180,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add),32);
        bufp->chgBit(oldp+181,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+182,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__hit));
        __Vtemp_3[0U] = (IData)((0x800000000ULL | (QData)((IData)(
                                                                  (0xfffffffeU 
                                                                   & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add)))));
        __Vtemp_3[1U] = ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add 
                          << 4U) | (IData)(((0x800000000ULL 
                                             | (QData)((IData)(
                                                               (0xfffffffeU 
                                                                & vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add)))) 
                                            >> 0x20U)));
        __Vtemp_3[2U] = (0x50U | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add 
                                  >> 0x1cU));
        bufp->chgWData(oldp+183,(__Vtemp_3),72);
        bufp->chgQData(oldp+186,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+188,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgIData(oldp+190,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+192,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+193,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__hit));
        __Vtemp_11[0U] = (IData)((0x300000000ULL | (QData)((IData)(
                                                                   ((IData)(4U) 
                                                                    + vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc)))));
        __Vtemp_11[1U] = ((((IData)(4U) + vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc) 
                           << 8U) | (IData)(((0x300000000ULL 
                                              | (QData)((IData)(
                                                                ((IData)(4U) 
                                                                 + vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc)))) 
                                             >> 0x20U)));
        __Vtemp_11[2U] = (0x400U | ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs1_data 
                                     << 0x10U) | (((IData)(4U) 
                                                   + vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc) 
                                                  >> 0x18U)));
        __Vtemp_11[3U] = (0x10000U | ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add 
                                       << 0x18U) | 
                                      (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs1_data 
                                       >> 0x10U)));
        __Vtemp_11[4U] = (0x2000000U | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add 
                                        >> 8U));
        __Vtemp_11[5U] = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add;
        __Vtemp_11[6U] = 0U;
        bufp->chgWData(oldp+194,(__Vtemp_11),200);
        bufp->chgQData(oldp+201,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgQData(oldp+203,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[1]),40);
        bufp->chgQData(oldp+205,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[2]),40);
        bufp->chgQData(oldp+207,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[3]),40);
        bufp->chgQData(oldp+209,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[4]),40);
        bufp->chgIData(oldp+211,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+212,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+213,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+214,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+215,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+216,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+217,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__hit));
        __Vtemp_21[0U] = (IData)((0x800000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1))));
        __Vtemp_21[1U] = ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1 
                           << 4U) | (IData)(((0x800000000ULL 
                                              | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1))) 
                                             >> 0x20U)));
        __Vtemp_21[2U] = (0x50U | ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1 
                                    << 8U) | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1 
                                              >> 0x1cU)));
        __Vtemp_21[3U] = (0x700U | ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1 
                                     << 0xcU) | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1 
                                                 >> 0x18U)));
        __Vtemp_21[4U] = (0x6000U | ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1 
                                      << 0x10U) | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1 
                                                   >> 0x14U)));
        __Vtemp_21[5U] = (0x20000U | ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1 
                                       << 0x14U) | 
                                      (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1 
                                       >> 0x10U)));
        __Vtemp_21[6U] = (0x100000U | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1 
                                       >> 0xcU));
        bufp->chgWData(oldp+218,(__Vtemp_21),216);
        bufp->chgQData(oldp+225,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+227,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+229,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+231,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+233,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+235,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgIData(oldp+237,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+238,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+239,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+240,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+241,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+242,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+243,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+244,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+245,((0x445418eU | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen) 
                                                 << 0x19U) 
                                                | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen) 
                                                    << 0x14U) 
                                                   | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen) 
                                                       << 0xfU) 
                                                      | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen) 
                                                             << 5U) 
                                                            | (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen)))))))),30);
        bufp->chgCData(oldp+246,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+247,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+248,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[2]),5);
        bufp->chgCData(oldp+249,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[3]),5);
        bufp->chgCData(oldp+250,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[4]),5);
        bufp->chgCData(oldp+251,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[5]),5);
        bufp->chgBit(oldp+252,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+253,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+254,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[2]));
        bufp->chgBit(oldp+255,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[3]));
        bufp->chgBit(oldp+256,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[4]));
        bufp->chgBit(oldp+257,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[5]));
        bufp->chgBit(oldp+258,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+259,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+260,((0x4040500000000ULL 
                                  | (((QData)((IData)(
                                                      (0x1fU 
                                                       & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                          >> 7U)))) 
                                      << 0x2dU) | (
                                                   ((QData)((IData)(
                                                                    (0x1fU 
                                                                     & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                                        >> 7U)))) 
                                                    << 0x24U) 
                                                   | (QData)((IData)(
                                                                     (0x40180e0U 
                                                                      | ((0xf8000000U 
                                                                          & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                                             << 0x14U)) 
                                                                         | ((0x7c0000U 
                                                                             & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                                                << 0xbU)) 
                                                                            | ((0x3e00U 
                                                                                & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                                                << 2U)) 
                                                                               | (0x1fU 
                                                                                & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                                                >> 7U)))))))))))),54);
        bufp->chgSData(oldp+262,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+263,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgSData(oldp+264,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[2]),9);
        bufp->chgSData(oldp+265,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[3]),9);
        bufp->chgSData(oldp+266,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[4]),9);
        bufp->chgSData(oldp+267,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[5]),9);
        bufp->chgCData(oldp+268,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[0]),5);
        bufp->chgCData(oldp+269,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[1]),5);
        bufp->chgCData(oldp+270,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[2]),5);
        bufp->chgCData(oldp+271,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[3]),5);
        bufp->chgCData(oldp+272,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[4]),5);
        bufp->chgCData(oldp+273,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[5]),5);
        bufp->chgCData(oldp+274,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out),5);
        bufp->chgBit(oldp+275,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+276,((7U & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+277,((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data)),7);
        bufp->chgCData(oldp+278,((vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                  >> 0x19U)),7);
        bufp->chgSData(oldp+279,((vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+280,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI),32);
        bufp->chgIData(oldp+281,((vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                  >> 0xcU)),20);
        bufp->chgIData(oldp+282,((0xfffff000U & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data)),32);
        bufp->chgIData(oldp+283,(((0x80000U & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                               >> 0xcU)) 
                                  | ((0x7f800U & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                  >> 1U)) 
                                     | ((0x400U & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                   >> 0xaU)) 
                                        | (0x3ffU & 
                                           (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                            >> 0x15U)))))),20);
        bufp->chgIData(oldp+284,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immJ),32);
        bufp->chgCData(oldp+285,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex1),8);
        bufp->chgCData(oldp+286,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex2),8);
        bufp->chgCData(oldp+287,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+288,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit));
        __Vtemp_23[0U] = (IData)((0x200504803601702ULL 
                                  | ((QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex1)) 
                                     << 0x30U)));
        __Vtemp_23[1U] = (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex2) 
                           << 0x1cU) | (IData)(((0x200504803601702ULL 
                                                 | ((QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex1)) 
                                                    << 0x30U)) 
                                                >> 0x20U)));
        __Vtemp_23[2U] = (0x10U | ((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex2) 
                                   >> 4U));
        bufp->chgWData(oldp+289,(__Vtemp_23),72);
        bufp->chgSData(oldp+292,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[0]),12);
        bufp->chgSData(oldp+293,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[1]),12);
        bufp->chgSData(oldp+294,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[2]),12);
        bufp->chgSData(oldp+295,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[3]),12);
        bufp->chgSData(oldp+296,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[4]),12);
        bufp->chgSData(oldp+297,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[5]),12);
        bufp->chgCData(oldp+298,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[0]),8);
        bufp->chgCData(oldp+299,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[1]),8);
        bufp->chgCData(oldp+300,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[2]),8);
        bufp->chgCData(oldp+301,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[3]),8);
        bufp->chgCData(oldp+302,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[4]),8);
        bufp->chgCData(oldp+303,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[5]),8);
        bufp->chgCData(oldp+304,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+305,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+306,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+307,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+308,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+309,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+310,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+311,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit));
        __Vtemp_33[0U] = (IData)((0x700000000ULL | (QData)((IData)(
                                                                   (0xfffff000U 
                                                                    & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data)))));
        __Vtemp_33[1U] = ((0xffff0000U & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                          << 4U)) | (IData)(
                                                            ((0x700000000ULL 
                                                              | (QData)((IData)(
                                                                                (0xfffff000U 
                                                                                & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data)))) 
                                                             >> 0x20U)));
        __Vtemp_33[2U] = (0x60U | ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immJ 
                                    << 8U) | (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                              >> 0x1cU)));
        __Vtemp_33[3U] = (0x500U | ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data 
                                     << 0xcU) | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immJ 
                                                 >> 0x18U)));
        __Vtemp_33[4U] = (0x8000U | ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data 
                                      << 0x10U) | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data 
                                                   >> 0x14U)));
        __Vtemp_33[5U] = (0x20000U | ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data 
                                       << 0x14U) | 
                                      (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data 
                                       >> 0x10U)));
        __Vtemp_33[6U] = (0x100000U | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data 
                                       >> 0xcU));
        bufp->chgWData(oldp+312,(__Vtemp_33),216);
        bufp->chgQData(oldp+319,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+321,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+323,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+325,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+327,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+329,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgIData(oldp+331,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+332,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+333,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+334,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+335,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+336,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+337,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+338,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit));
        __Vtemp_42[0U] = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc;
        __Vtemp_42[1U] = 7U;
        __Vtemp_42[2U] = (0x60U | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc 
                                   << 8U));
        __Vtemp_42[3U] = (0x500U | ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI 
                                     << 0xcU) | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc 
                                                 >> 0x18U)));
        __Vtemp_42[4U] = (0x8000U | ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI 
                                      << 0x10U) | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI 
                                                   >> 0x14U)));
        __Vtemp_42[5U] = (0x20000U | ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs2_data 
                                       << 0x14U) | 
                                      (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI 
                                       >> 0x10U)));
        __Vtemp_42[6U] = (0x100000U | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs2_data 
                                       >> 0xcU));
        bufp->chgWData(oldp+339,(__Vtemp_42),216);
        bufp->chgQData(oldp+346,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+348,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+350,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+352,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+354,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+356,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgIData(oldp+358,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+359,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+360,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+361,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+362,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+363,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+364,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+365,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+366,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+367,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+368,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex1),15);
        bufp->chgSData(oldp+369,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__pair_list[0]),15);
        bufp->chgCData(oldp+370,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__data_list[0]),8);
        bufp->chgCData(oldp+371,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+372,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+373,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_pc0__DOT__new_pc),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+374,(vlSelfRef.ysyx_24090013_top__DOT__openmips_instrom_addr),32);
        bufp->chgBit(oldp+375,(vlSelfRef.ysyx_24090013_top__DOT__openmips_instrom_ren));
        bufp->chgIData(oldp+376,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc),32);
        bufp->chgIData(oldp+377,(((IData)(4U) + vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc)),32);
        bufp->chgIData(oldp+378,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[0]),32);
        bufp->chgIData(oldp+379,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[1]),32);
        bufp->chgIData(oldp+380,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[2]),32);
        bufp->chgIData(oldp+381,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[3]),32);
        bufp->chgIData(oldp+382,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[4]),32);
        bufp->chgIData(oldp+383,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[5]),32);
        bufp->chgIData(oldp+384,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[6]),32);
        bufp->chgIData(oldp+385,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[7]),32);
        bufp->chgIData(oldp+386,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[8]),32);
        bufp->chgIData(oldp+387,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[9]),32);
        bufp->chgIData(oldp+388,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[10]),32);
        bufp->chgIData(oldp+389,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[11]),32);
        bufp->chgIData(oldp+390,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[12]),32);
        bufp->chgIData(oldp+391,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[13]),32);
        bufp->chgIData(oldp+392,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[14]),32);
        bufp->chgIData(oldp+393,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[15]),32);
        bufp->chgIData(oldp+394,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[16]),32);
        bufp->chgIData(oldp+395,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[17]),32);
        bufp->chgIData(oldp+396,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[18]),32);
        bufp->chgIData(oldp+397,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[19]),32);
        bufp->chgIData(oldp+398,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[20]),32);
        bufp->chgIData(oldp+399,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[21]),32);
        bufp->chgIData(oldp+400,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[22]),32);
        bufp->chgIData(oldp+401,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[23]),32);
        bufp->chgIData(oldp+402,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[24]),32);
        bufp->chgIData(oldp+403,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[25]),32);
        bufp->chgIData(oldp+404,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[26]),32);
        bufp->chgIData(oldp+405,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[27]),32);
        bufp->chgIData(oldp+406,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[28]),32);
        bufp->chgIData(oldp+407,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[29]),32);
        bufp->chgIData(oldp+408,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[30]),32);
        bufp->chgIData(oldp+409,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+410,(vlSelfRef.clk));
    bufp->chgBit(oldp+411,(vlSelfRef.rst));
    bufp->chgWData(oldp+412,(vlSelfRef.inst_rom_1),640);
}

void Vysyx_24090013_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_24090013_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24090013_top___024root*>(voidSelf);
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
