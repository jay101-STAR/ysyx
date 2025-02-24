// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_24090013_top__Syms.h"


VL_ATTR_COLD void Vysyx_24090013_top___024root__trace_init_sub__TOP__0(Vysyx_24090013_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+411,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+413,0,"inst_rom_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->pushPrefix("ysyx_24090013_top", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+411,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+413,0,"inst_rom_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBus(c+151,0,"instrom_openmips_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+375,0,"openmips_instrom_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+376,0,"openmips_instrom_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ysyx_24090013_instrom0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+376,0,"openmips_instrom_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+375,0,"openmips_instrom_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+413,0,"inst_rom_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 639,0);
    tracep->declBus(c+151,0,"instrom_openmips_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("inst_rom", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 20; ++i) {
        tracep->declBus(c+131+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+433,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+376,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+436,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+152,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+433,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+151,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+376,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+436,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+152,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 65,0);
    tracep->declBus(c+437,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+155+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 32,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+159+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+161,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+162,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ysyx_24090013_openmips0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+411,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+151,0,"instrom_openmips_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+375,0,"openmips_instrom_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+376,0,"openmips_instrom_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+377,0,"pc_id_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"reg_id_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"reg_id_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"id_reg_rs1_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"id_reg_rs2_ren",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"id_reg_rs1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+168,0,"id_reg_rs2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+169,0,"id_ex_rs1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"id_ex_rs2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+171,0,"id_ex_rd_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"id_ex_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+173,0,"id_ex_aluc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+174,0,"id_ex_alucex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+377,0,"id_ex_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"ex_reg_rd_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"ex_reg_rd_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+177,0,"ex_reg_rd_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"ex_pc_pc_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"ex_pc_pc_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("ysyx_24090013_ex0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+173,0,"id_ex_aluc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+174,0,"id_ex_alucex",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+172,0,"id_ex_rd_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+171,0,"id_ex_rd_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"id_ex_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"id_ex_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+377,0,"id_ex_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"ex_reg_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"ex_reg_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+177,0,"ex_reg_rd_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"ex_pc_pc_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"ex_pc_pc_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"ex_reg_rd_data1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"result_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+378,0,"pc_plus_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+433,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+440,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+441,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+433,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+440,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+441,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+442,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+3+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+5+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+7+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+182,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+183,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i00", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+433,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+378,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+184,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+433,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+378,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+184,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBus(c+443,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declQuad(c+187+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+9+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+191+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+193,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+194,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+438,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+444,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+436,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+195,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 199,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+444,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+180,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+436,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+195,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 199,0);
    tracep->declBus(c+445,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declQuad(c+202+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 39,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+11+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 5; ++i) {
        tracep->declBus(c+212+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+217,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+218,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+446,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+436,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+219,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 215,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+436,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+219,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 215,0);
    tracep->declBus(c+443,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+226+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+16+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+238+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+244,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+245,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+448,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+440,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+246,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+440,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+246,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+442,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+247+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+22+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+253+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+259,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+260,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+448,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+449,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+261,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+442,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+449,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+261,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 53,0);
    tracep->declBus(c+450,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+263+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 8,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+28+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+269+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+275,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+276,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+448,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ysyx_24090013_id0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+151,0,"id_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"reg_id_rs1_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"reg_id_rs2_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+377,0,"pc_id_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+377,0,"id_ex_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+165,0,"id_reg_rs1_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+166,0,"id_reg_rs2_ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"id_reg_rs1_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+168,0,"id_reg_rs2_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+169,0,"id_ex_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"id_ex_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+171,0,"id_ex_rd_wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+172,0,"id_ex_rd_addr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+173,0,"id_ex_aluc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+174,0,"id_ex_alucex",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+277,0,"func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+278,0,"op7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+279,0,"func7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+173,0,"inst_type",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+280,0,"immI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+281,0,"sign_extended_immI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+282,0,"immU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+283,0,"low_extended_immU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"immJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+285,0,"sign_extended_immJ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"id_ex_alucex1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+287,0,"id_ex_alucex2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("i1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+278,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+452,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+453,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+451,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+278,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+452,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+453,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 76,0);
    tracep->declBus(c+456,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+34+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+41+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 7; ++i) {
        tracep->declBus(c+48+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+288,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+289,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+457,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+444,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+458,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+290,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+444,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+458,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+290,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 71,0);
    tracep->declBus(c+459,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+293+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 11,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+55+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+299+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+305,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+306,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+448,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+440,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+460,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+171,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+440,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+460,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+442,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+61+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+67+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+73+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+307,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+308,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+448,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+440,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+461,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+440,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+461,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+442,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+79+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+85+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+91+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+309,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+310,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+448,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+440,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+462,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+440,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+462,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 29,0);
    tracep->declBus(c+442,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+97+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 4,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+103+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+109+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+311,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+312,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+448,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+436,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+313,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 215,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+436,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+313,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 215,0);
    tracep->declBus(c+443,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+320+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+115+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+332+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+338,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+339,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+448,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+436,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+340,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 215,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+447,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+170,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+436,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+340,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 215,0);
    tracep->declBus(c+443,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+347+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 35,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+121+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declBus(c+359+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+365,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+366,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+448,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+434,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+463,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+444,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+277,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+458,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+464,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+434,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+463,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+444,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+277,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+458,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+464,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBus(c+456,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+127+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 10,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+128+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+129+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+367,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+368,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+465,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("i9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+434,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+444,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+279,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+458,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+369,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+434,0,"NR_KEY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"KEY_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+444,0,"DATA_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+434,0,"HAS_DEFAULT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+279,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+458,0,"default_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+369,0,"lut",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 14,0);
    tracep->declBus(c+466,0,"PAIR_LEN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("pair_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+370+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 14,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("key_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+130+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 6,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_list", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+371+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+372,0,"lut_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+373,0,"hit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+465,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ysyx_24090013_pc0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+411,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+178,0,"ex_pc_pc_wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+179,0,"ex_pc_pc_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+376,0,"ren",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+375,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+377,0,"pc_id_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+374,0,"new_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("en", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+434,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+467,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+411,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+468,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBit(c+468,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+376,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+435,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+411,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+376,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+375,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_id", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+435,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+469,0,"RESET_VAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+411,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+412,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+374,0,"din",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+376,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+377,0,"dout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ysyx_24090013_registerfile0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+411,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+177,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"rs1_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"rs1_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+163,0,"rs1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+166,0,"rs2_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"rs2_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+164,0,"rs2_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("i0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+442,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+411,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+175,0,"wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+176,0,"waddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+177,0,"wen",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+165,0,"rs1_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+167,0,"rs1_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+163,0,"rs1_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+166,0,"rs2_ren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"rs2_raddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+164,0,"rs2_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rf", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+379+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vysyx_24090013_top___024root__trace_init_top(Vysyx_24090013_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vysyx_24090013_top___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_24090013_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vysyx_24090013_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24090013_top___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_24090013_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_24090013_top___024root__trace_register(Vysyx_24090013_top___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vysyx_24090013_top___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vysyx_24090013_top___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vysyx_24090013_top___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vysyx_24090013_top___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_24090013_top___024root__trace_const_0_sub_0(Vysyx_24090013_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_24090013_top___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root__trace_const_0\n"); );
    // Init
    Vysyx_24090013_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24090013_top___024root*>(voidSelf);
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_24090013_top___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_24090013_top___024root__trace_const_0_sub_0(Vysyx_24090013_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    bufp->fullIData(oldp+433,(2U),32);
    bufp->fullIData(oldp+434,(1U),32);
    bufp->fullIData(oldp+435,(0x20U),32);
    bufp->fullIData(oldp+436,(0U),32);
    bufp->fullIData(oldp+437,(0x21U),32);
    bufp->fullIData(oldp+438,(2U),32);
    bufp->fullIData(oldp+439,(4U),32);
    bufp->fullBit(oldp+440,(0U));
    bufp->fullSData(oldp+441,(0x171U),10);
    bufp->fullIData(oldp+442,(5U),32);
    bufp->fullIData(oldp+443,(0x24U),32);
    bufp->fullIData(oldp+444,(8U),32);
    bufp->fullIData(oldp+445,(0x28U),32);
    bufp->fullIData(oldp+446,(5U),32);
    bufp->fullIData(oldp+447,(6U),32);
    bufp->fullIData(oldp+448,(6U),32);
    bufp->fullCData(oldp+449,(0U),5);
    bufp->fullIData(oldp+450,(9U),32);
    bufp->fullIData(oldp+451,(7U),32);
    bufp->fullCData(oldp+452,(0U),4);
    __Vtemp_1[0U] = 0xdd8bbf39U;
    __Vtemp_1[1U] = 0x996f5cf0U;
    __Vtemp_1[2U] = 0xcc4U;
    bufp->fullWData(oldp+453,(__Vtemp_1),77);
    bufp->fullIData(oldp+456,(0xbU),32);
    bufp->fullIData(oldp+457,(7U),32);
    bufp->fullCData(oldp+458,(0U),8);
    bufp->fullIData(oldp+459,(0xcU),32);
    bufp->fullIData(oldp+460,(0x655c5afU),30);
    bufp->fullIData(oldp+461,(0x655458eU),30);
    bufp->fullIData(oldp+462,(0x645418eU),30);
    bufp->fullIData(oldp+463,(3U),32);
    bufp->fullSData(oldp+464,(0U),11);
    bufp->fullIData(oldp+465,(1U),32);
    bufp->fullIData(oldp+466,(0xfU),32);
    bufp->fullBit(oldp+467,(0U));
    bufp->fullBit(oldp+468,(1U));
    bufp->fullIData(oldp+469,(0x80000000U),32);
}

VL_ATTR_COLD void Vysyx_24090013_top___024root__trace_full_0_sub_0(Vysyx_24090013_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_24090013_top___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root__trace_full_0\n"); );
    // Init
    Vysyx_24090013_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24090013_top___024root*>(voidSelf);
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_24090013_top___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_24090013_top___024root__trace_full_0_sub_0(Vysyx_24090013_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_24090013_top___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<7>/*223:0*/ __Vtemp_11;
    VlWide<7>/*223:0*/ __Vtemp_21;
    VlWide<3>/*95:0*/ __Vtemp_23;
    VlWide<7>/*223:0*/ __Vtemp_33;
    VlWide<7>/*223:0*/ __Vtemp_42;
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__key_list[0]));
    bufp->fullBit(oldp+2,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__key_list[1]));
    bufp->fullCData(oldp+3,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+4,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+5,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+6,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__key_list[1]),4);
    bufp->fullBit(oldp+7,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+8,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__data_list[1]));
    bufp->fullCData(oldp+9,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+10,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+11,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[0]),8);
    bufp->fullCData(oldp+12,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[1]),8);
    bufp->fullCData(oldp+13,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[2]),8);
    bufp->fullCData(oldp+14,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[3]),8);
    bufp->fullCData(oldp+15,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__key_list[4]),8);
    bufp->fullCData(oldp+16,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+17,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+18,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+19,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+20,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+21,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+22,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+23,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+24,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+25,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+26,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+27,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+28,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+29,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+30,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+31,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+32,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+33,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__key_list[5]),4);
    bufp->fullSData(oldp+34,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[0]),11);
    bufp->fullSData(oldp+35,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[1]),11);
    bufp->fullSData(oldp+36,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[2]),11);
    bufp->fullSData(oldp+37,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[3]),11);
    bufp->fullSData(oldp+38,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[4]),11);
    bufp->fullSData(oldp+39,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[5]),11);
    bufp->fullSData(oldp+40,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__pair_list[6]),11);
    bufp->fullCData(oldp+41,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+42,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+43,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+44,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+45,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+46,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+47,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+48,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[0]),4);
    bufp->fullCData(oldp+49,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[1]),4);
    bufp->fullCData(oldp+50,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[2]),4);
    bufp->fullCData(oldp+51,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[3]),4);
    bufp->fullCData(oldp+52,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[4]),4);
    bufp->fullCData(oldp+53,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[5]),4);
    bufp->fullCData(oldp+54,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__data_list[6]),4);
    bufp->fullCData(oldp+55,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+56,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+57,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+58,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+59,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+60,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+61,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+62,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+63,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+64,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+65,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+66,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+67,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+68,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+69,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+70,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+71,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+72,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__key_list[5]),4);
    bufp->fullBit(oldp+73,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+74,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+75,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+76,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+77,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+78,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__data_list[5]));
    bufp->fullCData(oldp+79,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+80,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+81,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+82,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+83,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+84,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+85,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+86,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+87,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+88,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+89,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+90,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__key_list[5]),4);
    bufp->fullBit(oldp+91,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+92,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+93,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+94,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+95,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+96,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__data_list[5]));
    bufp->fullCData(oldp+97,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+98,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+99,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+100,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+101,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+102,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__pair_list[5]),5);
    bufp->fullCData(oldp+103,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+104,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+105,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+106,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+107,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+108,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__key_list[5]),4);
    bufp->fullBit(oldp+109,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+110,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+111,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+112,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+113,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+114,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__data_list[5]));
    bufp->fullCData(oldp+115,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+116,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+117,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+118,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+119,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+120,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+121,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+122,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+123,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+124,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+125,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+126,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__key_list[5]),4);
    bufp->fullSData(oldp+127,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__pair_list[0]),11);
    bufp->fullCData(oldp+128,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__key_list[0]),3);
    bufp->fullCData(oldp+129,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__data_list[0]),8);
    bufp->fullCData(oldp+130,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__key_list[0]),7);
    bufp->fullIData(oldp+131,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[0]),32);
    bufp->fullIData(oldp+132,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[1]),32);
    bufp->fullIData(oldp+133,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[2]),32);
    bufp->fullIData(oldp+134,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[3]),32);
    bufp->fullIData(oldp+135,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[4]),32);
    bufp->fullIData(oldp+136,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[5]),32);
    bufp->fullIData(oldp+137,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[6]),32);
    bufp->fullIData(oldp+138,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[7]),32);
    bufp->fullIData(oldp+139,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[8]),32);
    bufp->fullIData(oldp+140,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[9]),32);
    bufp->fullIData(oldp+141,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[10]),32);
    bufp->fullIData(oldp+142,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[11]),32);
    bufp->fullIData(oldp+143,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[12]),32);
    bufp->fullIData(oldp+144,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[13]),32);
    bufp->fullIData(oldp+145,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[14]),32);
    bufp->fullIData(oldp+146,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[15]),32);
    bufp->fullIData(oldp+147,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[16]),32);
    bufp->fullIData(oldp+148,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[17]),32);
    bufp->fullIData(oldp+149,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[18]),32);
    bufp->fullIData(oldp+150,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__inst_rom[19]),32);
    bufp->fullIData(oldp+151,(vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data),32);
    __Vtemp_1[0U] = vlSelfRef.__VdfgRegularize_hd87f99a1_0_0;
    __Vtemp_1[1U] = 1U;
    __Vtemp_1[2U] = 0U;
    bufp->fullWData(oldp+152,(__Vtemp_1),66);
    bufp->fullQData(oldp+155,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__pair_list[0]),33);
    bufp->fullQData(oldp+157,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__pair_list[1]),33);
    bufp->fullIData(oldp+159,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+160,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+161,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+162,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_instrom0__DOT__i0__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+163,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data),32);
    bufp->fullIData(oldp+164,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs2_data),32);
    bufp->fullBit(oldp+165,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_reg_rs1_ren));
    bufp->fullBit(oldp+166,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_reg_rs2_ren));
    bufp->fullCData(oldp+167,((0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+168,((0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                        >> 0x14U))),5);
    bufp->fullIData(oldp+169,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs1_data),32);
    bufp->fullIData(oldp+170,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs2_data),32);
    bufp->fullBit(oldp+171,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen));
    bufp->fullCData(oldp+172,((0x1fU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                        >> 7U))),5);
    bufp->fullCData(oldp+173,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__inst_type),4);
    bufp->fullCData(oldp+174,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_alucex),8);
    bufp->fullIData(oldp+175,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_data),32);
    bufp->fullCData(oldp+176,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_addr),5);
    bufp->fullBit(oldp+177,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_reg_rd_wen));
    bufp->fullBit(oldp+178,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_pc_pc_wen));
    bufp->fullIData(oldp+179,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ex_pc_pc_data),32);
    bufp->fullIData(oldp+180,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1),32);
    bufp->fullIData(oldp+181,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add),32);
    bufp->fullBit(oldp+182,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+183,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i0__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+184,(__Vtemp_3),72);
    bufp->fullQData(oldp+187,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+189,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullIData(oldp+191,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+192,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+193,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+194,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i00__DOT__i0__DOT__hit));
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
                                   << 0x18U) | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rs1_data 
                                                >> 0x10U)));
    __Vtemp_11[4U] = (0x2000000U | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add 
                                    >> 8U));
    __Vtemp_11[5U] = vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__result_add;
    __Vtemp_11[6U] = 0U;
    bufp->fullWData(oldp+195,(__Vtemp_11),200);
    bufp->fullQData(oldp+202,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[0]),40);
    bufp->fullQData(oldp+204,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[1]),40);
    bufp->fullQData(oldp+206,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[2]),40);
    bufp->fullQData(oldp+208,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[3]),40);
    bufp->fullQData(oldp+210,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__pair_list[4]),40);
    bufp->fullIData(oldp+212,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+213,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+214,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+215,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+216,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+217,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+218,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i1__DOT__i0__DOT__hit));
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
                                   << 0x14U) | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1 
                                                >> 0x10U)));
    __Vtemp_21[6U] = (0x100000U | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__ex_reg_rd_data1 
                                   >> 0xcU));
    bufp->fullWData(oldp+219,(__Vtemp_21),216);
    bufp->fullQData(oldp+226,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+228,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+230,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+232,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+234,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+236,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullIData(oldp+238,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+239,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+240,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+241,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+242,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+243,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+244,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+245,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i2__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+246,((0x445418eU | (((IData)(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__id_ex_rd_wen) 
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
    bufp->fullCData(oldp+247,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[0]),5);
    bufp->fullCData(oldp+248,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[1]),5);
    bufp->fullCData(oldp+249,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[2]),5);
    bufp->fullCData(oldp+250,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[3]),5);
    bufp->fullCData(oldp+251,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[4]),5);
    bufp->fullCData(oldp+252,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__pair_list[5]),5);
    bufp->fullBit(oldp+253,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+254,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+255,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+256,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+257,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+258,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+259,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+260,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i3__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+261,((0x4040500000000ULL | 
                               (((QData)((IData)((0x1fU 
                                                  & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                     >> 7U)))) 
                                 << 0x2dU) | (((QData)((IData)(
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
    bufp->fullSData(oldp+263,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[0]),9);
    bufp->fullSData(oldp+264,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[1]),9);
    bufp->fullSData(oldp+265,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[2]),9);
    bufp->fullSData(oldp+266,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[3]),9);
    bufp->fullSData(oldp+267,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[4]),9);
    bufp->fullSData(oldp+268,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__pair_list[5]),9);
    bufp->fullCData(oldp+269,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[0]),5);
    bufp->fullCData(oldp+270,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[1]),5);
    bufp->fullCData(oldp+271,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[2]),5);
    bufp->fullCData(oldp+272,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[3]),5);
    bufp->fullCData(oldp+273,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[4]),5);
    bufp->fullCData(oldp+274,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__data_list[5]),5);
    bufp->fullCData(oldp+275,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__lut_out),5);
    bufp->fullBit(oldp+276,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_ex0__DOT__i4__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+277,((7U & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+278,((0x7fU & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data)),7);
    bufp->fullCData(oldp+279,((vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                               >> 0x19U)),7);
    bufp->fullSData(oldp+280,((vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+281,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI),32);
    bufp->fullIData(oldp+282,((vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                               >> 0xcU)),20);
    bufp->fullIData(oldp+283,((0xfffff000U & vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data)),32);
    bufp->fullIData(oldp+284,(((0x80000U & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                            >> 0xcU)) 
                               | ((0x7f800U & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                               >> 1U)) 
                                  | ((0x400U & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                >> 0xaU)) 
                                     | (0x3ffU & (vlSelfRef.ysyx_24090013_top__DOT__instrom_openmips_data 
                                                  >> 0x15U)))))),20);
    bufp->fullIData(oldp+285,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immJ),32);
    bufp->fullCData(oldp+286,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex1),8);
    bufp->fullCData(oldp+287,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex2),8);
    bufp->fullCData(oldp+288,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__lut_out),4);
    bufp->fullBit(oldp+289,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i1__DOT__i0__DOT__hit));
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
    bufp->fullWData(oldp+290,(__Vtemp_23),72);
    bufp->fullSData(oldp+293,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[0]),12);
    bufp->fullSData(oldp+294,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[1]),12);
    bufp->fullSData(oldp+295,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[2]),12);
    bufp->fullSData(oldp+296,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[3]),12);
    bufp->fullSData(oldp+297,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[4]),12);
    bufp->fullSData(oldp+298,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__pair_list[5]),12);
    bufp->fullCData(oldp+299,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[0]),8);
    bufp->fullCData(oldp+300,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[1]),8);
    bufp->fullCData(oldp+301,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[2]),8);
    bufp->fullCData(oldp+302,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[3]),8);
    bufp->fullCData(oldp+303,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[4]),8);
    bufp->fullCData(oldp+304,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__data_list[5]),8);
    bufp->fullCData(oldp+305,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+306,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i10__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+307,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+308,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i11__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+309,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+310,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i2__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+311,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+312,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i3__DOT__i0__DOT__hit));
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
                                   << 0x14U) | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data 
                                                >> 0x10U)));
    __Vtemp_33[6U] = (0x100000U | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs1_data 
                                   >> 0xcU));
    bufp->fullWData(oldp+313,(__Vtemp_33),216);
    bufp->fullQData(oldp+320,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+322,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+324,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+326,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+328,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+330,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullIData(oldp+332,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+333,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+334,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+335,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+336,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+337,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+338,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+339,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i4__DOT__i0__DOT__hit));
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
                                   << 0x14U) | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__sign_extended_immI 
                                                >> 0x10U)));
    __Vtemp_42[6U] = (0x100000U | (vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__reg_id_rs2_data 
                                   >> 0xcU));
    bufp->fullWData(oldp+340,(__Vtemp_42),216);
    bufp->fullQData(oldp+347,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+349,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+351,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+353,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+355,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+357,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullIData(oldp+359,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+360,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+361,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+362,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+363,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+364,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+365,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+366,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i5__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+367,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+368,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i8__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+369,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__id_ex_alucex1),15);
    bufp->fullSData(oldp+370,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__pair_list[0]),15);
    bufp->fullCData(oldp+371,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__data_list[0]),8);
    bufp->fullCData(oldp+372,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__lut_out),8);
    bufp->fullBit(oldp+373,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_id0__DOT__i9__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+374,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_pc0__DOT__new_pc),32);
    bufp->fullIData(oldp+375,(vlSelfRef.ysyx_24090013_top__DOT__openmips_instrom_addr),32);
    bufp->fullBit(oldp+376,(vlSelfRef.ysyx_24090013_top__DOT__openmips_instrom_ren));
    bufp->fullIData(oldp+377,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc),32);
    bufp->fullIData(oldp+378,(((IData)(4U) + vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__pc_id_pc)),32);
    bufp->fullIData(oldp+379,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[0]),32);
    bufp->fullIData(oldp+380,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[1]),32);
    bufp->fullIData(oldp+381,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[2]),32);
    bufp->fullIData(oldp+382,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[3]),32);
    bufp->fullIData(oldp+383,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[4]),32);
    bufp->fullIData(oldp+384,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[5]),32);
    bufp->fullIData(oldp+385,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[6]),32);
    bufp->fullIData(oldp+386,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[7]),32);
    bufp->fullIData(oldp+387,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[8]),32);
    bufp->fullIData(oldp+388,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[9]),32);
    bufp->fullIData(oldp+389,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[10]),32);
    bufp->fullIData(oldp+390,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[11]),32);
    bufp->fullIData(oldp+391,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[12]),32);
    bufp->fullIData(oldp+392,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[13]),32);
    bufp->fullIData(oldp+393,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[14]),32);
    bufp->fullIData(oldp+394,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[15]),32);
    bufp->fullIData(oldp+395,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[16]),32);
    bufp->fullIData(oldp+396,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[17]),32);
    bufp->fullIData(oldp+397,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[18]),32);
    bufp->fullIData(oldp+398,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[19]),32);
    bufp->fullIData(oldp+399,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[20]),32);
    bufp->fullIData(oldp+400,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[21]),32);
    bufp->fullIData(oldp+401,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[22]),32);
    bufp->fullIData(oldp+402,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[23]),32);
    bufp->fullIData(oldp+403,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[24]),32);
    bufp->fullIData(oldp+404,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[25]),32);
    bufp->fullIData(oldp+405,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[26]),32);
    bufp->fullIData(oldp+406,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[27]),32);
    bufp->fullIData(oldp+407,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[28]),32);
    bufp->fullIData(oldp+408,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[29]),32);
    bufp->fullIData(oldp+409,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[30]),32);
    bufp->fullIData(oldp+410,(vlSelfRef.ysyx_24090013_top__DOT__ysyx_24090013_openmips0__DOT__ysyx_24090013_registerfile0__DOT__i0__DOT__rf[31]),32);
    bufp->fullBit(oldp+411,(vlSelfRef.clk));
    bufp->fullBit(oldp+412,(vlSelfRef.rst));
    bufp->fullWData(oldp+413,(vlSelfRef.inst_rom_1),640);
}
