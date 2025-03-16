module top(
    input logic i_clk,
    input logic i_reset,
    input logic [9:0] i_sw,
    input logic [3:0] i_button,
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
mux2to1 muxControlJumpOrNotBlock(
    .i_sel(),
    .i_dataA(),
    .i_dataB(),
    .o_data()
);
pcRegister pcRegisterBlock(
    .i_clk(i_clk),
    .i_reset(i_reset),
    .i_data(),
    .o_data()
);
instMem instMemoryBlock(
    .i_addr(),
    .o_data()
);
//load register
registerSet registerFileBlock(
    .i_clk(i_clk),
    .i_rst(i_reset),
    .i_rs1_addr(),
    .i_rs2_addr(),
    .o_rs1_data(),
    .o_rs2_data(),
    .i_wr_addr(),
    .i_wr_data(),
    .i_wr_wren()
);
genImm ImmGenBlock(
    .i_instruction(),
    .i_operation(),
    .o_imm()
);
branchControl branchControlBlock(
    .i_rs1Data(),
    .i_rs2Data(),
    .i_brUnsign(),
    .o_brLess(),
    .o_brEqual()
);
mux2to1 MuxControlOperandABlock(
    .i_sel(),
    .i_dataA(),
    .i_dataB(),
    .o_data()
);
mux2to1 MuxControlOperandBBlock(
    .i_sel(),
    .i_dataA(),
    .i_dataB(),
    .o_data()
);
//execute alu
alu alublock(
    .i_operandA(),
    .i_operandB(),
    .i_aluOp(),
    .o_aluData()
);
//write data
lsu lsuBlock(
    .i_clk(i_clk),
    .i_reset(i_reset),
    .i_stData(),
    .i_wren(),
    .i_addr(),
    .i_mask(),
    .i_ph_sw(),
    .i_ph_button(),
    .o_ldData(),
    .o_ph_ledr(),
    .o_ph_ledg(),
    .o_ph_seg0(),
    .o_ph_seg1(),
    .o_ph_seg2(),
    .o_ph_seg3(),
    .o_ph_seg4(),
    .o_ph_seg5(),
    .o_ph_seg6(),
    .o_ph_seg7(),
    .o_ph_lcd()
);
controlLd controlLoadLsuBlock(
    .i_data(),
    .i_unsign(),
    .i_mask(),
    .o_data()
);
mux4to1 controlWriteBackBlock(
    .i_sel(),
    .i_dataA(),
    .i_dataB(),
    .i_dataC(),
    .i_dataD(),
    .o_data()
);
//Control block
control masterControlBlock(
    .i_inst(),
    .i_brlLess(),
    .i_brEqual(),
    .o_pcSel(),
    .o_opImm(),
    .o_brUnsigned(),
    .o_opaSel(),
    .o_opbSel(),
    .o_aluOp(),
    .o_memWrEnable(),
    .o_wbSel(),
    .o_rdWrEnable(),
    .o_mask()
);
endmodule