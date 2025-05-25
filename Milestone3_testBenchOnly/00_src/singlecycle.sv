`timescale 1ns/1ps
module singlecycle(
    input logic i_clk,
    input logic i_reset,
    input logic [31:0] i_io_sw,
    //input logic [3:0] i_ph_button,
    output logic [31:0] o_pc_debug,
    //output logic o_insn_vld,
    output logic [31:0] o_io_ledr,
    output logic [31:0] o_io_ledg,
    output logic [6:0] o_io_hex0,
    output logic [6:0] o_io_hex1,
    output logic [6:0] o_io_hex2,
    output logic [6:0] o_io_hex3,
    output logic [6:0] o_io_hex4,
    output logic [6:0] o_io_hex5,
    output logic [6:0] o_io_hex6,
    output logic [6:0] o_io_hex7,
    output logic [31:0] o_io_lcd
    //output logic o_insn_vld
);
//still not complete
//fect state
logic pc_sel_control;
logic pipe_continue;
logic pipe_passS1, pipe_passS2, pipe_passS3, pipe_passS4;
wire pipe_clearStateFet, pipe_clearStateID, pipe_clearStateEX, pipe_clearStateMem;
logic e_wrReg1, e_wrReg2, e_wrReg3;
logic [31:0] pipe_alu;
logic [31:0] pc_four;
logic [31:0] pc_next;
logic [31:0] pc_current;
logic [31:0] alu_data;
logic [31:0] inst_current;
mux2to1 muxControlJumpOrNotBlock(
    .i_sel(pc_sel_control),
    .i_dataA(pc_four),
    .i_dataB(pipe_alu),
    .o_data(pc_next)
);
plus4 plus4Block(
    .i_data(pc_current),
    .o_data(pc_four)
);
pcRegister pcRegisterBlock(
    .i_clk(i_clk),
    .i_reset(i_reset),
    .i_en_wr(pipe_continue),
    .i_data(pc_next),
    .o_data(pc_current)
);
instMem instMemoryBlock(
    .i_addr(pc_current[15:0]),
    .o_data(inst_current)
);
//-------------------------Pipeline Fetch Stage1---------------------------
logic [31:0] pipe_pcCurrentS1;
logic [31:0] pipe_instCurrentS1;
register32bit pipeLineStage1Pc(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateFet),
    .i_wr_enable(pipe_passS1),
    .i_wr_data(pc_current),
    .o_rd_data(pipe_pcCurrentS1)
);
register32bit pipeLineStage1Inst(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateFet),
    .i_wr_enable(pipe_passS1),
    .i_wr_data(inst_current),
    .o_rd_data(pipe_instCurrentS1)
);
//------------------------------------------------------------------------
//load register
logic fw_enWRegState4;
logic [1:0] fw_selWbState4;
logic [31:0] rs1, rs2, genImmData;
logic [31:0] operandATemp, operandBTemp;
logic selFowardOpA, selFowardOpB;
logic [31:0] writeBackData;
logic [2:0] ImmGen_operation_control;
logic wReg_en_control;
logic [1:0] wb_sel_control;
logic brLess_control, brEqual_control;
logic rs1_sel_control, rs2_sel_control;
registerSet registerFileBlock(
    .i_clk(i_clk),
    .i_rst(i_reset),
    .i_rs1_addr(pipe_instCurrentS1[19:15]),
    .i_rs2_addr(pipe_instCurrentS1[24:20]),
    .o_rs1_data(rs1),
    .o_rs2_data(rs2),
    .i_wr_addr(pipe_instCurrentS1[11:7]),
    .i_wr_data(writeBackData),
    .i_wr_wren(wReg_en_control)
);
genImm ImmGenBlock(
    .i_instruction(pipe_instCurrentS1),
    .i_operation(ImmGen_operation_control),
    .o_imm(genImmData)
);
mux2to1 MuxControlOperandABlock(
    .i_sel(rs1_sel_control),
    .i_dataA(rs1),
    .i_dataB(pipe_pcCurrentS1),
    .o_data(operandATemp)
);
mux2to1 MuxControlOperandBBlock(
    .i_sel(rs2_sel_control),
    .i_dataA(rs2),
    .i_dataB(genImmData),
    .o_data(operandBTemp)
);
//Local Control
control masterControlBlockS1(
    .i_inst(pipe_instCurrentS1),
    .i_brlLess(1'd0),
    .i_brEqual(1'd0),
    .o_pcSel(),
    .o_opImm(ImmGen_operation_control),
    .o_brUnsigned(),
    .o_opaSel(rs1_sel_control),
    .o_opbSel(rs2_sel_control),
    .o_aluOp(),
    .o_memWrEnable(),
    .o_wbSel(),
    .o_rdWrEnable(e_wrReg1),
    .o_mask(),
    .o_insn_vld()
);
//----------------------------------------------------
//-------------------------Pipeline ID Stage 2---------------------------
logic [31:0] pipe_operandA;
logic [31:0] pipe_operandB;
logic [31:0] pipe_rs1, pipe_rs2;
logic [31:0] pipe_instCurrentS2;
logic [31:0] pipe_pcCurrentS2;
register32bit pipeLineStage2OperandA(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateID),
    .i_wr_enable(pipe_passS2),
    .i_wr_data(operandATemp),
    .o_rd_data(pipe_operandA)
);
register32bit pipeLineStage2OperandB(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateID),
    .i_wr_enable(pipe_passS2),
    .i_wr_data(operandBTemp),
    .o_rd_data(pipe_operandB)
);
register32bit pipeLineStage2Inst(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateID),
    .i_wr_enable(pipe_passS2),
    .i_wr_data(pipe_instCurrentS1),
    .o_rd_data(pipe_instCurrentS2)
);
register32bit pipeLineStage2pc(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateID),
    .i_wr_enable(pipe_passS2),
    .i_wr_data(pipe_pcCurrentS1),
    .o_rd_data(pipe_pcCurrentS2)
);
register32bit pipeLineStage2rs1(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateID),
    .i_wr_enable(pipe_passS2),
    .i_wr_data(rs1),
    .o_rd_data(pipe_rs1)
);
register32bit pipeLineStage2rs2(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateID),
    .i_wr_enable(pipe_passS2),
    .i_wr_data(rs2),
    .o_rd_data(pipe_rs2)
);
//------------------------------------------------------------------------

//execute alu
logic [31:0] operandAToAlu, operandBToAlu;
logic [31:0] operandAFoward, operandBFoward;
logic [3:0] alu_operation_control;
logic brUnsigned_control;
mux2to1 MuxControlOperandABlockFoward(
    .i_sel(selFowardOpA),
    .i_dataA(pipe_operandA),
    .i_dataB(operandAFoward),
    .o_data(operandAToAlu)
);
mux2to1 MuxControlOperandBBlockFoward(
    .i_sel(selFowardOpB),
    .i_dataA(pipe_operandB),
    .i_dataB(operandBFoward),
    .o_data(operandBToAlu)
);
alu alublock(
    .i_operandA(operandAToAlu),
    .i_operandB(operandBToAlu),
    .i_aluOp(alu_operation_control),
    .o_aluData(alu_data)
);
branchControl branchControlBlock(
    .i_rs1Data(pipe_rs1),
    .i_rs2Data(pipe_rs2),
    .i_brUnsign(brUnsigned_control),
    .o_brLess(brLess_control),
    .o_brEqual(brEqual_control)
);
//local control
control masterControlBlockEXStage(
    .i_inst(pipe_instCurrentS2),
    .i_brlLess(1'd0),
    .i_brEqual(1'd0),
    .o_pcSel(),
    .o_opImm(),
    .o_brUnsigned(brUnsigned_control),
    .o_opaSel(),
    .o_opbSel(),
    .o_aluOp(alu_operation_control),
    .o_memWrEnable(),
    .o_wbSel(),
    .o_rdWrEnable(e_wrReg2),
    .o_mask(),
    .o_insn_vld()
);
//===========================CONTROL FOWARDING HERE=======================


//========================================================================
//-------------------------Pipeline 3 EX Stage---------------------------
logic [31:0] pipe_pcCurrentS3, pipe_instCurrentS3;
logic pipe_brLess, pipe_brEqual;
register32bit pipeLineStage3ALU(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateEX),
    .i_wr_enable(pipe_passS3),
    .i_wr_data(alu_data),
    .o_rd_data(pipe_alu)
);
register32bit pipeLineStage3PC(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateEX),
    .i_wr_enable(pipe_passS3),
    .i_wr_data(pipe_pcCurrentS2),
    .o_rd_data(pipe_pcCurrentS3)
);
register32bit pipeLineStage3inst(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateEX),
    .i_wr_enable(pipe_passS3),
    .i_wr_data(pipe_instCurrentS2),
    .o_rd_data(pipe_instCurrentS3)
);
myDff pipeLineStage3brLess(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateEX),
    .i_wr_enable(pipe_passS3),
    .i_wr_data(brLess_control),
    .o_rd_data(pipe_brLess)
);
myDff pipeLineStage3brEqual(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateEX),
    .i_wr_enable(pipe_passS3),
    .i_wr_data(brEqual_control),
    .o_rd_data(pipe_brEqual)
);
//------------------------------------------------------------------------
//write data and brand
logic wrLsu_en_control;
logic loadUnsign_control;
logic [3:0] mask_control;
logic [31:0] lsu_data;
logic [31:0] lsu_load_data;
logic [31:0] switch_input, button_input;
assign switch_input = i_io_sw;
assign button_input = {{32{1'd0}}};
lsu lsuBlock(
    .i_clk(i_clk),
    .i_reset(i_reset),
    .i_stData(rs2),
    .i_wren(wrLsu_en_control),
    .i_addr(pipe_alu),
    .i_mask(mask_control),
    .i_ph_sw(switch_input),
    .i_ph_button(button_input),
    .o_ldData(lsu_data),
    .o_ph_ledr(o_io_ledr),
    .o_ph_ledg(o_io_ledg),
    .o_ph_seg0(o_io_hex0),
    .o_ph_seg1(o_io_hex1),
    .o_ph_seg2(o_io_hex2),
    .o_ph_seg3(o_io_hex3),
    .o_ph_seg4(o_io_hex4),
    .o_ph_seg5(o_io_hex5),
    .o_ph_seg6(o_io_hex6),
    .o_ph_seg7(o_io_hex7),
    .o_ph_lcd(o_io_lcd)
);
controlLd controlLoadLsuBlock(
    .i_data(lsu_data),
    .i_unsign(loadUnsign_control),
    .i_mask(mask_control),
    .o_data(lsu_load_data)
);
//local control
control masterControlBlock(
    .i_inst(pipe_instCurrentS3),
    .i_brlLess(pipe_brLess),
    .i_brEqual(pipe_brEqual),
    .o_pcSel(pc_sel_control),
    .o_opImm(),
    .o_brUnsigned(),
    .o_opaSel(),
    .o_opbSel(),
    .o_aluOp(),
    .o_memWrEnable(wrLsu_en_control),
    .o_wbSel(fw_selWbState4),
    .o_rdWrEnable(e_wrReg3),
    .o_mask({loadUnsign_control,mask_control}),
    .o_insn_vld()
);
//=====================Hardzard Control Branch===========================
//
//
//
//=======================================================================
//====================Hardzard Control WriteBackControl==================
//
//
//
//=======================================================================
//-------------------Pipe line stage 4 mem-----------
wire [31:0] pipe_aluState4, pipe_lsuDataState4;
wire [31:0] pipe_pcCurrentS4, pipe_instCurrentS4;
register32bit pipeLineStage4AluData(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateMem),
    .i_wr_enable(pipe_passS4),
    .i_wr_data(pipe_alu),
    .o_rd_data(pipe_aluState4)
);
register32bit pipeLineStage4LSU(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateMem),
    .i_wr_enable(pipe_passS4),
    .i_wr_data(lsu_load_data),
    .o_rd_data(pipe_lsuDataState4)
);
register32bit pipeLineState4PC(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateMem),
    .i_wr_enable(pipe_passS4),
    .i_wr_data(pipe_pcCurrentS3),
    .o_rd_data(pipe_pcCurrentS4)
)
register32bit pipeLineState4inst(
    .i_clk(i_clk),
    .i_rst(pipe_clearStateMem),
    .i_wr_enable(pipe_passS4),
    .i_wr_data(pipe_instCurrentS3),
    .o_rd_data(pipe_instCurrentS4)
)
//writeBack
logic [31:0] pcFourpipe;
assign pcFourpipe = pipe_pcCurrentS4 + 32'd4;
mux4to1 controlWriteBackBlock(
    .i_sel(wb_sel_control),
    .i_dataA(pipe_aluState4),
    .i_dataB(pcFourpipe),
    .i_dataC(pipe_lsuDataState4),
    .i_dataD(32'd0),
    .o_data(writeBackData)
);
//Control local
logic validInst;
control masterControlBlock(
    .i_inst(pipe_instCurrentS4),
    .i_brlLess(1'd0),
    .i_brEqual(1'd0),
    .o_pcSel(),
    .o_opImm(),
    .o_brUnsigned(),
    .o_opaSel(),
    .o_opbSel(),
    .o_aluOp(),
    .o_memWrEnable(),
    .o_wbSel(wb_sel_control),
    .o_rdWrEnable(wReg_en_control),
    .o_mask(),
    .o_insn_vld(validInst)
);
//=========================HARDZARD CONTROL WITHOUT FORWARD================
controlHardzard ControlHardZardBlock(
    .inst(inst_current),
    .inst_s1(pipe_instCurrentS1),
    .inst_s2(pipe_instCurrentS2),
    .inst_s3(pipe_instCurrentS3),
    .inst_s4(pipe_instCurrentS4),
    .branch(pc_sel_control),
    .e_wrReg1(e_wrReg1),
    .e_wrReg2(e_wrReg2),
    .e_wrReg3(e_wrReg3),
    .e_wrReg4(wReg_en_control),
    .pipe_continue(pipe_continue),
    .pipe_passS1(pipe_passS1),
    .pipe_passS2(pipe_passS2),
    .pipe_passS3(pipe_passS3),
    .pipe_passS4(pipe_passS4),
    .pipe_clearStateFet(pipe_clearStateFet),
    .pipe_clearStateID(pipe_clearStateID),
    .pipe_clearStateEX(pipe_clearStateEX),
    .pipe_clearStateMem(pipe_clearStateMem)
)
//=========================================================================
//for debug
/*
logic o_insn_vld;
pcDebugff pcDebugBlock(
    .i_clk(i_clk),
    .i_reset(i_reset),
    .i_data(pc_current),
    .o_data(o_pc_debug)
);
validff validffBlock(
    .i_clk(i_clk),
    .i_reset(i_reset),
    .i_data(validInst),
    .o_data(o_insn_vld)
);
//assign o_insn_vld = ?;
*/
assign o_pc_debug = pipe_pcCurrentS4;
endmodule
