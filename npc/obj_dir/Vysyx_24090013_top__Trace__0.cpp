// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vysyx_24090013_top__Syms.h"


void Vysyx_24090013_top___024root__trace_chg_0_sub_0(Vysyx_24090013_top___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vysyx_24090013_top___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root__trace_chg_0\n"); );
    // Init
    Vysyx_24090013_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24090013_top___024root*>(voidSelf);
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_24090013_top___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_24090013_top___024root__trace_chg_0_sub_0(Vysyx_24090013_top___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_7;
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[0U])) {
        bufp->chgBit(oldp+0,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__key_list[0]));
        bufp->chgBit(oldp+1,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__key_list[1]));
        bufp->chgCData(oldp+2,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[0]),8);
        bufp->chgCData(oldp+3,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+4,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+5,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+6,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+7,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+8,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[1]),4);
        bufp->chgSData(oldp+9,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[0]),11);
        bufp->chgSData(oldp+10,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[1]),11);
        bufp->chgSData(oldp+11,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[2]),11);
        bufp->chgCData(oldp+12,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+13,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+14,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+15,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[0]),4);
        bufp->chgCData(oldp+16,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[1]),4);
        bufp->chgCData(oldp+17,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[2]),4);
        bufp->chgCData(oldp+18,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+19,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+20,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+21,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+22,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+23,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[1]),4);
        bufp->chgBit(oldp+24,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+25,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[1]));
        bufp->chgCData(oldp+26,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+27,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+28,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+29,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[1]),4);
        bufp->chgBit(oldp+30,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+31,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[1]));
        bufp->chgCData(oldp+32,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+33,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[1]),5);
        bufp->chgCData(oldp+34,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+35,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[1]),4);
        bufp->chgBit(oldp+36,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+37,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[1]));
        bufp->chgCData(oldp+38,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+39,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+40,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+41,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[1]),4);
        bufp->chgSData(oldp+42,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__pair_list[0]),11);
        bufp->chgCData(oldp+43,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__key_list[0]),3);
        bufp->chgCData(oldp+44,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__data_list[0]),8);
        bufp->chgCData(oldp+45,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__key_list[0]),7);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+46,(vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data),32);
        bufp->chgIData(oldp+47,(vlSelfRef.ysyx_24090013_top__DOT__openmips_instrom_addr),32);
        bufp->chgBit(oldp+48,(vlSelfRef.ysyx_24090013_top__DOT__openmips_instrom_ren));
        __Vtemp_1[0U] = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom
            [(0x3ffU & ((vlSelfRef.ysyx_24090013_top__DOT__openmips_instrom_addr 
                         - (IData)(0x80000000U)) >> 2U))];
        __Vtemp_1[1U] = 1U;
        __Vtemp_1[2U] = 0U;
        bufp->chgWData(oldp+49,(__Vtemp_1),66);
        bufp->chgQData(oldp+52,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__pair_list[0]),33);
        bufp->chgQData(oldp+54,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__pair_list[1]),33);
        bufp->chgIData(oldp+56,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+57,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+58,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+59,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+60,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data),32);
        bufp->chgIData(oldp+61,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs2_data),32);
        bufp->chgBit(oldp+62,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_reg_rs1_ren));
        bufp->chgBit(oldp+63,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_reg_rs2_ren));
        bufp->chgCData(oldp+64,((0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+65,((0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+66,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs1_data),32);
        bufp->chgIData(oldp+67,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs2_data),32);
        bufp->chgBit(oldp+68,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen));
        bufp->chgCData(oldp+69,((0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                          >> 7U))),5);
        bufp->chgCData(oldp+70,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type),4);
        bufp->chgCData(oldp+71,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_alucex),8);
        bufp->chgIData(oldp+72,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_data),32);
        bufp->chgCData(oldp+73,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_addr),5);
        bufp->chgBit(oldp+74,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_wen));
        bufp->chgIData(oldp+75,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1),32);
        bufp->chgIData(oldp+76,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add),32);
        bufp->chgQData(oldp+77,((QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add))),40);
        bufp->chgQData(oldp+79,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[0]),40);
        bufp->chgIData(oldp+81,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+82,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+83,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__hit));
        __Vtemp_3[0U] = (IData)((0x200000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1))));
        __Vtemp_3[1U] = ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1 
                          << 4U) | (IData)(((0x200000000ULL 
                                             | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1))) 
                                            >> 0x20U)));
        __Vtemp_3[2U] = (0x10U | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1 
                                  >> 0x1cU));
        bufp->chgWData(oldp+84,(__Vtemp_3),72);
        bufp->chgQData(oldp+87,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+89,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgIData(oldp+91,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+92,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+93,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+94,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+95,((0x44U | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen) 
                                           << 5U) | (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen)))),10);
        bufp->chgCData(oldp+96,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[0]),5);
        bufp->chgCData(oldp+97,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[1]),5);
        bufp->chgBit(oldp+98,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[0]));
        bufp->chgBit(oldp+99,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[1]));
        bufp->chgBit(oldp+100,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+101,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+102,((0x4040U | ((0x3e00U 
                                              & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                 << 2U)) 
                                             | (0x1fU 
                                                & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                   >> 7U))))),18);
        bufp->chgSData(oldp+103,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[0]),9);
        bufp->chgSData(oldp+104,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[1]),9);
        bufp->chgCData(oldp+105,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[0]),5);
        bufp->chgCData(oldp+106,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[1]),5);
        bufp->chgCData(oldp+107,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out),5);
        bufp->chgBit(oldp+108,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+109,((7U & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+110,((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data)),7);
        bufp->chgCData(oldp+111,((vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                  >> 0x19U)),7);
        bufp->chgSData(oldp+112,((vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+113,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI),32);
        bufp->chgCData(oldp+114,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex1),8);
        bufp->chgCData(oldp+115,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex2),8);
        bufp->chgCData(oldp+116,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out),4);
        bufp->chgBit(oldp+117,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+118,((0x100200U | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex2) 
                                                << 0xcU) 
                                               | (IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex1)))),24);
        bufp->chgSData(oldp+119,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[0]),12);
        bufp->chgSData(oldp+120,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[1]),12);
        bufp->chgCData(oldp+121,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[0]),8);
        bufp->chgCData(oldp+122,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[1]),8);
        bufp->chgCData(oldp+123,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+124,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+125,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+126,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+127,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+128,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+129,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out));
        bufp->chgBit(oldp+130,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit));
        __Vtemp_5[0U] = (IData)((0x200000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data))));
        __Vtemp_5[1U] = ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data 
                          << 4U) | (IData)(((0x200000000ULL 
                                             | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data))) 
                                            >> 0x20U)));
        __Vtemp_5[2U] = (0x10U | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data 
                                  >> 0x1cU));
        bufp->chgWData(oldp+131,(__Vtemp_5),72);
        bufp->chgQData(oldp+134,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+136,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgIData(oldp+138,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+139,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+140,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+141,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit));
        __Vtemp_7[0U] = (IData)((0x200000000ULL | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI))));
        __Vtemp_7[1U] = ((vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs2_data 
                          << 4U) | (IData)(((0x200000000ULL 
                                             | (QData)((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI))) 
                                            >> 0x20U)));
        __Vtemp_7[2U] = (0x10U | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs2_data 
                                  >> 0x1cU));
        bufp->chgWData(oldp+142,(__Vtemp_7),72);
        bufp->chgQData(oldp+145,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+147,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgIData(oldp+149,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+150,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+151,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+152,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+153,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+154,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__hit));
        bufp->chgSData(oldp+155,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex1),15);
        bufp->chgSData(oldp+156,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__pair_list[0]),15);
        bufp->chgCData(oldp+157,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__data_list[0]),8);
        bufp->chgCData(oldp+158,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__lut_out),8);
        bufp->chgBit(oldp+159,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__hit));
        bufp->chgIData(oldp+160,(((IData)(4U) + vlSelfRef.ysyx_24090013_top__DOT__openmips_instrom_addr)),32);
        bufp->chgIData(oldp+161,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[0]),32);
        bufp->chgIData(oldp+162,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[1]),32);
        bufp->chgIData(oldp+163,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[2]),32);
        bufp->chgIData(oldp+164,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[3]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[4]),32);
        bufp->chgIData(oldp+166,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[5]),32);
        bufp->chgIData(oldp+167,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[6]),32);
        bufp->chgIData(oldp+168,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[7]),32);
        bufp->chgIData(oldp+169,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[8]),32);
        bufp->chgIData(oldp+170,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[9]),32);
        bufp->chgIData(oldp+171,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[10]),32);
        bufp->chgIData(oldp+172,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[11]),32);
        bufp->chgIData(oldp+173,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[12]),32);
        bufp->chgIData(oldp+174,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[13]),32);
        bufp->chgIData(oldp+175,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[14]),32);
        bufp->chgIData(oldp+176,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[15]),32);
        bufp->chgIData(oldp+177,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[16]),32);
        bufp->chgIData(oldp+178,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[17]),32);
        bufp->chgIData(oldp+179,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[18]),32);
        bufp->chgIData(oldp+180,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[19]),32);
        bufp->chgIData(oldp+181,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[20]),32);
        bufp->chgIData(oldp+182,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[21]),32);
        bufp->chgIData(oldp+183,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[22]),32);
        bufp->chgIData(oldp+184,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[23]),32);
        bufp->chgIData(oldp+185,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[24]),32);
        bufp->chgIData(oldp+186,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[25]),32);
        bufp->chgIData(oldp+187,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[26]),32);
        bufp->chgIData(oldp+188,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[27]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[28]),32);
        bufp->chgIData(oldp+190,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[29]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[30]),32);
        bufp->chgIData(oldp+192,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+193,(vlSelfRef.clk));
    bufp->chgBit(oldp+194,(vlSelfRef.rst));
}

void Vysyx_24090013_top___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root__trace_cleanup\n"); );
    // Init
    Vysyx_24090013_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24090013_top___024root*>(voidSelf);
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
