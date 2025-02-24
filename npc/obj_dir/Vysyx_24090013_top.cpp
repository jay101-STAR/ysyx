// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vysyx_24090013_top__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vysyx_24090013_top::Vysyx_24090013_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vysyx_24090013_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , inst_rom_1{vlSymsp->TOP.inst_rom_1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vysyx_24090013_top::Vysyx_24090013_top(const char* _vcname__)
    : Vysyx_24090013_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vysyx_24090013_top::~Vysyx_24090013_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vysyx_24090013_top___024root___eval_debug_assertions(Vysyx_24090013_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vysyx_24090013_top___024root___eval_static(Vysyx_24090013_top___024root* vlSelf);
void Vysyx_24090013_top___024root___eval_initial(Vysyx_24090013_top___024root* vlSelf);
void Vysyx_24090013_top___024root___eval_settle(Vysyx_24090013_top___024root* vlSelf);
void Vysyx_24090013_top___024root___eval(Vysyx_24090013_top___024root* vlSelf);

void Vysyx_24090013_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vysyx_24090013_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vysyx_24090013_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vysyx_24090013_top___024root___eval_static(&(vlSymsp->TOP));
        Vysyx_24090013_top___024root___eval_initial(&(vlSymsp->TOP));
        Vysyx_24090013_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vysyx_24090013_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vysyx_24090013_top::eventsPending() { return false; }

uint64_t Vysyx_24090013_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vysyx_24090013_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vysyx_24090013_top___024root___eval_final(Vysyx_24090013_top___024root* vlSelf);

VL_ATTR_COLD void Vysyx_24090013_top::final() {
    Vysyx_24090013_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vysyx_24090013_top::hierName() const { return vlSymsp->name(); }
const char* Vysyx_24090013_top::modelName() const { return "Vysyx_24090013_top"; }
unsigned Vysyx_24090013_top::threads() const { return 1; }
void Vysyx_24090013_top::prepareClone() const { contextp()->prepareClone(); }
void Vysyx_24090013_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vysyx_24090013_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vysyx_24090013_top___024root__trace_decl_types(VerilatedVcd* tracep);

void Vysyx_24090013_top___024root__trace_init_top(Vysyx_24090013_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vysyx_24090013_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_24090013_top___024root*>(voidSelf);
    Vysyx_24090013_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vysyx_24090013_top___024root__trace_decl_types(tracep);
    Vysyx_24090013_top___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vysyx_24090013_top___024root__trace_register(Vysyx_24090013_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vysyx_24090013_top::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vysyx_24090013_top::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vysyx_24090013_top___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
