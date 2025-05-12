// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbench.h for the primary calling header

#include "Vtbench__pch.h"
#include "Vtbench___024root.h"

VL_ATTR_COLD void Vtbench___024root___eval_static(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_static\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtbench___024root___eval_final(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_final\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__stl(Vtbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtbench___024root___eval_phase__stl(Vtbench___024root* vlSelf);

VL_ATTR_COLD void Vtbench___024root___eval_settle(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_settle\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtbench___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("../00_src/../01_bench/tbench.sv", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtbench___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__stl(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___dump_triggers__stl\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtbench___024root___stl_sequent__TOP__0(Vtbench___024root* vlSelf);
VL_ATTR_COLD void Vtbench___024root____Vm_traceActivitySetAll(Vtbench___024root* vlSelf);

VL_ATTR_COLD void Vtbench___024root___eval_stl(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_stl\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtbench___024root___stl_sequent__TOP__0(vlSelf);
        Vtbench___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 8> Vtbench__ConstPool__TABLE_h4a5fb775_0;
extern const VlUnpacked<CData/*4:0*/, 8> Vtbench__ConstPool__TABLE_h43aa5f2f_0;
extern const VlUnpacked<CData/*3:0*/, 16> Vtbench__ConstPool__TABLE_hb6b6638d_0;
extern const VlUnpacked<CData/*3:0*/, 16> Vtbench__ConstPool__TABLE_hb82870ac_0;
extern const VlUnpacked<CData/*3:0*/, 128> Vtbench__ConstPool__TABLE_h9fb9d664_0;
extern const VlUnpacked<CData/*0:0*/, 1024> Vtbench__ConstPool__TABLE_h9a833d55_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtbench__ConstPool__TABLE_hbf7571a6_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vtbench__ConstPool__TABLE_hd2776d48_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtbench__ConstPool__TABLE_h2e29cb39_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtbench__ConstPool__TABLE_h135511ba_0;
extern const VlUnpacked<CData/*4:0*/, 512> Vtbench__ConstPool__TABLE_hfbdff9fe_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtbench__ConstPool__TABLE_h55e08b9d_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtbench__ConstPool__TABLE_haf23f5c4_0;
extern const VlUnpacked<IData/*31:0*/, 64> Vtbench__ConstPool__TABLE_hba915db6_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtbench__ConstPool__TABLE_h12e66f01_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtbench__ConstPool__TABLE_h75843ca2_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtbench__ConstPool__TABLE_hb79e8aff_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtbench__ConstPool__TABLE_h393da6a0_0;

VL_ATTR_COLD void Vtbench___024root___stl_sequent__TOP__0(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___stl_sequent__TOP__0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1;
    tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1 = 0;
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*4:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*4:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*3:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*3:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*3:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*3:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*2:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    SData/*8:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*2:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    SData/*9:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[1U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_1__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[2U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_2__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[3U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_3__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[4U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_4__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[5U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_5__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[6U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_6__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[7U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_7__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[8U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_8__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[9U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_9__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0xaU] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_10__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0xbU] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_11__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0xcU] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_12__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0xdU] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_13__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0xeU] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_14__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0xfU] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_15__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0x10U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_16__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0x11U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_17__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0x12U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_18__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0x13U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_19__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0x14U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_20__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0x15U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_21__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0x16U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_22__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0x17U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_23__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0x18U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_24__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0x19U] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_25__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0x1aU] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_26__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0x1bU] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_27__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0x1cU] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_28__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0x1dU] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_29__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0x1eU] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_30__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0x1fU] 
        = vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_31__DOT__register32;
    vlSelfRef.tbench__DOT__dut__DOT__inst_current = 
        ((0xff000000U & vlSelfRef.tbench__DOT__dut__DOT__inst_current) 
         | ((vlSelfRef.tbench__DOT__dut__DOT__instMemoryBlock__DOT__mem
             [(0xffffU & ((IData)(2U) + vlSelfRef.tbench__DOT__dut__DOT__pc_current))] 
             << 0x10U) | ((vlSelfRef.tbench__DOT__dut__DOT__instMemoryBlock__DOT__mem
                           [(0xffffU & ((IData)(1U) 
                                        + vlSelfRef.tbench__DOT__dut__DOT__pc_current))] 
                           << 8U) | vlSelfRef.tbench__DOT__dut__DOT__instMemoryBlock__DOT__mem
                          [(0xffffU & vlSelfRef.tbench__DOT__dut__DOT__pc_current)])));
    vlSelfRef.tbench__DOT__dut__DOT__inst_current = 
        ((0xffffffU & vlSelfRef.tbench__DOT__dut__DOT__inst_current) 
         | (vlSelfRef.tbench__DOT__dut__DOT__instMemoryBlock__DOT__mem
            [(0xffffU & ((IData)(3U) + vlSelfRef.tbench__DOT__dut__DOT__pc_current))] 
            << 0x18U));
    __Vtableidx15 = (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                           >> 0xcU));
    vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__lTypeFuncVld 
        = Vtbench__ConstPool__TABLE_h4a5fb775_0[__Vtableidx15];
    __Vtableidx13 = (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                           >> 0xcU));
    vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask_LSformat 
        = Vtbench__ConstPool__TABLE_h43aa5f2f_0[__Vtableidx13];
    vlSelfRef.tbench__DOT__dut__DOT__ImmGenBlock__DOT__i0 
        = (((- (IData)((vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                        >> 0x1fU))) << 0xcU) | (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                >> 0x14U));
    vlSelfRef.tbench__DOT__dut__DOT__rs2 = ((0x1000000U 
                                             & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                             ? ((0x800000U 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                 ? 
                                                ((0x400000U 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                  ? 
                                                 ((0x200000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x1fU]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x1eU])
                                                   : 
                                                  ((0x100000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x1dU]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x1cU]))
                                                  : 
                                                 ((0x200000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x1bU]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x1aU])
                                                   : 
                                                  ((0x100000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x19U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x18U])))
                                                 : 
                                                ((0x400000U 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                  ? 
                                                 ((0x200000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x17U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x16U])
                                                   : 
                                                  ((0x100000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x15U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x14U]))
                                                  : 
                                                 ((0x200000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x13U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x12U])
                                                   : 
                                                  ((0x100000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x11U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x10U]))))
                                             : ((0x800000U 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                 ? 
                                                ((0x400000U 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                  ? 
                                                 ((0x200000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0xfU]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0xeU])
                                                   : 
                                                  ((0x100000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0xdU]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0xcU]))
                                                  : 
                                                 ((0x200000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0xbU]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0xaU])
                                                   : 
                                                  ((0x100000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [9U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [8U])))
                                                 : 
                                                ((0x400000U 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                  ? 
                                                 ((0x200000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [7U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [6U])
                                                   : 
                                                  ((0x100000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [5U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [4U]))
                                                  : 
                                                 ((0x200000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                   ? 
                                                  ((0x100000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [3U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [2U])
                                                   : 
                                                  ((0x100000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [1U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0U])))));
    __Vtableidx9 = ((8U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                           >> 0x1bU)) | (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                               >> 0xcU)));
    vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp_IFormat 
        = Vtbench__ConstPool__TABLE_hb6b6638d_0[__Vtableidx9];
    vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp_RFormat 
        = Vtbench__ConstPool__TABLE_hb82870ac_0[__Vtableidx9];
    vlSelfRef.tbench__DOT__dut__DOT__rs1 = ((0x80000U 
                                             & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                             ? ((0x40000U 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                 ? 
                                                ((0x20000U 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                  ? 
                                                 ((0x10000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x1fU]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x1eU])
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x1dU]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x1cU]))
                                                  : 
                                                 ((0x10000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x1bU]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x1aU])
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x19U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x18U])))
                                                 : 
                                                ((0x20000U 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                  ? 
                                                 ((0x10000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x17U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x16U])
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x15U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x14U]))
                                                  : 
                                                 ((0x10000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x13U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x12U])
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x11U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0x10U]))))
                                             : ((0x40000U 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                 ? 
                                                ((0x20000U 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                  ? 
                                                 ((0x10000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0xfU]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0xeU])
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0xdU]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0xcU]))
                                                  : 
                                                 ((0x10000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0xbU]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0xaU])
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [9U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [8U])))
                                                 : 
                                                ((0x20000U 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                  ? 
                                                 ((0x10000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [7U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [6U])
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [5U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [4U]))
                                                  : 
                                                 ((0x10000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                   ? 
                                                  ((0x8000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [3U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [2U])
                                                   : 
                                                  ((0x8000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                                    ? 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [1U]
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister
                                                   [0U])))));
    __Vtableidx3 = (0x7fU & vlSelfRef.tbench__DOT__dut__DOT__inst_current);
    vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode 
        = Vtbench__ConstPool__TABLE_h9fb9d664_0[__Vtableidx3];
    vlSelfRef.tbench__DOT__dut__DOT__branchControlBlock__DOT__branchLessBlock__DOT__subR1R2 
        = (0x1ffffffffULL & (1ULL + ((QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__rs1)) 
                                     + (~ (QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__rs2))))));
    __Vtableidx16 = (((((0U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                      >> 0xcU))) << 9U) 
                       | ((((1U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                   >> 0xeU)) || (1U 
                                                 & (~ 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                     >> 0xdU)))) 
                           << 8U) | ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__lTypeFuncVld) 
                                     << 7U))) | (((
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                        >> 0xcU))) 
                                                   || ((1U 
                                                        == 
                                                        (7U 
                                                         & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                            >> 0xcU))) 
                                                       || (2U 
                                                           == 
                                                           (7U 
                                                            & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                               >> 0xcU))))) 
                                                  << 6U) 
                                                 | (((1U 
                                                      == 
                                                      (7U 
                                                       & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                          >> 0xcU)))
                                                      ? 
                                                     (0U 
                                                      == 
                                                      (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                       >> 0x19U))
                                                      : 
                                                     ((5U 
                                                       != 
                                                       (7U 
                                                        & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                           >> 0xcU))) 
                                                      || (1U 
                                                          & (~ (IData)(
                                                                       (0U 
                                                                        != 
                                                                        (0xbe000000U 
                                                                         & vlSelfRef.tbench__DOT__dut__DOT__inst_current))))))) 
                                                    << 5U))) 
                     | ((0x10U & (((0U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                 >> 0xcU)))
                                    ? (~ (IData)((0U 
                                                  != 
                                                  (0xbe000000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current))))
                                    : ((5U == (7U & 
                                               (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                >> 0xcU)))
                                        ? (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0xbe000000U 
                                                       & vlSelfRef.tbench__DOT__dut__DOT__inst_current))))
                                        : (0U == (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                  >> 0x19U)))) 
                                  << 4U)) | (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode)));
    vlSelfRef.tbench__DOT__dut__DOT__validInst = Vtbench__ConstPool__TABLE_h9a833d55_0
        [__Vtableidx16];
    __Vtableidx10 = vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode;
    vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__memWrEnable 
        = Vtbench__ConstPool__TABLE_hbf7571a6_0[__Vtableidx10];
    __Vtableidx11 = vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode;
    vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__wbSel 
        = Vtbench__ConstPool__TABLE_hd2776d48_0[__Vtableidx11];
    __Vtableidx12 = vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode;
    vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__rdWrEnable 
        = Vtbench__ConstPool__TABLE_h2e29cb39_0[__Vtableidx12];
    __Vtableidx7 = ((((6U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                    >> 0xcU))) || (7U 
                                                   == 
                                                   (7U 
                                                    & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                       >> 0xcU)))) 
                     << 4U) | (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode));
    vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__brUnsign 
        = Vtbench__ConstPool__TABLE_h135511ba_0[__Vtableidx7];
    __Vtableidx14 = (((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask_LSformat) 
                      << 4U) | (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode));
    vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask 
        = Vtbench__ConstPool__TABLE_hfbdff9fe_0[__Vtableidx14];
    __Vtableidx6 = ((((1U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                    >> 0xcU))) ? 1U
                       : ((5U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                        >> 0xcU))) ? 1U
                           : 0U)) << 4U) | (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode));
    vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm 
        = Vtbench__ConstPool__TABLE_h55e08b9d_0[__Vtableidx6];
    if ((8U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode))) {
        vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp 
            = ((4U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode))
                ? 0U : ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode))
                         ? 0U : ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode))
                                  ? 0U : (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp_RFormat))));
        vlSelfRef.tbench__DOT__dut__DOT__operandB = vlSelfRef.tbench__DOT__dut__DOT__rs2;
    } else {
        vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp 
            = ((4U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode))
                ? ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode))
                    ? ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode))
                        ? (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp_IFormat)
                        : 0U) : 0U) : ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode))
                                                 ? 0U
                                                 : 0xaU)));
        if ((1U & (~ ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode) 
                      >> 3U)))) {
            vlSelfRef.tbench__DOT__dut__DOT__operandB 
                = ((4U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm))
                    ? ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm))
                        ? vlSelfRef.tbench__DOT__dut__DOT__ImmGenBlock__DOT__i0
                        : ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm))
                            ? (0xfffff000U & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                            : (((- (IData)((vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                            >> 0x1fU))) 
                                << 0x14U) | (((0xff000U 
                                               & vlSelfRef.tbench__DOT__dut__DOT__inst_current) 
                                              | (0x800U 
                                                 & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                    >> 9U))) 
                                             | (0x7feU 
                                                & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                   >> 0x14U))))))
                    : ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm))
                        ? ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm))
                            ? (((- (IData)((vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                     >> 7U)))))
                            : (((- (IData)((vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                  >> 7U)))))
                        : ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm))
                            ? (0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                        >> 0x14U)) : vlSelfRef.tbench__DOT__dut__DOT__ImmGenBlock__DOT__i0)));
        }
    }
    __Vtableidx8 = vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode;
    vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opASel 
        = Vtbench__ConstPool__TABLE_haf23f5c4_0[__Vtableidx8];
    __Vtableidx1 = ((0x3eU & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                              >> 6U)) | (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__rdWrEnable));
    vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
        = Vtbench__ConstPool__TABLE_hba915db6_0[__Vtableidx1];
    __Vtableidx4 = ((0x10U & ((~ (IData)((0U != (vlSelfRef.tbench__DOT__dut__DOT__rs1 
                                                 ^ vlSelfRef.tbench__DOT__dut__DOT__rs2)))) 
                              << 4U)) | ((8U & (((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__brUnsign)
                                                  ? (IData)(
                                                            (vlSelfRef.tbench__DOT__dut__DOT__branchControlBlock__DOT__branchLessBlock__DOT__subR1R2 
                                                             >> 0x20U))
                                                  : (IData)(
                                                            (vlSelfRef.tbench__DOT__dut__DOT__branchControlBlock__DOT__branchLessBlock__DOT__subR1R2 
                                                             >> 0x1fU))) 
                                                << 3U)) 
                                         | (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                  >> 0xcU))));
    vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__pcSel_Bformat 
        = Vtbench__ConstPool__TABLE_h12e66f01_0[__Vtableidx4];
    vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0 
        = ((((- (IData)((1U & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                               >> 3U)))) << 0x18U) 
            | (0xff0000U & ((- (IData)((1U & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                              >> 2U)))) 
                            << 0x10U))) | ((0xff00U 
                                            & ((- (IData)(
                                                          (1U 
                                                           & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                                              >> 1U)))) 
                                               << 8U)) 
                                           | (0xffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask)))))));
    __Vtableidx2 = vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp;
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__signalSelSign 
        = Vtbench__ConstPool__TABLE_h75843ca2_0[__Vtableidx2];
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__athi 
        = Vtbench__ConstPool__TABLE_hb79e8aff_0[__Vtableidx2];
    if (vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opASel) {
        if (vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opASel) {
            vlSelfRef.tbench__DOT__dut__DOT__operandA 
                = vlSelfRef.tbench__DOT__dut__DOT__pc_current;
        }
    } else {
        vlSelfRef.tbench__DOT__dut__DOT__operandA = vlSelfRef.tbench__DOT__dut__DOT__rs1;
    }
    __Vtableidx5 = (((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__pcSel_Bformat) 
                     << 4U) | (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode));
    vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__pcSel 
        = Vtbench__ConstPool__TABLE_h393da6a0_0[__Vtableidx5];
    if (vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__signalSelSign) {
        if (vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__signalSelSign) {
            vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__operandBToAdd 
                = (0x1ffffffffULL & (1ULL + (~ (QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandB)))));
            vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__exeOpbCompTemp 
                = (((QData)((IData)((3U & (- (IData)(
                                                     (vlSelfRef.tbench__DOT__dut__DOT__operandB 
                                                      >> 0x1fU)))))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandB)));
            vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__exeOpaComp 
                = (((QData)((IData)((3U & (- (IData)(
                                                     (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                                                      >> 0x1fU)))))) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandA)));
        }
    } else {
        vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__operandBToAdd 
            = (QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandB));
        vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__exeOpbCompTemp 
            = (QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandB));
        vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__exeOpaComp 
            = (QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandA));
    }
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0U] 
        = vlSelfRef.tbench__DOT__dut__DOT__operandA;
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[1U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 1U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[2U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 2U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[3U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 3U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[4U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 4U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[5U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 5U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[6U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 6U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[7U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 7U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[8U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 8U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[9U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 9U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0xaU] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0xaU);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0xbU] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0xbU);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0xcU] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0xcU);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0xdU] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0xdU);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0xeU] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0xeU);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0xfU] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0xfU);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0x10U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0x10U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0x11U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0x11U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0x12U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0x12U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0x13U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0x13U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0x14U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0x14U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0x15U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0x15U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0x16U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0x16U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0x17U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0x17U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0x18U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0x18U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0x19U] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0x19U);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0x1aU] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0x1aU);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0x1bU] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0x1bU);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0x1cU] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0x1cU);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0x1dU] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0x1dU);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0x1eU] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0x1eU);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0x1fU] 
        = VL_SHIFTL_III(32,32,32, vlSelfRef.tbench__DOT__dut__DOT__operandA, 0x1fU);
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0U] 
        = vlSelfRef.tbench__DOT__dut__DOT__operandA;
    tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1 
        = ((IData)(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__athi) 
           & (vlSelfRef.tbench__DOT__dut__DOT__operandA 
              >> 0x1fU));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__resultComp 
        = (0x3ffffffffULL & (1ULL + (vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__exeOpaComp 
                                     + (~ vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__exeOpbCompTemp))));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[1U] 
        = (((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1) 
            << 0x1fU) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                         >> 1U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[2U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0x1eU) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                         >> 2U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[3U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0x1dU) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                         >> 3U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[4U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0x1cU) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                         >> 4U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[5U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0x1bU) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                         >> 5U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[6U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0x1aU) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                         >> 6U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[7U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0x19U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                         >> 7U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[8U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0x18U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                         >> 8U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[9U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0x17U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                         >> 9U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0xaU] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0x16U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                         >> 0xaU));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0xbU] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0x15U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                         >> 0xbU));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0xcU] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0x14U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                         >> 0xcU));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0xdU] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0x13U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                         >> 0xdU));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0xeU] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0x12U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                         >> 0xeU));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0xfU] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0x11U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                         >> 0xfU));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0x10U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0x10U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                         >> 0x10U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0x11U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0xfU) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                        >> 0x11U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0x12U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0xeU) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                        >> 0x12U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0x13U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0xdU) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                        >> 0x13U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0x14U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0xcU) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                        >> 0x14U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0x15U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0xbU) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                        >> 0x15U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0x16U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 0xaU) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                        >> 0x16U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0x17U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 9U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                      >> 0x17U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0x18U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 8U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                      >> 0x18U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0x19U] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 7U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                      >> 0x19U));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0x1aU] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 6U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                      >> 0x1aU));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0x1bU] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 5U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                      >> 0x1bU));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0x1cU] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 4U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                      >> 0x1cU));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0x1dU] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 3U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                      >> 0x1dU));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0x1eU] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 2U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                      >> 0x1eU));
    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0x1fU] 
        = (((- (IData)((IData)(tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT____VdfgRegularize_h59e8a0e9_0_1))) 
            << 1U) | (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                      >> 0x1fU));
    vlSelfRef.tbench__DOT__dut__DOT__alu_data = ((8U 
                                                  & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp))
                                                  ? 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp))
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp))
                                                     ? 0U
                                                     : vlSelfRef.tbench__DOT__dut__DOT__operandB)
                                                    : 
                                                   vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData
                                                   [
                                                   (0x1fU 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__operandB)]))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp))
                                                     ? 
                                                    vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData
                                                    [
                                                    (0x1fU 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__operandB)]
                                                     : 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__operandB))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp))
                                                     ? 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                                                     | vlSelfRef.tbench__DOT__dut__DOT__operandB)
                                                     : 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                                                     ^ vlSelfRef.tbench__DOT__dut__DOT__operandB)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp))
                                                     ? 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__resultComp 
                                                                >> 0x20U)))
                                                     : 
                                                    (1U 
                                                     & (IData)(
                                                               (vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__resultComp 
                                                                >> 0x20U))))
                                                    : 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                                                    + (IData)(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__operandBToAdd)))));
    vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_button 
        = ((1U & (~ ((((((((0U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                   >> 0xcU)) | (1U 
                                                == 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU))) 
                          | (2U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                    >> 0xcU))) | (3U 
                                                  == 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                   >> 0xcU))) 
                        | (4U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                  >> 0xcU))) | (5U 
                                                == 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU))) 
                      | (6U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                >> 0xcU))) | (7U == 
                                              (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                               >> 0xcU))))) 
           && ((0x10000U != (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                             >> 0xcU)) && ((0x10001U 
                                            != (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                >> 0xcU)) 
                                           && ((0x10002U 
                                                != 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU)) 
                                               && ((0x10003U 
                                                    != 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                     >> 0xcU)) 
                                                   && ((0x10004U 
                                                        != 
                                                        (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                         >> 0xcU)) 
                                                       && ((0x10010U 
                                                            != 
                                                            (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                             >> 0xcU)) 
                                                           && (0x10011U 
                                                               == 
                                                               (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                                >> 0xcU)))))))));
    if (vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__pcSel) {
        if (vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__pcSel) {
            vlSelfRef.tbench__DOT__dut__DOT__pc_next 
                = vlSelfRef.tbench__DOT__dut__DOT__alu_data;
        }
    } else {
        vlSelfRef.tbench__DOT__dut__DOT__pc_next = 
            ((IData)(4U) + vlSelfRef.tbench__DOT__dut__DOT__pc_current);
    }
    vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_seg30 
        = ((1U & (~ ((((((((0U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                   >> 0xcU)) | (1U 
                                                == 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU))) 
                          | (2U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                    >> 0xcU))) | (3U 
                                                  == 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                   >> 0xcU))) 
                        | (4U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                  >> 0xcU))) | (5U 
                                                == 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU))) 
                      | (6U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                >> 0xcU))) | (7U == 
                                              (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                               >> 0xcU))))) 
           && ((0x10000U != (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                             >> 0xcU)) && ((0x10001U 
                                            != (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                >> 0xcU)) 
                                           && (0x10002U 
                                               == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                   >> 0xcU)))));
    vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_sw 
        = ((1U & (~ ((((((((0U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                   >> 0xcU)) | (1U 
                                                == 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU))) 
                          | (2U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                    >> 0xcU))) | (3U 
                                                  == 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                   >> 0xcU))) 
                        | (4U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                  >> 0xcU))) | (5U 
                                                == 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU))) 
                      | (6U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                >> 0xcU))) | (7U == 
                                              (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                               >> 0xcU))))) 
           && ((0x10000U != (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                             >> 0xcU)) && ((0x10001U 
                                            != (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                >> 0xcU)) 
                                           && ((0x10002U 
                                                != 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU)) 
                                               && ((0x10003U 
                                                    != 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                     >> 0xcU)) 
                                                   && ((0x10004U 
                                                        != 
                                                        (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                         >> 0xcU)) 
                                                       && (0x10010U 
                                                           == 
                                                           (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                            >> 0xcU))))))));
    vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_lcd 
        = ((1U & (~ ((((((((0U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                   >> 0xcU)) | (1U 
                                                == 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU))) 
                          | (2U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                    >> 0xcU))) | (3U 
                                                  == 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                   >> 0xcU))) 
                        | (4U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                  >> 0xcU))) | (5U 
                                                == 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU))) 
                      | (6U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                >> 0xcU))) | (7U == 
                                              (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                               >> 0xcU))))) 
           && ((0x10000U != (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                             >> 0xcU)) && ((0x10001U 
                                            != (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                >> 0xcU)) 
                                           && ((0x10002U 
                                                != 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU)) 
                                               && ((0x10003U 
                                                    != 
                                                    (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                     >> 0xcU)) 
                                                   && (0x10004U 
                                                       == 
                                                       (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                        >> 0xcU)))))));
    vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_seg74 
        = ((1U & (~ ((((((((0U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                   >> 0xcU)) | (1U 
                                                == 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU))) 
                          | (2U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                    >> 0xcU))) | (3U 
                                                  == 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                   >> 0xcU))) 
                        | (4U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                  >> 0xcU))) | (5U 
                                                == 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU))) 
                      | (6U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                >> 0xcU))) | (7U == 
                                              (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                               >> 0xcU))))) 
           && ((0x10000U != (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                             >> 0xcU)) && ((0x10001U 
                                            != (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                >> 0xcU)) 
                                           && ((0x10002U 
                                                != 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU)) 
                                               && (0x10003U 
                                                   == 
                                                   (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                    >> 0xcU))))));
    vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_ledg 
        = ((1U & (~ ((((((((0U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                   >> 0xcU)) | (1U 
                                                == 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU))) 
                          | (2U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                    >> 0xcU))) | (3U 
                                                  == 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                   >> 0xcU))) 
                        | (4U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                  >> 0xcU))) | (5U 
                                                == 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU))) 
                      | (6U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                >> 0xcU))) | (7U == 
                                              (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                               >> 0xcU))))) 
           && ((0x10000U != (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                             >> 0xcU)) && (0x10001U 
                                           == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                               >> 0xcU))));
    vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_ledr 
        = ((1U & (~ ((((((((0U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                   >> 0xcU)) | (1U 
                                                == 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU))) 
                          | (2U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                    >> 0xcU))) | (3U 
                                                  == 
                                                  (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                   >> 0xcU))) 
                        | (4U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                  >> 0xcU))) | (5U 
                                                == 
                                                (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                                 >> 0xcU))) 
                      | (6U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                >> 0xcU))) | (7U == 
                                              (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                               >> 0xcU))))) 
           && (0x10000U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                            >> 0xcU)));
    vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__mem 
        = ((0xffffff00U & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__mem) 
           | ((- (IData)((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask)))) 
              & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__dataMemoryBlock__DOT__mem
              [(0xffffU & vlSelfRef.tbench__DOT__dut__DOT__alu_data)]));
    vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__mem 
        = ((0xffff00ffU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__mem) 
           | (((- (IData)((1U & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                 >> 1U)))) & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__dataMemoryBlock__DOT__mem
               [(0xffffU & ((IData)(1U) + vlSelfRef.tbench__DOT__dut__DOT__alu_data))]) 
              << 8U));
    vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__mem 
        = ((0xff00ffffU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__mem) 
           | (((- (IData)((1U & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                 >> 2U)))) & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__dataMemoryBlock__DOT__mem
               [(0xffffU & ((IData)(2U) + vlSelfRef.tbench__DOT__dut__DOT__alu_data))]) 
              << 0x10U));
    vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__mem 
        = ((0xffffffU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__mem) 
           | (((- (IData)((1U & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                 >> 3U)))) & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__dataMemoryBlock__DOT__mem
               [(0xffffU & ((IData)(3U) + vlSelfRef.tbench__DOT__dut__DOT__alu_data))]) 
              << 0x18U));
    vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_memory 
        = ((((((((0U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                         >> 0xcU)) | (1U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                             >> 0xcU))) 
                | (2U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                          >> 0xcU))) | (3U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                               >> 0xcU))) 
              | (4U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                        >> 0xcU))) | (5U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                             >> 0xcU))) 
            | (6U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                      >> 0xcU))) | (7U == (vlSelfRef.tbench__DOT__dut__DOT__alu_data 
                                           >> 0xcU)));
    vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____Vcellinp__dataMemoryBlock__i_wren 
        = ((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_memory) 
           & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__memWrEnable));
    vlSelfRef.tbench__DOT__dut__DOT__lsu_data = (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_memory))) 
                                                  & (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__mem 
                                                     & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0)) 
                                                 | (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_ledr))) 
                                                     & ((((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                                           [3U] 
                                                           << 0x18U) 
                                                          | (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                                             [2U] 
                                                             << 0x10U)) 
                                                         | ((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                                             [1U] 
                                                             << 8U) 
                                                            | vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                                            [0U])) 
                                                        & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0)) 
                                                    | (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_ledg))) 
                                                        & ((((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                                              [3U] 
                                                              << 0x18U) 
                                                             | (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                                                [2U] 
                                                                << 0x10U)) 
                                                            | ((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                                                [1U] 
                                                                << 8U) 
                                                               | vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                                               [0U])) 
                                                           & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0)) 
                                                       | (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_seg30))) 
                                                           & ((((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                                                                 [3U] 
                                                                 << 0x18U) 
                                                                | (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                                                                   [2U] 
                                                                   << 0x10U)) 
                                                               | ((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                                                                   [1U] 
                                                                   << 8U) 
                                                                  | vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                                                                  [0U])) 
                                                              & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0)) 
                                                          | (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_seg74))) 
                                                              & ((((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                                                                    [3U] 
                                                                    << 0x18U) 
                                                                   | (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                                                                      [2U] 
                                                                      << 0x10U)) 
                                                                  | ((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                                                                      [1U] 
                                                                      << 8U) 
                                                                     | vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                                                                     [0U])) 
                                                                 & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0)) 
                                                             | (((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_lcd))) 
                                                                 & (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__lcd 
                                                                    & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0)) 
                                                                | (0x12345678U 
                                                                   & ((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_sw))) 
                                                                      & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0))))))));
    vlSelfRef.tbench__DOT__dut__DOT__writeBackData 
        = ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__wbSel))
            ? ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__wbSel))
                ? 0U : ((1U == (0xfU & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask)))
                         ? (((- (IData)((1U & ((~ ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                                   >> 4U)) 
                                               & (vlSelfRef.tbench__DOT__dut__DOT__lsu_data 
                                                  >> 7U))))) 
                             << 8U) | (0xffU & vlSelfRef.tbench__DOT__dut__DOT__lsu_data))
                         : ((3U == (0xfU & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask)))
                             ? (((- (IData)((1U & (
                                                   (~ 
                                                    ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                                     >> 4U)) 
                                                   & (vlSelfRef.tbench__DOT__dut__DOT__lsu_data 
                                                      >> 0xfU))))) 
                                 << 0x10U) | (0xffffU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__lsu_data))
                             : vlSelfRef.tbench__DOT__dut__DOT__lsu_data)))
            : ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__wbSel))
                ? ((IData)(4U) + vlSelfRef.tbench__DOT__dut__DOT__pc_current)
                : vlSelfRef.tbench__DOT__dut__DOT__alu_data));
}

VL_ATTR_COLD void Vtbench___024root___eval_triggers__stl(Vtbench___024root* vlSelf);

VL_ATTR_COLD bool Vtbench___024root___eval_phase__stl(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___eval_phase__stl\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtbench___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__act(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___dump_triggers__act\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tbench.i_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tbench.i_reset)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tbench.i_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtbench___024root___dump_triggers__nba(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___dump_triggers__nba\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tbench.i_clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tbench.i_reset)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tbench.i_clk)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtbench___024root____Vm_traceActivitySetAll(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root____Vm_traceActivitySetAll\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
}

VL_ATTR_COLD void Vtbench___024root___ctor_var_reset(Vtbench___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root___ctor_var_reset\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tbench__DOT__i_clk = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__i_reset = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__pc_current = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__alu_data = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__inst_current = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__operandA = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__operandB = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__writeBackData = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__lsu_data = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__validInst = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__instMemoryBlock__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_1__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_2__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_3__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_4__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_5__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_6__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_7__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_8__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_9__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_10__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_11__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_12__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_13__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_14__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_15__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_16__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_17__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_18__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_19__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_20__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_21__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_22__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_23__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_24__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_25__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_26__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_27__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_28__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_29__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_30__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_31__DOT__register32 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__ImmGenBlock__DOT__i0 = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__branchControlBlock__DOT__branchLessBlock__DOT__subR1R2 = VL_RAND_RESET_Q(33);
    vlSelf->tbench__DOT__dut__DOT__alublock__DOT__operandBToAdd = VL_RAND_RESET_Q(33);
    vlSelf->tbench__DOT__dut__DOT__alublock__DOT__signalSelSign = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__alublock__DOT__athi = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__alublock__DOT__exeOpaComp = VL_RAND_RESET_Q(34);
    vlSelf->tbench__DOT__dut__DOT__alublock__DOT__exeOpbCompTemp = VL_RAND_RESET_Q(34);
    vlSelf->tbench__DOT__dut__DOT__alublock__DOT__resultComp = VL_RAND_RESET_Q(34);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT__en_memory = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT__en_ledr = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT__en_ledg = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT__en_seg30 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT__en_seg74 = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT__en_lcd = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT__en_sw = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT__en_button = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT__mem = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT____Vcellinp__dataMemoryBlock__i_wren = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT__lcd = VL_RAND_RESET_I(32);
    vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 65536; ++__Vi0) {
        vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT__dataMemoryBlock__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->tbench__DOT__dut__DOT__lsuBlock__DOT__dataMemoryBlock__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode = VL_RAND_RESET_I(4);
    vlSelf->tbench__DOT__dut__DOT__masterControlBlock__DOT__pcSel = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__masterControlBlock__DOT__pcSel_Bformat = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm = VL_RAND_RESET_I(3);
    vlSelf->tbench__DOT__dut__DOT__masterControlBlock__DOT__brUnsign = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__masterControlBlock__DOT__opASel = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp = VL_RAND_RESET_I(4);
    vlSelf->tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp_IFormat = VL_RAND_RESET_I(4);
    vlSelf->tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp_RFormat = VL_RAND_RESET_I(4);
    vlSelf->tbench__DOT__dut__DOT__masterControlBlock__DOT__memWrEnable = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__masterControlBlock__DOT__wbSel = VL_RAND_RESET_I(2);
    vlSelf->tbench__DOT__dut__DOT__masterControlBlock__DOT__rdWrEnable = VL_RAND_RESET_I(1);
    vlSelf->tbench__DOT__dut__DOT__masterControlBlock__DOT__mask = VL_RAND_RESET_I(5);
    vlSelf->tbench__DOT__dut__DOT__masterControlBlock__DOT__mask_LSformat = VL_RAND_RESET_I(5);
    vlSelf->tbench__DOT__dut__DOT__masterControlBlock__DOT__lTypeFuncVld = VL_RAND_RESET_I(1);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v0 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v4 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v4 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v4 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v5 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v5 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v5 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v6 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v6 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v6 = 0;
    vlSelf->__VdlyVal__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v7 = VL_RAND_RESET_I(8);
    vlSelf->__VdlyDim0__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v7 = VL_RAND_RESET_I(3);
    vlSelf->__VdlySet__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v7 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__i_clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tbench__DOT__i_reset__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
