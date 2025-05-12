// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtbench__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vtbench::Vtbench(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtbench__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtbench::Vtbench(const char* _vcname__)
    : Vtbench(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtbench::~Vtbench() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtbench___024root___eval_debug_assertions(Vtbench___024root* vlSelf);
#endif  // VL_DEBUG
void Vtbench___024root___eval_static(Vtbench___024root* vlSelf);
void Vtbench___024root___eval_initial(Vtbench___024root* vlSelf);
void Vtbench___024root___eval_settle(Vtbench___024root* vlSelf);
void Vtbench___024root___eval(Vtbench___024root* vlSelf);

void Vtbench::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtbench::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtbench___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtbench___024root___eval_static(&(vlSymsp->TOP));
        Vtbench___024root___eval_initial(&(vlSymsp->TOP));
        Vtbench___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtbench___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtbench::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtbench::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtbench::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtbench::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtbench::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtbench___024root___eval_final(Vtbench___024root* vlSelf);

VL_ATTR_COLD void Vtbench::final() {
    Vtbench___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtbench::hierName() const { return vlSymsp->name(); }
const char* Vtbench::modelName() const { return "Vtbench"; }
unsigned Vtbench::threads() const { return 1; }
void Vtbench::prepareClone() const { contextp()->prepareClone(); }
void Vtbench::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtbench::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtbench___024root__trace_decl_types(VerilatedFst* tracep);

void Vtbench___024root__trace_init_top(Vtbench___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbench___024root*>(voidSelf);
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtbench___024root__trace_decl_types(tracep);
    Vtbench___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtbench___024root__trace_register(Vtbench___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vtbench::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtbench::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtbench___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
