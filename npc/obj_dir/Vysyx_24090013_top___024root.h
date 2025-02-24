// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_24090013_top.h for the primary calling header

#ifndef VERILATED_VYSYX_24090013_TOP___024ROOT_H_
#define VERILATED_VYSYX_24090013_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vysyx_24090013_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vysyx_24090013_top___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ ysyx_24090013_top__DOT__openmips_instrom_ren;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_reg_rs1_ren;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_reg_rs2_ren;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen;
        CData/*7:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_alucex;
        CData/*4:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_addr;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_wen;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_pc_pc_wen;
        CData/*3:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type;
        CData/*7:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex1;
        CData/*7:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex2;
        CData/*3:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit;
        CData/*7:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__hit;
        CData/*7:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__hit;
        CData/*7:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit;
        CData/*4:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__hit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        VL_INW(inst_rom_1,639,0,20);
        IData/*31:0*/ ysyx_24090013_top__DOT__instrom_openmips_data;
        IData/*31:0*/ ysyx_24090013_top__DOT__openmips_instrom_addr;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs2_data;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs1_data;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs2_data;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_data;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_pc_pc_data;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_pc0__DOT__new_pc;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immJ;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__lut_out;
    };
    struct {
        IData/*31:0*/ __VdfgRegularize_hd87f99a1_0_0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<SData/*10:0*/, 7> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 7> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*3:0*/, 7> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*4:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*4:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*35:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*35:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*10:0*/, 1> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*2:0*/, 1> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 1> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*14:0*/, 1> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 1> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 1> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*11:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*7:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*4:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*4:0*/, 2> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 2> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 2> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*35:0*/, 2> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 2> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*39:0*/, 5> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*7:0*/, 5> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 5> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*35:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*4:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*0:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list;
        VlUnpacked<SData/*8:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list;
        VlUnpacked<CData/*4:0*/, 6> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list;
        VlUnpacked<IData/*31:0*/, 32> ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf;
        VlUnpacked<IData/*31:0*/, 20> ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom;
        VlUnpacked<QData/*32:0*/, 2> ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*0:0*/, 2> ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 2> ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_24090013_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_24090013_top___024root(Vysyx_24090013_top__Syms* symsp, const char* v__name);
    ~Vysyx_24090013_top___024root();
    VL_UNCOPYABLE(Vysyx_24090013_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
