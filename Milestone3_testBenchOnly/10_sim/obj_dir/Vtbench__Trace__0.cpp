// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtbench__Syms.h"


void Vtbench___024root__trace_chg_0_sub_0(Vtbench___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtbench___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_chg_0\n"); );
    // Init
    Vtbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbench___024root*>(voidSelf);
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtbench___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtbench___024root__trace_chg_0_sub_0(Vtbench___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_chg_0_sub_0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[4]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[5]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[6]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[7]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[8]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[9]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[10]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[11]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[12]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[13]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[14]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[15]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[16]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[17]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[18]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[19]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[20]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[21]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[22]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[23]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[24]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[25]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[26]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[27]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[28]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[29]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[30]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+32,((((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                   [3U] << 0x18U) | 
                                  (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                   [2U] << 0x10U)) 
                                 | ((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                     [1U] << 8U) | 
                                    vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                    [0U]))),32);
        bufp->chgCData(oldp+33,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                                 [0U])),7);
        bufp->chgCData(oldp+34,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                                 [1U])),7);
        bufp->chgCData(oldp+35,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                                 [2U])),7);
        bufp->chgCData(oldp+36,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                                 [3U])),7);
        bufp->chgCData(oldp+37,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                                 [0U])),7);
        bufp->chgCData(oldp+38,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                                 [1U])),7);
        bufp->chgCData(oldp+39,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                                 [2U])),7);
        bufp->chgCData(oldp+40,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                                 [3U])),7);
        bufp->chgIData(oldp+41,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__lcd),32);
        bufp->chgCData(oldp+42,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[0]),8);
        bufp->chgCData(oldp+43,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[1]),8);
        bufp->chgCData(oldp+44,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[2]),8);
        bufp->chgCData(oldp+45,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[3]),8);
        bufp->chgCData(oldp+46,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[4]),8);
        bufp->chgCData(oldp+47,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[5]),8);
        bufp->chgCData(oldp+48,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[6]),8);
        bufp->chgCData(oldp+49,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[7]),8);
        bufp->chgCData(oldp+50,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[0]),8);
        bufp->chgCData(oldp+51,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[1]),8);
        bufp->chgCData(oldp+52,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[2]),8);
        bufp->chgCData(oldp+53,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[3]),8);
        bufp->chgCData(oldp+54,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[4]),8);
        bufp->chgCData(oldp+55,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[5]),8);
        bufp->chgCData(oldp+56,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[6]),8);
        bufp->chgCData(oldp+57,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[7]),8);
        bufp->chgCData(oldp+58,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[0]),8);
        bufp->chgCData(oldp+59,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[1]),8);
        bufp->chgCData(oldp+60,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[2]),8);
        bufp->chgCData(oldp+61,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[3]),8);
        bufp->chgCData(oldp+62,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[4]),8);
        bufp->chgCData(oldp+63,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[5]),8);
        bufp->chgCData(oldp+64,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[6]),8);
        bufp->chgCData(oldp+65,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[7]),8);
        bufp->chgIData(oldp+66,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_1__DOT__register32),32);
        bufp->chgIData(oldp+67,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_10__DOT__register32),32);
        bufp->chgIData(oldp+68,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_11__DOT__register32),32);
        bufp->chgIData(oldp+69,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_12__DOT__register32),32);
        bufp->chgIData(oldp+70,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_13__DOT__register32),32);
        bufp->chgIData(oldp+71,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_14__DOT__register32),32);
        bufp->chgIData(oldp+72,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_15__DOT__register32),32);
        bufp->chgIData(oldp+73,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_16__DOT__register32),32);
        bufp->chgIData(oldp+74,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_17__DOT__register32),32);
        bufp->chgIData(oldp+75,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_18__DOT__register32),32);
        bufp->chgIData(oldp+76,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_19__DOT__register32),32);
        bufp->chgIData(oldp+77,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_2__DOT__register32),32);
        bufp->chgIData(oldp+78,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_20__DOT__register32),32);
        bufp->chgIData(oldp+79,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_21__DOT__register32),32);
        bufp->chgIData(oldp+80,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_22__DOT__register32),32);
        bufp->chgIData(oldp+81,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_23__DOT__register32),32);
        bufp->chgIData(oldp+82,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_24__DOT__register32),32);
        bufp->chgIData(oldp+83,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_25__DOT__register32),32);
        bufp->chgIData(oldp+84,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_26__DOT__register32),32);
        bufp->chgIData(oldp+85,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_27__DOT__register32),32);
        bufp->chgIData(oldp+86,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_28__DOT__register32),32);
        bufp->chgIData(oldp+87,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_29__DOT__register32),32);
        bufp->chgIData(oldp+88,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_3__DOT__register32),32);
        bufp->chgIData(oldp+89,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_30__DOT__register32),32);
        bufp->chgIData(oldp+90,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_31__DOT__register32),32);
        bufp->chgIData(oldp+91,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_4__DOT__register32),32);
        bufp->chgIData(oldp+92,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_5__DOT__register32),32);
        bufp->chgIData(oldp+93,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_6__DOT__register32),32);
        bufp->chgIData(oldp+94,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_7__DOT__register32),32);
        bufp->chgIData(oldp+95,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_8__DOT__register32),32);
        bufp->chgIData(oldp+96,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_9__DOT__register32),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+97,(vlSelfRef.tbench__DOT__dut__DOT__pc_current),32);
        bufp->chgIData(oldp+98,((((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                   [3U] << 0x18U) | 
                                  (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                   [2U] << 0x10U)) 
                                 | ((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                     [1U] << 8U) | 
                                    vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                    [0U]))),32);
        bufp->chgBit(oldp+99,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__pcSel));
        bufp->chgIData(oldp+100,(((IData)(4U) + vlSelfRef.tbench__DOT__dut__DOT__pc_current)),32);
        bufp->chgIData(oldp+101,(vlSelfRef.tbench__DOT__dut__DOT__pc_next),32);
        bufp->chgIData(oldp+102,(vlSelfRef.tbench__DOT__dut__DOT__alu_data),32);
        bufp->chgIData(oldp+103,(vlSelfRef.tbench__DOT__dut__DOT__inst_current),32);
        bufp->chgIData(oldp+104,(vlSelfRef.tbench__DOT__dut__DOT__rs1),32);
        bufp->chgIData(oldp+105,(vlSelfRef.tbench__DOT__dut__DOT__rs2),32);
        bufp->chgIData(oldp+106,(((4U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm))
                                   ? ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm))
                                       ? vlSelfRef.tbench__DOT__dut__DOT__ImmGenBlock__DOT__i0
                                       : ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm))
                                           ? (0xfffff000U 
                                              & vlSelfRef.tbench__DOT__dut__DOT__inst_current)
                                           : (((- (IData)(
                                                          (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                           >> 0x1fU))) 
                                               << 0x14U) 
                                              | (((0xff000U 
                                                   & vlSelfRef.tbench__DOT__dut__DOT__inst_current) 
                                                  | (0x800U 
                                                     & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                        >> 9U))) 
                                                 | (0x7feU 
                                                    & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                       >> 0x14U))))))
                                   : ((2U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm))
                                       ? ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm))
                                           ? (((- (IData)(
                                                          (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                          >> 7U)))))
                                           : (((- (IData)(
                                                          (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0xfe0U 
                                                  & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                       >> 7U)))))
                                       : ((1U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm))
                                           ? (0x1fU 
                                              & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                 >> 0x14U))
                                           : vlSelfRef.tbench__DOT__dut__DOT__ImmGenBlock__DOT__i0)))),32);
        bufp->chgIData(oldp+107,(vlSelfRef.tbench__DOT__dut__DOT__operandA),32);
        bufp->chgIData(oldp+108,(vlSelfRef.tbench__DOT__dut__DOT__operandB),32);
        bufp->chgIData(oldp+109,(vlSelfRef.tbench__DOT__dut__DOT__writeBackData),32);
        bufp->chgCData(oldp+110,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm),3);
        bufp->chgBit(oldp+111,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__rdWrEnable));
        bufp->chgBit(oldp+112,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__brUnsign));
        bufp->chgBit(oldp+113,((1U & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__brUnsign)
                                       ? (IData)((vlSelfRef.tbench__DOT__dut__DOT__branchControlBlock__DOT__branchLessBlock__DOT__subR1R2 
                                                  >> 0x20U))
                                       : (IData)((vlSelfRef.tbench__DOT__dut__DOT__branchControlBlock__DOT__branchLessBlock__DOT__subR1R2 
                                                  >> 0x1fU))))));
        bufp->chgBit(oldp+114,((1U & (~ (IData)((0U 
                                                 != 
                                                 (vlSelfRef.tbench__DOT__dut__DOT__rs1 
                                                  ^ vlSelfRef.tbench__DOT__dut__DOT__rs2)))))));
        bufp->chgBit(oldp+115,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opASel));
        bufp->chgBit(oldp+116,((1U & (~ ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode) 
                                         >> 3U)))));
        bufp->chgCData(oldp+117,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp),4);
        bufp->chgBit(oldp+118,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__memWrEnable));
        bufp->chgBit(oldp+119,((1U & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                      >> 4U))));
        bufp->chgCData(oldp+120,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__wbSel),2);
        bufp->chgCData(oldp+121,((0xfU & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask))),4);
        bufp->chgIData(oldp+122,(vlSelfRef.tbench__DOT__dut__DOT__lsu_data),32);
        bufp->chgIData(oldp+123,(((1U == (0xfU & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask)))
                                   ? (((- (IData)((1U 
                                                   & ((~ 
                                                       ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                                        >> 4U)) 
                                                      & (vlSelfRef.tbench__DOT__dut__DOT__lsu_data 
                                                         >> 7U))))) 
                                       << 8U) | (0xffU 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__lsu_data))
                                   : ((3U == (0xfU 
                                              & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask)))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & ((~ 
                                                           ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                                            >> 4U)) 
                                                          & (vlSelfRef.tbench__DOT__dut__DOT__lsu_data 
                                                             >> 0xfU))))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__lsu_data))
                                       : vlSelfRef.tbench__DOT__dut__DOT__lsu_data))),32);
        bufp->chgBit(oldp+124,(vlSelfRef.tbench__DOT__dut__DOT__validInst));
        bufp->chgIData(oldp+125,(vlSelfRef.tbench__DOT__dut__DOT__ImmGenBlock__DOT__i0),32);
        bufp->chgIData(oldp+126,((0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                           >> 0x14U))),32);
        bufp->chgIData(oldp+127,((((- (IData)((vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+128,((((- (IData)((vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+129,((((- (IData)((vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                               >> 0x1fU))) 
                                   << 0x14U) | (((0xff000U 
                                                  & vlSelfRef.tbench__DOT__dut__DOT__inst_current) 
                                                 | (0x800U 
                                                    & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                       >> 9U))) 
                                                | (0x7feU 
                                                   & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                      >> 0x14U))))),32);
        bufp->chgIData(oldp+130,((0xfffff000U & vlSelfRef.tbench__DOT__dut__DOT__inst_current)),32);
        bufp->chgQData(oldp+131,((QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandA))),33);
        bufp->chgQData(oldp+133,((QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandB))),33);
        bufp->chgQData(oldp+135,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__operandBToAdd),33);
        bufp->chgQData(oldp+137,((0x1ffffffffULL & 
                                  ((QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandA)) 
                                   + vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__operandBToAdd))),33);
        bufp->chgQData(oldp+139,((0x1ffffffffULL & 
                                  (1ULL + (~ (QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandB)))))),33);
        bufp->chgBit(oldp+141,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__signalSelSign));
        bufp->chgBit(oldp+142,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__athi));
        bufp->chgQData(oldp+143,((QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandA))),34);
        bufp->chgQData(oldp+145,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                                                                  >> 0x1fU)))))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandA)))),34);
        bufp->chgQData(oldp+147,((QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandB))),34);
        bufp->chgQData(oldp+149,((((QData)((IData)(
                                                   (3U 
                                                    & (- (IData)(
                                                                 (vlSelfRef.tbench__DOT__dut__DOT__operandB 
                                                                  >> 0x1fU)))))) 
                                   << 0x20U) | (QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandB)))),34);
        bufp->chgQData(oldp+151,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__exeOpaComp),34);
        bufp->chgQData(oldp+153,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__exeOpbCompTemp),34);
        bufp->chgQData(oldp+155,((0x3ffffffffULL & 
                                  (1ULL + (~ vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__exeOpbCompTemp)))),34);
        bufp->chgQData(oldp+157,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__resultComp),34);
        bufp->chgIData(oldp+159,((vlSelfRef.tbench__DOT__dut__DOT__operandA 
                                  & vlSelfRef.tbench__DOT__dut__DOT__operandB)),32);
        bufp->chgIData(oldp+160,((vlSelfRef.tbench__DOT__dut__DOT__operandA 
                                  | vlSelfRef.tbench__DOT__dut__DOT__operandB)),32);
        bufp->chgIData(oldp+161,((vlSelfRef.tbench__DOT__dut__DOT__operandA 
                                  ^ vlSelfRef.tbench__DOT__dut__DOT__operandB)),32);
        bufp->chgIData(oldp+162,((vlSelfRef.tbench__DOT__dut__DOT__operandA 
                                  + (IData)(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__operandBToAdd))),32);
        bufp->chgIData(oldp+163,((1U & (IData)((vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__resultComp 
                                                >> 0x20U)))),32);
        bufp->chgIData(oldp+164,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData
                                 [(0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operandB)]),32);
        bufp->chgIData(oldp+165,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData
                                 [(0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operandB)]),32);
        bufp->chgCData(oldp+166,((0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operandB)),5);
        bufp->chgIData(oldp+167,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0]),32);
        bufp->chgIData(oldp+168,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[1]),32);
        bufp->chgIData(oldp+169,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[2]),32);
        bufp->chgIData(oldp+170,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[3]),32);
        bufp->chgIData(oldp+171,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[4]),32);
        bufp->chgIData(oldp+172,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[5]),32);
        bufp->chgIData(oldp+173,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[6]),32);
        bufp->chgIData(oldp+174,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[7]),32);
        bufp->chgIData(oldp+175,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[8]),32);
        bufp->chgIData(oldp+176,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[9]),32);
        bufp->chgIData(oldp+177,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[10]),32);
        bufp->chgIData(oldp+178,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[11]),32);
        bufp->chgIData(oldp+179,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[12]),32);
        bufp->chgIData(oldp+180,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[13]),32);
        bufp->chgIData(oldp+181,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[14]),32);
        bufp->chgIData(oldp+182,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[15]),32);
        bufp->chgIData(oldp+183,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[16]),32);
        bufp->chgIData(oldp+184,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[17]),32);
        bufp->chgIData(oldp+185,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[18]),32);
        bufp->chgIData(oldp+186,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[19]),32);
        bufp->chgIData(oldp+187,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[20]),32);
        bufp->chgIData(oldp+188,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[21]),32);
        bufp->chgIData(oldp+189,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[22]),32);
        bufp->chgIData(oldp+190,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[23]),32);
        bufp->chgIData(oldp+191,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[24]),32);
        bufp->chgIData(oldp+192,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[25]),32);
        bufp->chgIData(oldp+193,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[26]),32);
        bufp->chgIData(oldp+194,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[27]),32);
        bufp->chgIData(oldp+195,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[28]),32);
        bufp->chgIData(oldp+196,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[29]),32);
        bufp->chgIData(oldp+197,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[30]),32);
        bufp->chgIData(oldp+198,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[31]),32);
        bufp->chgIData(oldp+199,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0]),32);
        bufp->chgIData(oldp+200,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[1]),32);
        bufp->chgIData(oldp+201,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[2]),32);
        bufp->chgIData(oldp+202,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[3]),32);
        bufp->chgIData(oldp+203,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[4]),32);
        bufp->chgIData(oldp+204,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[5]),32);
        bufp->chgIData(oldp+205,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[6]),32);
        bufp->chgIData(oldp+206,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[7]),32);
        bufp->chgIData(oldp+207,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[8]),32);
        bufp->chgIData(oldp+208,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[9]),32);
        bufp->chgIData(oldp+209,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[10]),32);
        bufp->chgIData(oldp+210,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[11]),32);
        bufp->chgIData(oldp+211,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[12]),32);
        bufp->chgIData(oldp+212,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[13]),32);
        bufp->chgIData(oldp+213,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[14]),32);
        bufp->chgIData(oldp+214,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[15]),32);
        bufp->chgIData(oldp+215,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[16]),32);
        bufp->chgIData(oldp+216,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[17]),32);
        bufp->chgIData(oldp+217,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[18]),32);
        bufp->chgIData(oldp+218,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[19]),32);
        bufp->chgIData(oldp+219,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[20]),32);
        bufp->chgIData(oldp+220,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[21]),32);
        bufp->chgIData(oldp+221,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[22]),32);
        bufp->chgIData(oldp+222,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[23]),32);
        bufp->chgIData(oldp+223,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[24]),32);
        bufp->chgIData(oldp+224,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[25]),32);
        bufp->chgIData(oldp+225,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[26]),32);
        bufp->chgIData(oldp+226,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[27]),32);
        bufp->chgIData(oldp+227,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[28]),32);
        bufp->chgIData(oldp+228,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[29]),32);
        bufp->chgIData(oldp+229,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[30]),32);
        bufp->chgIData(oldp+230,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[31]),32);
        bufp->chgQData(oldp+231,((QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__rs1))),33);
        bufp->chgQData(oldp+233,((QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__rs2))),33);
        bufp->chgQData(oldp+235,((0x1ffffffffULL & 
                                  (1ULL + (~ (QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__rs2)))))),33);
        bufp->chgQData(oldp+237,(vlSelfRef.tbench__DOT__dut__DOT__branchControlBlock__DOT__branchLessBlock__DOT__subR1R2),33);
        bufp->chgIData(oldp+239,((vlSelfRef.tbench__DOT__dut__DOT__rs1 
                                  ^ vlSelfRef.tbench__DOT__dut__DOT__rs2)),32);
        bufp->chgIData(oldp+240,((((- (IData)((1U & 
                                               ((~ 
                                                 ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                                  >> 4U)) 
                                                & (vlSelfRef.tbench__DOT__dut__DOT__lsu_data 
                                                   >> 7U))))) 
                                   << 8U) | (0xffU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__lsu_data))),32);
        bufp->chgIData(oldp+241,((((- (IData)((1U & 
                                               ((~ 
                                                 ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                                  >> 4U)) 
                                                & (vlSelfRef.tbench__DOT__dut__DOT__lsu_data 
                                                   >> 0xfU))))) 
                                   << 0x10U) | (0xffffU 
                                                & vlSelfRef.tbench__DOT__dut__DOT__lsu_data))),32);
        bufp->chgSData(oldp+242,((0xffffU & vlSelfRef.tbench__DOT__dut__DOT__pc_current)),16);
        bufp->chgSData(oldp+243,((0xffffU & ((IData)(1U) 
                                             + vlSelfRef.tbench__DOT__dut__DOT__pc_current))),16);
        bufp->chgSData(oldp+244,((0xffffU & ((IData)(2U) 
                                             + vlSelfRef.tbench__DOT__dut__DOT__pc_current))),16);
        bufp->chgSData(oldp+245,((0xffffU & ((IData)(3U) 
                                             + vlSelfRef.tbench__DOT__dut__DOT__pc_current))),16);
        bufp->chgBit(oldp+246,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_memory));
        bufp->chgBit(oldp+247,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_ledr));
        bufp->chgBit(oldp+248,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_ledg));
        bufp->chgBit(oldp+249,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_seg30));
        bufp->chgBit(oldp+250,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_seg74));
        bufp->chgBit(oldp+251,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_lcd));
        bufp->chgBit(oldp+252,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_sw));
        bufp->chgBit(oldp+253,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_button));
        bufp->chgIData(oldp+254,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__mem),32);
        bufp->chgIData(oldp+255,(((IData)(1U) + vlSelfRef.tbench__DOT__dut__DOT__alu_data)),32);
        bufp->chgIData(oldp+256,(((IData)(2U) + vlSelfRef.tbench__DOT__dut__DOT__alu_data)),32);
        bufp->chgIData(oldp+257,(((IData)(3U) + vlSelfRef.tbench__DOT__dut__DOT__alu_data)),32);
        bufp->chgCData(oldp+258,((7U & vlSelfRef.tbench__DOT__dut__DOT__alu_data)),3);
        bufp->chgCData(oldp+259,((7U & ((IData)(1U) 
                                        + vlSelfRef.tbench__DOT__dut__DOT__alu_data))),3);
        bufp->chgCData(oldp+260,((7U & ((IData)(2U) 
                                        + vlSelfRef.tbench__DOT__dut__DOT__alu_data))),3);
        bufp->chgCData(oldp+261,((7U & ((IData)(3U) 
                                        + vlSelfRef.tbench__DOT__dut__DOT__alu_data))),3);
        bufp->chgCData(oldp+262,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[0]),8);
        bufp->chgCData(oldp+263,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[1]),8);
        bufp->chgCData(oldp+264,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[2]),8);
        bufp->chgCData(oldp+265,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[3]),8);
        bufp->chgCData(oldp+266,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[4]),8);
        bufp->chgCData(oldp+267,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[5]),8);
        bufp->chgCData(oldp+268,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[6]),8);
        bufp->chgCData(oldp+269,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[7]),8);
        bufp->chgIData(oldp+270,(((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_memory))) 
                                  & (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__mem 
                                     & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0))),32);
        bufp->chgIData(oldp+271,(((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_ledr))) 
                                  & ((((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                        [3U] << 0x18U) 
                                       | (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                          [2U] << 0x10U)) 
                                      | ((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                          [1U] << 8U) 
                                         | vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                         [0U])) & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0))),32);
        bufp->chgIData(oldp+272,((0x12345678U & ((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_sw))) 
                                                 & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0))),32);
        bufp->chgSData(oldp+273,((0xffffU & vlSelfRef.tbench__DOT__dut__DOT__alu_data)),16);
        bufp->chgBit(oldp+274,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____Vcellinp__dataMemoryBlock__i_wren));
        bufp->chgSData(oldp+275,((0xffffU & ((IData)(1U) 
                                             + vlSelfRef.tbench__DOT__dut__DOT__alu_data))),16);
        bufp->chgSData(oldp+276,((0xffffU & ((IData)(2U) 
                                             + vlSelfRef.tbench__DOT__dut__DOT__alu_data))),16);
        bufp->chgSData(oldp+277,((0xffffU & ((IData)(3U) 
                                             + vlSelfRef.tbench__DOT__dut__DOT__alu_data))),16);
        bufp->chgBit(oldp+278,(((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                & (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____Vcellinp__dataMemoryBlock__i_wren))));
        bufp->chgBit(oldp+279,((((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                 >> 1U) & (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____Vcellinp__dataMemoryBlock__i_wren))));
        bufp->chgBit(oldp+280,((((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                 >> 2U) & (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____Vcellinp__dataMemoryBlock__i_wren))));
        bufp->chgBit(oldp+281,((((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                 >> 3U) & (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____Vcellinp__dataMemoryBlock__i_wren))));
        bufp->chgCData(oldp+282,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask),5);
        bufp->chgCData(oldp+283,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__inst_current)),7);
        bufp->chgCData(oldp+284,((7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                        >> 0xcU))),3);
        bufp->chgBit(oldp+285,((1U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                      >> 0x1eU))));
        bufp->chgCData(oldp+286,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode),4);
        bufp->chgBit(oldp+287,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__pcSel_Bformat));
        bufp->chgCData(oldp+288,(((1U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                >> 0xcU)))
                                   ? 1U : ((5U == (7U 
                                                   & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                      >> 0xcU)))
                                            ? 1U : 0U))),3);
        bufp->chgBit(oldp+289,(((6U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                              >> 0xcU))) 
                                || (7U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                 >> 0xcU))))));
        bufp->chgCData(oldp+290,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp_IFormat),4);
        bufp->chgCData(oldp+291,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp_RFormat),4);
        bufp->chgCData(oldp+292,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask_LSformat),5);
        bufp->chgBit(oldp+293,((0U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                             >> 0xcU)))));
        bufp->chgBit(oldp+294,(((1U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                       >> 0xeU)) || 
                                (1U & (~ (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                          >> 0xdU))))));
        bufp->chgBit(oldp+295,(((1U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                              >> 0xcU)))
                                 ? (0U == (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                           >> 0x19U))
                                 : ((5U != (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                  >> 0xcU))) 
                                    || (1U & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0xbe000000U 
                                                          & vlSelfRef.tbench__DOT__dut__DOT__inst_current)))))))));
        bufp->chgBit(oldp+296,((1U & ((0U == (7U & 
                                              (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                               >> 0xcU)))
                                       ? (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0xbe000000U 
                                                      & vlSelfRef.tbench__DOT__dut__DOT__inst_current))))
                                       : ((5U == (7U 
                                                  & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                     >> 0xcU)))
                                           ? (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0xbe000000U 
                                                          & vlSelfRef.tbench__DOT__dut__DOT__inst_current))))
                                           : (0U == 
                                              (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                               >> 0x19U)))))));
        bufp->chgBit(oldp+297,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__lTypeFuncVld));
        bufp->chgBit(oldp+298,(((0U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                              >> 0xcU))) 
                                || ((1U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                  >> 0xcU))) 
                                    || (2U == (7U & 
                                               (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                >> 0xcU)))))));
        bufp->chgCData(oldp+299,((0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+300,((0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+301,((0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                           >> 7U))),5);
        bufp->chgIData(oldp+302,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal),32);
        bufp->chgBit(oldp+303,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 1U))));
        bufp->chgBit(oldp+304,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0xaU))));
        bufp->chgBit(oldp+305,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0xbU))));
        bufp->chgBit(oldp+306,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0xcU))));
        bufp->chgBit(oldp+307,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0xdU))));
        bufp->chgBit(oldp+308,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0xeU))));
        bufp->chgBit(oldp+309,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0xfU))));
        bufp->chgBit(oldp+310,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0x10U))));
        bufp->chgBit(oldp+311,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0x11U))));
        bufp->chgBit(oldp+312,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0x12U))));
        bufp->chgBit(oldp+313,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0x13U))));
        bufp->chgBit(oldp+314,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 2U))));
        bufp->chgBit(oldp+315,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0x14U))));
        bufp->chgBit(oldp+316,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0x15U))));
        bufp->chgBit(oldp+317,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0x16U))));
        bufp->chgBit(oldp+318,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0x17U))));
        bufp->chgBit(oldp+319,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0x18U))));
        bufp->chgBit(oldp+320,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0x19U))));
        bufp->chgBit(oldp+321,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0x1aU))));
        bufp->chgBit(oldp+322,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+323,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0x1cU))));
        bufp->chgBit(oldp+324,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0x1dU))));
        bufp->chgBit(oldp+325,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 3U))));
        bufp->chgBit(oldp+326,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 0x1eU))));
        bufp->chgBit(oldp+327,((vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                >> 0x1fU)));
        bufp->chgBit(oldp+328,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 4U))));
        bufp->chgBit(oldp+329,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 5U))));
        bufp->chgBit(oldp+330,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 6U))));
        bufp->chgBit(oldp+331,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 7U))));
        bufp->chgBit(oldp+332,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 8U))));
        bufp->chgBit(oldp+333,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                      >> 9U))));
    }
    bufp->chgBit(oldp+334,(vlSelfRef.tbench__DOT__i_clk));
    bufp->chgBit(oldp+335,(vlSelfRef.tbench__DOT__i_reset));
    bufp->chgIData(oldp+336,(((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_ledg))) 
                              & ((((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                    [3U] << 0x18U) 
                                   | (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                      [2U] << 0x10U)) 
                                  | ((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                      [1U] << 8U) | 
                                     vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                     [0U])) & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0))),32);
    bufp->chgIData(oldp+337,(((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_seg30))) 
                              & ((((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                                    [3U] << 0x18U) 
                                   | (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                                      [2U] << 0x10U)) 
                                  | ((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                                      [1U] << 8U) | 
                                     vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                                     [0U])) & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0))),32);
    bufp->chgIData(oldp+338,(((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_seg74))) 
                              & ((((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                                    [3U] << 0x18U) 
                                   | (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                                      [2U] << 0x10U)) 
                                  | ((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                                      [1U] << 8U) | 
                                     vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                                     [0U])) & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0))),32);
    bufp->chgIData(oldp+339,(((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_lcd))) 
                              & (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__lcd 
                                 & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0))),32);
    bufp->chgIData(oldp+340,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__dataMemoryBlock__DOT__unnamedblk1__DOT__i),32);
}

void Vtbench___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_cleanup\n"); );
    // Init
    Vtbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbench___024root*>(voidSelf);
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
