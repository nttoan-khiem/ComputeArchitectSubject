// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtbench__Syms.h"


VL_ATTR_COLD void Vtbench___024root__trace_init_sub__TOP__0(Vtbench___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_init_sub__TOP__0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tbench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"o_pc_debug",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"o_io_ledr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"o_io_ledg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"o_io_hex0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"o_io_hex1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,0,"o_io_hex2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+37,0,"o_io_hex3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+38,0,"o_io_hex4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+39,0,"o_io_hex5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"o_io_hex6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"o_io_hex7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+42,0,"o_io_lcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+342,0,"i_io_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("driver", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+342,0,"i_io_sw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+342,0,"i_io_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"o_pc_debug",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"o_io_ledr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"o_io_ledg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"o_io_hex0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"o_io_hex1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,0,"o_io_hex2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+37,0,"o_io_hex3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+38,0,"o_io_hex4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+39,0,"o_io_hex5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"o_io_hex6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"o_io_hex7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+42,0,"o_io_lcd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"pc_sel_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"pc_four",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"pc_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"pc_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"alu_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+104,0,"inst_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"genImmData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"operandA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"operandB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"writeBackData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"ImmGen_operation_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+112,0,"wReg_en_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"brUnsigned_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"brLess_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"brEqual_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"rs1_sel_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"rs2_sel_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"alu_operation_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+119,0,"wrLsu_en_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"loadUnsign_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"wb_sel_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+122,0,"mask_control",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+123,0,"lsu_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"lsu_load_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+342,0,"switch_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"button_input",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+125,0,"validInst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ImmGenBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+104,0,"i_instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"i_operation",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+107,0,"o_imm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+126,0,"i0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+127,0,"i1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+128,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+129,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+130,0,"jal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"u",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("MuxControlOperandABlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+116,0,"i_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"i_dataA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+98,0,"i_dataB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+108,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("MuxControlOperandBBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"i_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"i_dataA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+107,0,"i_dataB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("alublock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+108,0,"i_operandA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"i_operandB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"i_aluOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+103,0,"o_aluData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+132,0,"extendOpa",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+134,0,"extendOpb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+136,0,"operandBToAdd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+138,0,"adderTemp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+140,0,"bu2_operandB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+142,0,"signalSelSign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"athi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+144,0,"extendOpaCompUnsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+146,0,"extendOpaCompSign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+148,0,"extendOpbCompUnsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+150,0,"extendOpbCompSign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+152,0,"exeOpaComp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+154,0,"exeOpbCompTemp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+156,0,"exeOpbComp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+158,0,"resultComp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declBus(c+160,0,"m_and",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"m_or",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"m_xor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+163,0,"m_add",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"m_slt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"m_sltu",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"m_sll",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"m_srla",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"m_lui",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("SelecConpareOpa", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+142,0,"i_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+144,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+146,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+152,0,"o_d",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->pushPrefix("SelecConpareOpb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+142,0,"i_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+148,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+150,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->declQuad(c+154,0,"o_d",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 33,0);
    tracep->popPrefix();
    tracep->pushPrefix("selBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+142,0,"i_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+134,0,"i_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+140,0,"i_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+136,0,"o_d",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->pushPrefix("selControlBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+118,0,"i_oper",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+142,0,"o_sig",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+143,0,"o_athi",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("selectOutputLogicBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+118,0,"i_oper",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+163,0,"i_addSub",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"i_slt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+164,0,"i_sltu",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+162,0,"i_xor",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+109,0,"i_lui",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+161,0,"i_or",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+160,0,"i_and",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+165,0,"i_sll",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+166,0,"i_srla",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("shiftLeftBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+108,0,"i_agr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"i_shift",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+165,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("internalData", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+168+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("shiftRightBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+108,0,"i_agr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+167,0,"i_shift",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+143,0,"i_logicArith",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+166,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("internalData", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+200+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("branchControlBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+105,0,"i_rs1Data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"i_rs2Data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+113,0,"i_brUnsign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"o_brLess",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"o_brEqual",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+232,0,"rs1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+234,0,"rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->pushPrefix("branchLessBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+232,0,"i_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+234,0,"i_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+113,0,"i_brU",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"o_less",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+236,0,"bu2Rs2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declQuad(c+238,0,"subR1R2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->popPrefix();
    tracep->pushPrefix("xorLogicBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+105,0,"i_rs1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"i_rs2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+115,0,"o_brEqual",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+240,0,"xorR1R2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("controlLoadLsuBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+123,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+120,0,"i_unsign",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+122,0,"i_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"loadByte",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"loadHWord",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("controlWriteBackBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+121,0,"i_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+103,0,"i_dataA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"i_dataB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,0,"i_dataC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"i_dataD",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+110,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("instMemoryBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+243,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+104,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"addr_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+244,0,"addr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+245,0,"addr_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+246,0,"addr_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsuBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+106,0,"i_stData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+119,0,"i_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"i_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+342,0,"i_ph_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"i_ph_button",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,0,"o_ldData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"o_ph_ledr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"o_ph_ledg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"o_ph_seg0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"o_ph_seg1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,0,"o_ph_seg2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+37,0,"o_ph_seg3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+38,0,"o_ph_seg4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+39,0,"o_ph_seg5",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"o_ph_seg6",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"o_ph_seg7",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+42,0,"o_ph_lcd",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+247,0,"en_memory",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+248,0,"en_ledr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+249,0,"en_ledg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+250,0,"en_seg30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+251,0,"en_seg74",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+252,0,"en_lcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+253,0,"en_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+254,0,"en_button",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"addr0Temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"addr1Temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+257,0,"addr2Temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"addr3Temp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"addr0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+260,0,"addr1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+261,0,"addr2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+262,0,"addr3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("ledrReg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+263+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("ledg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+43+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("seg30", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+51+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("seg74", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+59+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+42,0,"lcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"r_mem",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"r_ledr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+337,0,"r_ledg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+338,0,"r_seg30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+339,0,"r_seg74",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+340,0,"r_lcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"r_sw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+343,0,"r_button",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("dataMemoryBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+274,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+106,0,"i_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"i_mask",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+275,0,"i_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"o_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+274,0,"addr_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+276,0,"addr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+277,0,"addr_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+278,0,"addr_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+279,0,"byteWEn0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"byteWEn1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+281,0,"byteWEn2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+282,0,"byteWEn3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+341,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("masterControlBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+104,0,"i_inst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+114,0,"i_brlLess",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"i_brEqual",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"o_pcSel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"o_opImm",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+113,0,"o_brUnsigned",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"o_opaSel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"o_opbSel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"o_aluOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+119,0,"o_memWrEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"o_wbSel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+112,0,"o_rdWrEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"o_mask",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+125,0,"o_insn_vld",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+284,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+285,0,"func3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+286,0,"specialBit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+287,0,"formatCode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+100,0,"pcSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+288,0,"pcSel_Bformat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"opImm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+289,0,"opImm_Iformat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+113,0,"brUnsign",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+290,0,"brUnsign_BFormat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"opASel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"opBSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+118,0,"aluOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+291,0,"aluOp_IFormat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+292,0,"aluOp_RFormat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+119,0,"memWrEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"wbSel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+112,0,"rdWrEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+283,0,"mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+293,0,"mask_LSformat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+294,0,"jalrFunc3Vld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+295,0,"bTypeFuncVld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+296,0,"iTypefuncVld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+297,0,"rTypeFuncVald",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+298,0,"lTypeFuncVld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+299,0,"sTypeFuncVld",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("muxControlJumpOrNotBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+100,0,"i_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"i_dataA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"i_dataB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+102,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("pcRegisterBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+102,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+98,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("plus4Block", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+98,0,"i_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("registerFileBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+300,0,"i_rs1_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+301,0,"i_rs2_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+105,0,"o_rs1_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"o_rs2_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"i_wr_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+112,0,"i_wr_wren",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+303,0,"enableWriteSignal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("rdDataRegister", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("decodeBlock", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+302,0,"i_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+112,0,"i_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+303,0,"o_decodeSignal",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("muxBlock1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+300,0,"i_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+105,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("muxBlock2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("i_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+301,0,"i_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+106,0,"o_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+304,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+305,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+306,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+307,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_13", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+308,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_14", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+309,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_15", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+310,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_16", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+311,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_17", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+312,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_18", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+313,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_19", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+314,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+315,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_20", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+316,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_21", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+317,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_22", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+318,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_23", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+319,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_24", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+320,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_25", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+321,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_26", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_27", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_28", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+324,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_29", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+325,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_30", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_31", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+328,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+329,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+330,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+93,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+331,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+332,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+95,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+333,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("register_x_9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+334,0,"i_wr_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+110,0,"i_wr_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"o_rd_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"register32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("scoreboard", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+98,0,"o_pc_debug",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+99,0,"o_io_ledr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"o_io_ledg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"o_io_hex0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,0,"o_io_hex1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,0,"o_io_hex2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+37,0,"o_io_hex3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+38,0,"o_io_hex4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+39,0,"o_io_hex5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+40,0,"o_io_hex6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+41,0,"o_io_hex7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+42,0,"o_io_lcd",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+342,0,"i_io_sw",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+335,0,"i_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+336,0,"i_reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtbench___024root__trace_init_top(Vtbench___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_init_top\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtbench___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vtbench___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtbench___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtbench___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtbench___024root__trace_register(Vtbench___024root* vlSelf, VerilatedFst* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_register\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtbench___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtbench___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtbench___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtbench___024root__trace_const_0_sub_0(Vtbench___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtbench___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_const_0\n"); );
    // Init
    Vtbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbench___024root*>(voidSelf);
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtbench___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtbench___024root__trace_const_0_sub_0(Vtbench___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_const_0_sub_0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+342,(0x12345678U),32);
    bufp->fullIData(oldp+343,(0U),32);
}

VL_ATTR_COLD void Vtbench___024root__trace_full_0_sub_0(Vtbench___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtbench___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_full_0\n"); );
    // Init
    Vtbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtbench___024root*>(voidSelf);
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtbench___024root__trace_full_0_sub_0(Vtbench___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtbench___024root__trace_full_0_sub_0\n"); );
    Vtbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[0]),32);
    bufp->fullIData(oldp+2,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[1]),32);
    bufp->fullIData(oldp+3,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[2]),32);
    bufp->fullIData(oldp+4,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[3]),32);
    bufp->fullIData(oldp+5,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[4]),32);
    bufp->fullIData(oldp+6,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[5]),32);
    bufp->fullIData(oldp+7,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[6]),32);
    bufp->fullIData(oldp+8,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[7]),32);
    bufp->fullIData(oldp+9,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[8]),32);
    bufp->fullIData(oldp+10,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[9]),32);
    bufp->fullIData(oldp+11,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[10]),32);
    bufp->fullIData(oldp+12,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[11]),32);
    bufp->fullIData(oldp+13,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[12]),32);
    bufp->fullIData(oldp+14,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[13]),32);
    bufp->fullIData(oldp+15,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[14]),32);
    bufp->fullIData(oldp+16,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[15]),32);
    bufp->fullIData(oldp+17,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[16]),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[17]),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[18]),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[19]),32);
    bufp->fullIData(oldp+21,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[20]),32);
    bufp->fullIData(oldp+22,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[21]),32);
    bufp->fullIData(oldp+23,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[22]),32);
    bufp->fullIData(oldp+24,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[23]),32);
    bufp->fullIData(oldp+25,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[24]),32);
    bufp->fullIData(oldp+26,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[25]),32);
    bufp->fullIData(oldp+27,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[26]),32);
    bufp->fullIData(oldp+28,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[27]),32);
    bufp->fullIData(oldp+29,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[28]),32);
    bufp->fullIData(oldp+30,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[29]),32);
    bufp->fullIData(oldp+31,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[30]),32);
    bufp->fullIData(oldp+32,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__rdDataRegister[31]),32);
    bufp->fullIData(oldp+33,((((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                [3U] << 0x18U) | (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                                  [2U] 
                                                  << 0x10U)) 
                              | ((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                  [1U] << 8U) | vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                 [0U]))),32);
    bufp->fullCData(oldp+34,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                              [0U])),7);
    bufp->fullCData(oldp+35,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                              [1U])),7);
    bufp->fullCData(oldp+36,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                              [2U])),7);
    bufp->fullCData(oldp+37,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                              [3U])),7);
    bufp->fullCData(oldp+38,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                              [0U])),7);
    bufp->fullCData(oldp+39,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                              [1U])),7);
    bufp->fullCData(oldp+40,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                              [2U])),7);
    bufp->fullCData(oldp+41,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                              [3U])),7);
    bufp->fullIData(oldp+42,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__lcd),32);
    bufp->fullCData(oldp+43,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[0]),8);
    bufp->fullCData(oldp+44,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[1]),8);
    bufp->fullCData(oldp+45,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[2]),8);
    bufp->fullCData(oldp+46,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[3]),8);
    bufp->fullCData(oldp+47,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[4]),8);
    bufp->fullCData(oldp+48,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[5]),8);
    bufp->fullCData(oldp+49,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[6]),8);
    bufp->fullCData(oldp+50,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg[7]),8);
    bufp->fullCData(oldp+51,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[0]),8);
    bufp->fullCData(oldp+52,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[1]),8);
    bufp->fullCData(oldp+53,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[2]),8);
    bufp->fullCData(oldp+54,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[3]),8);
    bufp->fullCData(oldp+55,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[4]),8);
    bufp->fullCData(oldp+56,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[5]),8);
    bufp->fullCData(oldp+57,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[6]),8);
    bufp->fullCData(oldp+58,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30[7]),8);
    bufp->fullCData(oldp+59,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[0]),8);
    bufp->fullCData(oldp+60,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[1]),8);
    bufp->fullCData(oldp+61,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[2]),8);
    bufp->fullCData(oldp+62,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[3]),8);
    bufp->fullCData(oldp+63,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[4]),8);
    bufp->fullCData(oldp+64,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[5]),8);
    bufp->fullCData(oldp+65,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[6]),8);
    bufp->fullCData(oldp+66,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74[7]),8);
    bufp->fullIData(oldp+67,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_1__DOT__register32),32);
    bufp->fullIData(oldp+68,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_10__DOT__register32),32);
    bufp->fullIData(oldp+69,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_11__DOT__register32),32);
    bufp->fullIData(oldp+70,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_12__DOT__register32),32);
    bufp->fullIData(oldp+71,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_13__DOT__register32),32);
    bufp->fullIData(oldp+72,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_14__DOT__register32),32);
    bufp->fullIData(oldp+73,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_15__DOT__register32),32);
    bufp->fullIData(oldp+74,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_16__DOT__register32),32);
    bufp->fullIData(oldp+75,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_17__DOT__register32),32);
    bufp->fullIData(oldp+76,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_18__DOT__register32),32);
    bufp->fullIData(oldp+77,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_19__DOT__register32),32);
    bufp->fullIData(oldp+78,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_2__DOT__register32),32);
    bufp->fullIData(oldp+79,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_20__DOT__register32),32);
    bufp->fullIData(oldp+80,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_21__DOT__register32),32);
    bufp->fullIData(oldp+81,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_22__DOT__register32),32);
    bufp->fullIData(oldp+82,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_23__DOT__register32),32);
    bufp->fullIData(oldp+83,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_24__DOT__register32),32);
    bufp->fullIData(oldp+84,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_25__DOT__register32),32);
    bufp->fullIData(oldp+85,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_26__DOT__register32),32);
    bufp->fullIData(oldp+86,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_27__DOT__register32),32);
    bufp->fullIData(oldp+87,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_28__DOT__register32),32);
    bufp->fullIData(oldp+88,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_29__DOT__register32),32);
    bufp->fullIData(oldp+89,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_3__DOT__register32),32);
    bufp->fullIData(oldp+90,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_30__DOT__register32),32);
    bufp->fullIData(oldp+91,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_31__DOT__register32),32);
    bufp->fullIData(oldp+92,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_4__DOT__register32),32);
    bufp->fullIData(oldp+93,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_5__DOT__register32),32);
    bufp->fullIData(oldp+94,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_6__DOT__register32),32);
    bufp->fullIData(oldp+95,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_7__DOT__register32),32);
    bufp->fullIData(oldp+96,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_8__DOT__register32),32);
    bufp->fullIData(oldp+97,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__register_x_9__DOT__register32),32);
    bufp->fullIData(oldp+98,(vlSelfRef.tbench__DOT__dut__DOT__pc_current),32);
    bufp->fullIData(oldp+99,((((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                [3U] << 0x18U) | (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                                  [2U] 
                                                  << 0x10U)) 
                              | ((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                  [1U] << 8U) | vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                 [0U]))),32);
    bufp->fullBit(oldp+100,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__pcSel));
    bufp->fullIData(oldp+101,(((IData)(4U) + vlSelfRef.tbench__DOT__dut__DOT__pc_current)),32);
    bufp->fullIData(oldp+102,(vlSelfRef.tbench__DOT__dut__DOT__pc_next),32);
    bufp->fullIData(oldp+103,(vlSelfRef.tbench__DOT__dut__DOT__alu_data),32);
    bufp->fullIData(oldp+104,(vlSelfRef.tbench__DOT__dut__DOT__inst_current),32);
    bufp->fullIData(oldp+105,(vlSelfRef.tbench__DOT__dut__DOT__rs1),32);
    bufp->fullIData(oldp+106,(vlSelfRef.tbench__DOT__dut__DOT__rs2),32);
    bufp->fullIData(oldp+107,(((4U & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm))
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
                                        ? (0x1fU & 
                                           (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                            >> 0x14U))
                                        : vlSelfRef.tbench__DOT__dut__DOT__ImmGenBlock__DOT__i0)))),32);
    bufp->fullIData(oldp+108,(vlSelfRef.tbench__DOT__dut__DOT__operandA),32);
    bufp->fullIData(oldp+109,(vlSelfRef.tbench__DOT__dut__DOT__operandB),32);
    bufp->fullIData(oldp+110,(vlSelfRef.tbench__DOT__dut__DOT__writeBackData),32);
    bufp->fullCData(oldp+111,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opImm),3);
    bufp->fullBit(oldp+112,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__rdWrEnable));
    bufp->fullBit(oldp+113,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__brUnsign));
    bufp->fullBit(oldp+114,((1U & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__brUnsign)
                                    ? (IData)((vlSelfRef.tbench__DOT__dut__DOT__branchControlBlock__DOT__branchLessBlock__DOT__subR1R2 
                                               >> 0x20U))
                                    : (IData)((vlSelfRef.tbench__DOT__dut__DOT__branchControlBlock__DOT__branchLessBlock__DOT__subR1R2 
                                               >> 0x1fU))))));
    bufp->fullBit(oldp+115,((1U & (~ (IData)((0U != 
                                              (vlSelfRef.tbench__DOT__dut__DOT__rs1 
                                               ^ vlSelfRef.tbench__DOT__dut__DOT__rs2)))))));
    bufp->fullBit(oldp+116,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__opASel));
    bufp->fullBit(oldp+117,((1U & (~ ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode) 
                                      >> 3U)))));
    bufp->fullCData(oldp+118,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp),4);
    bufp->fullBit(oldp+119,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__memWrEnable));
    bufp->fullBit(oldp+120,((1U & ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                   >> 4U))));
    bufp->fullCData(oldp+121,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__wbSel),2);
    bufp->fullCData(oldp+122,((0xfU & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask))),4);
    bufp->fullIData(oldp+123,(vlSelfRef.tbench__DOT__dut__DOT__lsu_data),32);
    bufp->fullIData(oldp+124,(((1U == (0xfU & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask)))
                                ? (((- (IData)((1U 
                                                & ((~ 
                                                    ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                                     >> 4U)) 
                                                   & (vlSelfRef.tbench__DOT__dut__DOT__lsu_data 
                                                      >> 7U))))) 
                                    << 8U) | (0xffU 
                                              & vlSelfRef.tbench__DOT__dut__DOT__lsu_data))
                                : ((3U == (0xfU & (IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask)))
                                    ? (((- (IData)(
                                                   (1U 
                                                    & ((~ 
                                                        ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                                         >> 4U)) 
                                                       & (vlSelfRef.tbench__DOT__dut__DOT__lsu_data 
                                                          >> 0xfU))))) 
                                        << 0x10U) | 
                                       (0xffffU & vlSelfRef.tbench__DOT__dut__DOT__lsu_data))
                                    : vlSelfRef.tbench__DOT__dut__DOT__lsu_data))),32);
    bufp->fullBit(oldp+125,(vlSelfRef.tbench__DOT__dut__DOT__validInst));
    bufp->fullIData(oldp+126,(vlSelfRef.tbench__DOT__dut__DOT__ImmGenBlock__DOT__i0),32);
    bufp->fullIData(oldp+127,((0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                        >> 0x14U))),32);
    bufp->fullIData(oldp+128,((((- (IData)((vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                  >> 7U))))),32);
    bufp->fullIData(oldp+129,((((- (IData)((vlSelfRef.tbench__DOT__dut__DOT__inst_current 
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
    bufp->fullIData(oldp+130,((((- (IData)((vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                            >> 0x1fU))) 
                                << 0x14U) | (((0xff000U 
                                               & vlSelfRef.tbench__DOT__dut__DOT__inst_current) 
                                              | (0x800U 
                                                 & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                    >> 9U))) 
                                             | (0x7feU 
                                                & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                   >> 0x14U))))),32);
    bufp->fullIData(oldp+131,((0xfffff000U & vlSelfRef.tbench__DOT__dut__DOT__inst_current)),32);
    bufp->fullQData(oldp+132,((QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandA))),33);
    bufp->fullQData(oldp+134,((QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandB))),33);
    bufp->fullQData(oldp+136,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__operandBToAdd),33);
    bufp->fullQData(oldp+138,((0x1ffffffffULL & ((QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandA)) 
                                                 + vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__operandBToAdd))),33);
    bufp->fullQData(oldp+140,((0x1ffffffffULL & (1ULL 
                                                 + 
                                                 (~ (QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandB)))))),33);
    bufp->fullBit(oldp+142,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__signalSelSign));
    bufp->fullBit(oldp+143,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__athi));
    bufp->fullQData(oldp+144,((QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandA))),34);
    bufp->fullQData(oldp+146,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (vlSelfRef.tbench__DOT__dut__DOT__operandA 
                                                               >> 0x1fU)))))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandA)))),34);
    bufp->fullQData(oldp+148,((QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandB))),34);
    bufp->fullQData(oldp+150,((((QData)((IData)((3U 
                                                 & (- (IData)(
                                                              (vlSelfRef.tbench__DOT__dut__DOT__operandB 
                                                               >> 0x1fU)))))) 
                                << 0x20U) | (QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__operandB)))),34);
    bufp->fullQData(oldp+152,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__exeOpaComp),34);
    bufp->fullQData(oldp+154,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__exeOpbCompTemp),34);
    bufp->fullQData(oldp+156,((0x3ffffffffULL & (1ULL 
                                                 + 
                                                 (~ vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__exeOpbCompTemp)))),34);
    bufp->fullQData(oldp+158,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__resultComp),34);
    bufp->fullIData(oldp+160,((vlSelfRef.tbench__DOT__dut__DOT__operandA 
                               & vlSelfRef.tbench__DOT__dut__DOT__operandB)),32);
    bufp->fullIData(oldp+161,((vlSelfRef.tbench__DOT__dut__DOT__operandA 
                               | vlSelfRef.tbench__DOT__dut__DOT__operandB)),32);
    bufp->fullIData(oldp+162,((vlSelfRef.tbench__DOT__dut__DOT__operandA 
                               ^ vlSelfRef.tbench__DOT__dut__DOT__operandB)),32);
    bufp->fullIData(oldp+163,((vlSelfRef.tbench__DOT__dut__DOT__operandA 
                               + (IData)(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__operandBToAdd))),32);
    bufp->fullIData(oldp+164,((1U & (IData)((vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__resultComp 
                                             >> 0x20U)))),32);
    bufp->fullIData(oldp+165,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData
                              [(0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operandB)]),32);
    bufp->fullIData(oldp+166,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData
                              [(0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operandB)]),32);
    bufp->fullCData(oldp+167,((0x1fU & vlSelfRef.tbench__DOT__dut__DOT__operandB)),5);
    bufp->fullIData(oldp+168,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[0]),32);
    bufp->fullIData(oldp+169,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[1]),32);
    bufp->fullIData(oldp+170,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[2]),32);
    bufp->fullIData(oldp+171,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[3]),32);
    bufp->fullIData(oldp+172,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[4]),32);
    bufp->fullIData(oldp+173,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[5]),32);
    bufp->fullIData(oldp+174,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[6]),32);
    bufp->fullIData(oldp+175,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[7]),32);
    bufp->fullIData(oldp+176,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[8]),32);
    bufp->fullIData(oldp+177,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[9]),32);
    bufp->fullIData(oldp+178,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[10]),32);
    bufp->fullIData(oldp+179,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[11]),32);
    bufp->fullIData(oldp+180,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[12]),32);
    bufp->fullIData(oldp+181,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[13]),32);
    bufp->fullIData(oldp+182,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[14]),32);
    bufp->fullIData(oldp+183,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[15]),32);
    bufp->fullIData(oldp+184,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[16]),32);
    bufp->fullIData(oldp+185,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[17]),32);
    bufp->fullIData(oldp+186,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[18]),32);
    bufp->fullIData(oldp+187,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[19]),32);
    bufp->fullIData(oldp+188,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[20]),32);
    bufp->fullIData(oldp+189,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[21]),32);
    bufp->fullIData(oldp+190,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[22]),32);
    bufp->fullIData(oldp+191,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[23]),32);
    bufp->fullIData(oldp+192,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[24]),32);
    bufp->fullIData(oldp+193,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[25]),32);
    bufp->fullIData(oldp+194,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[26]),32);
    bufp->fullIData(oldp+195,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[27]),32);
    bufp->fullIData(oldp+196,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[28]),32);
    bufp->fullIData(oldp+197,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[29]),32);
    bufp->fullIData(oldp+198,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[30]),32);
    bufp->fullIData(oldp+199,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftLeftBlock__DOT__internalData[31]),32);
    bufp->fullIData(oldp+200,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[0]),32);
    bufp->fullIData(oldp+201,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[1]),32);
    bufp->fullIData(oldp+202,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[2]),32);
    bufp->fullIData(oldp+203,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[3]),32);
    bufp->fullIData(oldp+204,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[4]),32);
    bufp->fullIData(oldp+205,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[5]),32);
    bufp->fullIData(oldp+206,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[6]),32);
    bufp->fullIData(oldp+207,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[7]),32);
    bufp->fullIData(oldp+208,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[8]),32);
    bufp->fullIData(oldp+209,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[9]),32);
    bufp->fullIData(oldp+210,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[10]),32);
    bufp->fullIData(oldp+211,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[11]),32);
    bufp->fullIData(oldp+212,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[12]),32);
    bufp->fullIData(oldp+213,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[13]),32);
    bufp->fullIData(oldp+214,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[14]),32);
    bufp->fullIData(oldp+215,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[15]),32);
    bufp->fullIData(oldp+216,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[16]),32);
    bufp->fullIData(oldp+217,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[17]),32);
    bufp->fullIData(oldp+218,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[18]),32);
    bufp->fullIData(oldp+219,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[19]),32);
    bufp->fullIData(oldp+220,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[20]),32);
    bufp->fullIData(oldp+221,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[21]),32);
    bufp->fullIData(oldp+222,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[22]),32);
    bufp->fullIData(oldp+223,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[23]),32);
    bufp->fullIData(oldp+224,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[24]),32);
    bufp->fullIData(oldp+225,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[25]),32);
    bufp->fullIData(oldp+226,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[26]),32);
    bufp->fullIData(oldp+227,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[27]),32);
    bufp->fullIData(oldp+228,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[28]),32);
    bufp->fullIData(oldp+229,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[29]),32);
    bufp->fullIData(oldp+230,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[30]),32);
    bufp->fullIData(oldp+231,(vlSelfRef.tbench__DOT__dut__DOT__alublock__DOT__shiftRightBlock__DOT__internalData[31]),32);
    bufp->fullQData(oldp+232,((QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__rs1))),33);
    bufp->fullQData(oldp+234,((QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__rs2))),33);
    bufp->fullQData(oldp+236,((0x1ffffffffULL & (1ULL 
                                                 + 
                                                 (~ (QData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__rs2)))))),33);
    bufp->fullQData(oldp+238,(vlSelfRef.tbench__DOT__dut__DOT__branchControlBlock__DOT__branchLessBlock__DOT__subR1R2),33);
    bufp->fullIData(oldp+240,((vlSelfRef.tbench__DOT__dut__DOT__rs1 
                               ^ vlSelfRef.tbench__DOT__dut__DOT__rs2)),32);
    bufp->fullIData(oldp+241,((((- (IData)((1U & ((~ 
                                                   ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                                    >> 4U)) 
                                                  & (vlSelfRef.tbench__DOT__dut__DOT__lsu_data 
                                                     >> 7U))))) 
                                << 8U) | (0xffU & vlSelfRef.tbench__DOT__dut__DOT__lsu_data))),32);
    bufp->fullIData(oldp+242,((((- (IData)((1U & ((~ 
                                                   ((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                                                    >> 4U)) 
                                                  & (vlSelfRef.tbench__DOT__dut__DOT__lsu_data 
                                                     >> 0xfU))))) 
                                << 0x10U) | (0xffffU 
                                             & vlSelfRef.tbench__DOT__dut__DOT__lsu_data))),32);
    bufp->fullSData(oldp+243,((0xffffU & vlSelfRef.tbench__DOT__dut__DOT__pc_current)),16);
    bufp->fullSData(oldp+244,((0xffffU & ((IData)(1U) 
                                          + vlSelfRef.tbench__DOT__dut__DOT__pc_current))),16);
    bufp->fullSData(oldp+245,((0xffffU & ((IData)(2U) 
                                          + vlSelfRef.tbench__DOT__dut__DOT__pc_current))),16);
    bufp->fullSData(oldp+246,((0xffffU & ((IData)(3U) 
                                          + vlSelfRef.tbench__DOT__dut__DOT__pc_current))),16);
    bufp->fullBit(oldp+247,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_memory));
    bufp->fullBit(oldp+248,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_ledr));
    bufp->fullBit(oldp+249,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_ledg));
    bufp->fullBit(oldp+250,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_seg30));
    bufp->fullBit(oldp+251,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_seg74));
    bufp->fullBit(oldp+252,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_lcd));
    bufp->fullBit(oldp+253,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_sw));
    bufp->fullBit(oldp+254,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_button));
    bufp->fullIData(oldp+255,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__mem),32);
    bufp->fullIData(oldp+256,(((IData)(1U) + vlSelfRef.tbench__DOT__dut__DOT__alu_data)),32);
    bufp->fullIData(oldp+257,(((IData)(2U) + vlSelfRef.tbench__DOT__dut__DOT__alu_data)),32);
    bufp->fullIData(oldp+258,(((IData)(3U) + vlSelfRef.tbench__DOT__dut__DOT__alu_data)),32);
    bufp->fullCData(oldp+259,((7U & vlSelfRef.tbench__DOT__dut__DOT__alu_data)),3);
    bufp->fullCData(oldp+260,((7U & ((IData)(1U) + vlSelfRef.tbench__DOT__dut__DOT__alu_data))),3);
    bufp->fullCData(oldp+261,((7U & ((IData)(2U) + vlSelfRef.tbench__DOT__dut__DOT__alu_data))),3);
    bufp->fullCData(oldp+262,((7U & ((IData)(3U) + vlSelfRef.tbench__DOT__dut__DOT__alu_data))),3);
    bufp->fullCData(oldp+263,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[0]),8);
    bufp->fullCData(oldp+264,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[1]),8);
    bufp->fullCData(oldp+265,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[2]),8);
    bufp->fullCData(oldp+266,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[3]),8);
    bufp->fullCData(oldp+267,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[4]),8);
    bufp->fullCData(oldp+268,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[5]),8);
    bufp->fullCData(oldp+269,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[6]),8);
    bufp->fullCData(oldp+270,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg[7]),8);
    bufp->fullIData(oldp+271,(((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_memory))) 
                               & (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__mem 
                                  & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0))),32);
    bufp->fullIData(oldp+272,(((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_ledr))) 
                               & ((((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                     [3U] << 0x18U) 
                                    | (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                       [2U] << 0x10U)) 
                                   | ((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                       [1U] << 8U) 
                                      | vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledrReg
                                      [0U])) & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0))),32);
    bufp->fullIData(oldp+273,((0x12345678U & ((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_sw))) 
                                              & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0))),32);
    bufp->fullSData(oldp+274,((0xffffU & vlSelfRef.tbench__DOT__dut__DOT__alu_data)),16);
    bufp->fullBit(oldp+275,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____Vcellinp__dataMemoryBlock__i_wren));
    bufp->fullSData(oldp+276,((0xffffU & ((IData)(1U) 
                                          + vlSelfRef.tbench__DOT__dut__DOT__alu_data))),16);
    bufp->fullSData(oldp+277,((0xffffU & ((IData)(2U) 
                                          + vlSelfRef.tbench__DOT__dut__DOT__alu_data))),16);
    bufp->fullSData(oldp+278,((0xffffU & ((IData)(3U) 
                                          + vlSelfRef.tbench__DOT__dut__DOT__alu_data))),16);
    bufp->fullBit(oldp+279,(((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                             & (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____Vcellinp__dataMemoryBlock__i_wren))));
    bufp->fullBit(oldp+280,((((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                              >> 1U) & (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____Vcellinp__dataMemoryBlock__i_wren))));
    bufp->fullBit(oldp+281,((((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                              >> 2U) & (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____Vcellinp__dataMemoryBlock__i_wren))));
    bufp->fullBit(oldp+282,((((IData)(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask) 
                              >> 3U) & (IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____Vcellinp__dataMemoryBlock__i_wren))));
    bufp->fullCData(oldp+283,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask),5);
    bufp->fullCData(oldp+284,((0x7fU & vlSelfRef.tbench__DOT__dut__DOT__inst_current)),7);
    bufp->fullCData(oldp+285,((7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                     >> 0xcU))),3);
    bufp->fullBit(oldp+286,((1U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                   >> 0x1eU))));
    bufp->fullCData(oldp+287,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__formatCode),4);
    bufp->fullBit(oldp+288,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__pcSel_Bformat));
    bufp->fullCData(oldp+289,(((1U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                             >> 0xcU)))
                                ? 1U : ((5U == (7U 
                                                & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                   >> 0xcU)))
                                         ? 1U : 0U))),3);
    bufp->fullBit(oldp+290,(((6U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                           >> 0xcU))) 
                             || (7U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                              >> 0xcU))))));
    bufp->fullCData(oldp+291,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp_IFormat),4);
    bufp->fullCData(oldp+292,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__aluOp_RFormat),4);
    bufp->fullCData(oldp+293,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__mask_LSformat),5);
    bufp->fullBit(oldp+294,((0U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                          >> 0xcU)))));
    bufp->fullBit(oldp+295,(((1U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                    >> 0xeU)) || (1U 
                                                  & (~ 
                                                     (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                      >> 0xdU))))));
    bufp->fullBit(oldp+296,(((1U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                           >> 0xcU)))
                              ? (0U == (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                        >> 0x19U)) : 
                             ((5U != (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                            >> 0xcU))) 
                              || (1U & (~ (IData)((0U 
                                                   != 
                                                   (0xbe000000U 
                                                    & vlSelfRef.tbench__DOT__dut__DOT__inst_current)))))))));
    bufp->fullBit(oldp+297,((1U & ((0U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
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
                                                  >> 0x19U)))))));
    bufp->fullBit(oldp+298,(vlSelfRef.tbench__DOT__dut__DOT__masterControlBlock__DOT__lTypeFuncVld));
    bufp->fullBit(oldp+299,(((0U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                           >> 0xcU))) 
                             || ((1U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                               >> 0xcU))) 
                                 || (2U == (7U & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                                  >> 0xcU)))))));
    bufp->fullCData(oldp+300,((0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+301,((0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+302,((0x1fU & (vlSelfRef.tbench__DOT__dut__DOT__inst_current 
                                        >> 7U))),5);
    bufp->fullIData(oldp+303,(vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal),32);
    bufp->fullBit(oldp+304,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 1U))));
    bufp->fullBit(oldp+305,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0xaU))));
    bufp->fullBit(oldp+306,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0xbU))));
    bufp->fullBit(oldp+307,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0xcU))));
    bufp->fullBit(oldp+308,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0xdU))));
    bufp->fullBit(oldp+309,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0xeU))));
    bufp->fullBit(oldp+310,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0xfU))));
    bufp->fullBit(oldp+311,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0x10U))));
    bufp->fullBit(oldp+312,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0x11U))));
    bufp->fullBit(oldp+313,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0x12U))));
    bufp->fullBit(oldp+314,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0x13U))));
    bufp->fullBit(oldp+315,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 2U))));
    bufp->fullBit(oldp+316,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0x14U))));
    bufp->fullBit(oldp+317,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0x15U))));
    bufp->fullBit(oldp+318,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0x16U))));
    bufp->fullBit(oldp+319,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0x17U))));
    bufp->fullBit(oldp+320,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0x18U))));
    bufp->fullBit(oldp+321,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0x19U))));
    bufp->fullBit(oldp+322,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+323,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+324,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+325,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+326,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 3U))));
    bufp->fullBit(oldp+327,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+328,((vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                             >> 0x1fU)));
    bufp->fullBit(oldp+329,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 4U))));
    bufp->fullBit(oldp+330,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 5U))));
    bufp->fullBit(oldp+331,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 6U))));
    bufp->fullBit(oldp+332,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 7U))));
    bufp->fullBit(oldp+333,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 8U))));
    bufp->fullBit(oldp+334,((1U & (vlSelfRef.tbench__DOT__dut__DOT__registerFileBlock__DOT__enableWriteSignal 
                                   >> 9U))));
    bufp->fullBit(oldp+335,(vlSelfRef.tbench__DOT__i_clk));
    bufp->fullBit(oldp+336,(vlSelfRef.tbench__DOT__i_reset));
    bufp->fullIData(oldp+337,(((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_ledg))) 
                               & ((((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                     [3U] << 0x18U) 
                                    | (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                       [2U] << 0x10U)) 
                                   | ((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                       [1U] << 8U) 
                                      | vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__ledg
                                      [0U])) & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0))),32);
    bufp->fullIData(oldp+338,(((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_seg30))) 
                               & ((((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                                     [3U] << 0x18U) 
                                    | (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                                       [2U] << 0x10U)) 
                                   | ((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                                       [1U] << 8U) 
                                      | vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg30
                                      [0U])) & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0))),32);
    bufp->fullIData(oldp+339,(((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_seg74))) 
                               & ((((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                                     [3U] << 0x18U) 
                                    | (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                                       [2U] << 0x10U)) 
                                   | ((vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                                       [1U] << 8U) 
                                      | vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__seg74
                                      [0U])) & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0))),32);
    bufp->fullIData(oldp+340,(((- (IData)((IData)(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__en_lcd))) 
                               & (vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__lcd 
                                  & vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT____VdfgRegularize_hc2d89e63_0_0))),32);
    bufp->fullIData(oldp+341,(vlSelfRef.tbench__DOT__dut__DOT__lsuBlock__DOT__dataMemoryBlock__DOT__unnamedblk1__DOT__i),32);
}
