// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtbench.h for the primary calling header

#ifndef VERILATED_VTBENCH___024ROOT_H_
#define VERILATED_VTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tbench__DOT__i_clk;
        CData/*0:0*/ tbench__DOT__i_reset;
        CData/*0:0*/ tbench__DOT__dut__DOT__validInst;
        CData/*0:0*/ tbench__DOT__dut__DOT__alublock__DOT__signalSelSign;
        CData/*0:0*/ tbench__DOT__dut__DOT__alublock__DOT__athi;
        CData/*0:0*/ tbench__DOT__dut__DOT__lsuBlock__DOT__en_memory;
        CData/*0:0*/ tbench__DOT__dut__DOT__lsuBlock__DOT__en_ledr;
        CData/*0:0*/ tbench__DOT__dut__DOT__lsuBlock__DOT__en_ledg;
        CData/*0:0*/ tbench__DOT__dut__DOT__lsuBlock__DOT__en_seg30;
        CData/*0:0*/ tbench__DOT__dut__DOT__lsuBlock__DOT__en_seg74;
        CData/*0:0*/ tbench__DOT__dut__DOT__lsuBlock__DOT__en_lcd;
        CData/*0:0*/ tbench__DOT__dut__DOT__lsuBlock__DOT__en_sw;
        CData/*0:0*/ tbench__DOT__dut__DOT__lsuBlock__DOT__en_button;
        CData/*0:0*/ tbench__DOT__dut__DOT__lsuBlock__DOT____Vcellinp__dataMemoryBlock__i_wren;
        CData/*3:0*/ tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode;
        CData/*0:0*/ tbench__DOT__dut__DOT__masterControlBlock__DOT__pcSel;
        CData/*0:0*/ tbench__DOT__dut__DOT__masterControlBlock__DOT__pcSel_Bformat;
        CData/*2:0*/ tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm;
        CData/*0:0*/ tbench__DOT__dut__DOT__masterControlBlock__DOT__brUnsign;
        CData/*0:0*/ tbench__DOT__dut__DOT__masterControlBlock__DOT__opASel;
        CData/*3:0*/ tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp;
        CData/*3:0*/ tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp_IFormat;
        CData/*3:0*/ tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp_RFormat;
        CData/*0:0*/ tbench__DOT__dut__DOT__masterControlBlock__DOT__memWrEnable;
        CData/*1:0*/ tbench__DOT__dut__DOT__masterControlBlock__DOT__wbSel;
        CData/*0:0*/ tbench__DOT__dut__DOT__masterControlBlock__DOT__rdWrEnable;
        CData/*4:0*/ tbench__DOT__dut__DOT__masterControlBlock__DOT__mask;
        CData/*4:0*/ tbench__DOT__dut__DOT__masterControlBlock__DOT__mask_LSformat;
        CData/*0:0*/ tbench__DOT__dut__DOT__masterControlBlock__DOT__lTypeFuncVld;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v0;
        CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v4;
        CData/*2:0*/ __VdlyDim0__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v4;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v4;
        CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v5;
        CData/*2:0*/ __VdlyDim0__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v5;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v5;
        CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v6;
        CData/*2:0*/ __VdlyDim0__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v6;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v6;
        CData/*7:0*/ __VdlyVal__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v7;
        CData/*2:0*/ __VdlyDim0__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v7;
        CData/*0:0*/ __VdlySet__tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg__v7;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tbench__DOT__i_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tbench__DOT__i_reset__0;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ tbench__DOT__dut__DOT__pc_next;
        IData/*31:0*/ tbench__DOT__dut__DOT__pc_current;
        IData/*31:0*/ tbench__DOT__dut__DOT__alu_data;
        IData/*31:0*/ tbench__DOT__dut__DOT__inst_current;
        IData/*31:0*/ tbench__DOT__dut__DOT__rs1;
        IData/*31:0*/ tbench__DOT__dut__DOT__rs2;
        IData/*31:0*/ tbench__DOT__dut__DOT__operandA;
        IData/*31:0*/ tbench__DOT__dut__DOT__operandB;
        IData/*31:0*/ tbench__DOT__dut__DOT__writeBackData;
        IData/*31:0*/ tbench__DOT__dut__DOT__lsu_data;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_1__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_2__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_3__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_4__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_5__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_6__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_7__DOT__register32;
    };
    struct {
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_8__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_9__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_10__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_11__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_12__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_13__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_14__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_15__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_16__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_17__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_18__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_19__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_20__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_21__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_22__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_23__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_24__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_25__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_26__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_27__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_28__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_29__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_30__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_31__DOT__register32;
        IData/*31:0*/ tbench__DOT__dut__DOT__ImmGenBlock__DOT__i0;
        IData/*31:0*/ tbench__DOT__dut__DOT__lsuBlock__DOT__mem;
        IData/*31:0*/ tbench__DOT__dut__DOT__lsuBlock__DOT__lcd;
        IData/*31:0*/ tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0;
        IData/*31:0*/ tbench__DOT__dut__DOT__lsuBlock__DOT__dataMemoryBlock__DOT__unnamedblk1__DOT__i;
        IData/*31:0*/ __VactIterCount;
        QData/*32:0*/ tbench__DOT__dut__DOT__branchControlBlock__DOT__branchLessBlock__DOT__subR1R2;
        QData/*32:0*/ tbench__DOT__dut__DOT__alublock__DOT__operandBToAdd;
        QData/*33:0*/ tbench__DOT__dut__DOT__alublock__DOT__exeOpaComp;
        QData/*33:0*/ tbench__DOT__dut__DOT__alublock__DOT__exeOpbCompTemp;
        QData/*33:0*/ tbench__DOT__dut__DOT__alublock__DOT__resultComp;
        VlUnpacked<CData/*7:0*/, 65536> tbench__DOT__dut__DOT__instMemoryBlock__DOT__mem;
        VlUnpacked<IData/*31:0*/, 32> tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister;
        VlUnpacked<IData/*31:0*/, 32> tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData;
        VlUnpacked<IData/*31:0*/, 32> tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData;
        VlUnpacked<CData/*7:0*/, 8> tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg;
        VlUnpacked<CData/*7:0*/, 8> tbench__DOT__dut__DOT__lsuBlock__DOT__ledg;
        VlUnpacked<CData/*7:0*/, 8> tbench__DOT__dut__DOT__lsuBlock__DOT__seg30;
        VlUnpacked<CData/*7:0*/, 8> tbench__DOT__dut__DOT__lsuBlock__DOT__seg74;
        VlUnpacked<CData/*7:0*/, 65536> tbench__DOT__dut__DOT__lsuBlock__DOT__dataMemoryBlock__DOT__mem;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlNBACommitQueue<VlUnpacked<CData/*7:0*/, 65536>, false, CData/*7:0*/, 1> __VdlyCommitQueuetbench__DOT__dut__DOT__lsuBlock__DOT__dataMemoryBlock__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtbench___024root(Vtbench__Syms* symsp, const char* v__name);
    ~Vtbench___024root();
    VL_UNCOPYABLE(Vtbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
