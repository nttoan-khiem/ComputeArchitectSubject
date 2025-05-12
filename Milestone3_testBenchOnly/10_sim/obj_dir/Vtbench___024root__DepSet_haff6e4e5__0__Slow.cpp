// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbench.h for the primary calling header

#include "Vtbench__pch.h"
#include "Vtbench__Syms.h"
#include "Vtbench___024root.h"

VL_ATTR_COLD void Vtbench___024root___eval_initial__TOP(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_initial__TOP\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x2f697361U;
    __Vtemp_1[2U] = 0x74657374U;
    __Vtemp_1[3U] = 0x2f30325fU;
    __Vtemp_1[4U] = 0x2e2f2e2eU;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                 ,  &(vlSelfRef.tbench__DOT__dut__DOT__instMemoryBlock__DOT__mem)
                 , 0, ~0ULL);
    __Vtemp_2[0U] = 0x2e6d656dU;
    __Vtemp_2[1U] = 0x2f697361U;
    __Vtemp_2[2U] = 0x74657374U;
    __Vtemp_2[3U] = 0x2f30325fU;
    __Vtemp_2[4U] = 0x2e2f2e2eU;
    VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_2)
                 ,  &(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__dataMemoryBlock__DOT__mem)
                 , 0, ~0ULL);
    VL_WRITEF_NX("\nSINGLE CYCLE - ISA test\n\n",0);
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0U] = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__stl(Vtbench___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtbench___024root___eval_triggers__stl(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_triggers__stl\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtbench___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
