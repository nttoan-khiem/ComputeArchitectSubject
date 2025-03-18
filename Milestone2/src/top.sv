module top(
    input logic i_clk,
    input logic i_reset,
    input logic [9:0] i_ph_sw,
    input logic [3:0] i_ph_button,
    output logic [31:0] o_pcDebug,
    output logic o_insnVld,
    output logic [31:0] o_ph_ledr,
    output logic [31:0] o_ph_ledg,
    output logic [6:0] o_ph_seg0,
    output logic [6:0] o_ph_seg1,
    output logic [6:0] o_ph_seg2,
    output logic [6:0] o_ph_seg3,
    output logic [6:0] o_ph_seg4,
    output logic [6:0] o_ph_seg5,
    output logic [6:0] o_ph_seg6,
    output logic [6:0] o_ph_seg7,
    output logic [31:0] o_ph_lcd
);
//still not complete
//fect state
logic pc_sel_control;
logic [31:0] pc_four;
logic [31:0] pc_next;
logic [31:0] pc_current;
logic [31:0] alu_data;
logic [31:0] inst_current;
mux2to1 muxControlJumpOrNotBlock(
    .i_sel(pc_sel_control),
    .i_dataA(pc_four),
    .i_dataB(alu_data),
    .o_data(pc_next)
);
plus4 plus4Block(
    .i_data(pc_current),
    .o_data(pc_four)
);
pcRegister pcRegisterBlock(
    .i_clk(i_clk),
    .i_reset(i_reset),
    .i_data(pc_next),
    .o_data(pc_current)
);
instMem instMemoryBlock(
    .i_addr(pc_current),
    .o_data(inst_current)
);
//load register
logic [31:0] rs1, rs2, genImmData;
logic [31:0] operandA, operandB;
logic [31:0] writeBackData;
logic [2:0] ImmGen_operation_control;
logic wReg_en_control;
logic brUnsigned_control;
logic brLess_control, brEqual_control;
logic rs1_sel_control, rs2_sel_control;
registerSet registerFileBlock(
    .i_clk(i_clk),
    .i_rst(i_reset),
    .i_rs1_addr(inst_current[19:15]),
    .i_rs2_addr(inst_current[24:20]),
    .o_rs1_data(rs1),
    .o_rs2_data(rs2),
    .i_wr_addr(inst_current[11:7]),
    .i_wr_data(writeBackData),
    .i_wr_wren(wReg_en_control)
);
genImm ImmGenBlock(
    .i_instruction(inst_current),
    .i_operation(ImmGen_operation_control),
    .o_imm(genImmData)
);
branchControl branchControlBlock(
    .i_rs1Data(rs1),
    .i_rs2Data(rs2),
    .i_brUnsign(brUnsigned_control),
    .o_brLess(brLess_control),
    .o_brEqual(brEqual_control)
);
mux2to1 MuxControlOperandABlock(
    .i_sel(rs1_sel_control),
    .i_dataA(rs1),
    .i_dataB(pc_current),
    .o_data(operandA)
);
mux2to1 MuxControlOperandBBlock(
    .i_sel(rs2_sel_control),
    .i_dataA(rs2),
    .i_dataB(genImmData),
    .o_data(operandB)
);
//execute alu
logic [3:0] alu_operation_control;
alu alublock(
    .i_operandA(operandA),
    .i_operandB(operandB),
    .i_aluOp(alu_operation_control),
    .o_aluData(alu_data)
);
//write data
logic wrLsu_en_control;
logic loadUnsign_control;
logic [1:0] wb_sel_control;
logic [3:0] mask_control;
logic [31:0] lsu_data;
logic [31:0] lsu_load_data;
logic [31:0] switch_input, button_input;
assign switch_input = {{22{1'd0}}, i_ph_sw};
assign button_input = {{28{1'd0}}, i_ph_button}
lsu lsuBlock(
    .i_clk(i_clk),
    .i_reset(i_reset),
    .i_stData(rs2),
    .i_wren(wrLsu_en_control),
    .i_addr(alu_data),
    .i_mask(mask_control),
    .i_ph_sw(switch_input),
    .i_ph_button(button_input),
    .o_ldData(lsu_data),
    .o_ph_ledr(o_ph_ledr),
    .o_ph_ledg(o_ph_ledg),
    .o_ph_seg0(o_ph_seg0),
    .o_ph_seg1(o_ph_seg1),
    .o_ph_seg2(o_ph_seg2),
    .o_ph_seg3(o_ph_seg3),
    .o_ph_seg4(o_ph_seg4),
    .o_ph_seg5(o_ph_seg5),
    .o_ph_seg6(o_ph_seg6),
    .o_ph_seg7(o_ph_seg7),
    .o_ph_lcd(o_ph_lcd)
);
controlLd controlLoadLsuBlock(
    .i_data(lsu_data),
    .i_unsign(loadUnsign_control),
    .i_mask(mask_control),
    .o_data(lsu_load_data)
);
mux4to1 controlWriteBackBlock(
    .i_sel(wb_sel_control),
    .i_dataA(alu_data),
    .i_dataB(pc_four),
    .i_dataC(lsu_load_data),
    .i_dataD(32'd0),
    .o_data(writeBackData)
);
//Control block
control masterControlBlock(
    .i_inst(inst_current),
    .i_brlLess(brLess_control),
    .i_brEqual(brEqual_control),
    .o_pcSel(pc_sel_control),
    .o_opImm(ImmGen_operation_control),
    .o_brUnsigned(brUnsigned_control),
    .o_opaSel(rs1_sel_control),
    .o_opbSel(rs2_sel_control),
    .o_aluOp(alu_operation_control),
    .o_memWrEnable(wrLsu_en_control),
    .o_wbSel(wb_sel_control),
    .o_rdWrEnable(wReg_en_control),
    .o_mask({loadUnsign_control,mask_control})
);
//for debug
assign o_pcDebug = pc_current;
//assign o_insnVld = ?;
endmodule