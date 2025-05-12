`timescale 1ps/1ps

module alu(
    input logic [31:0] i_operandA,
    input logic [31:0] i_operandB,
    input logic [3:0] i_aluOp,
    output logic [31:0] o_aluData
);
logic [32:0] extendOpa, extendOpb, operandBToAdd;
logic [32:0] adderTemp; 
logic [32:0] bu2_operandB;
logic signalSelSign;
logic athi;
assign extendOpa = {1'b0, i_operandA};
assign extendOpb = {1'b0, i_operandB};
assign bu2_operandB = (~extendOpb) + 33'd1;
controlSel selControlBlock(
    .i_oper(i_aluOp),
    .o_sig(signalSelSign),
    .o_athi(athi)
);
selOperand selBlock(
    .i_sel(signalSelSign),
    .i_a(extendOpb),
    .i_b(bu2_operandB),
    .o_d(operandBToAdd)
);
logic [33:0] extendOpaCompUnsign;
assign extendOpaCompUnsign = {{2{1'd0}}, i_operandA};
logic [33:0] extendOpaCompSign;
assign extendOpaCompSign = {{2{i_operandA[31]}}, i_operandA};
logic [33:0] extendOpbCompUnsign;
assign extendOpbCompUnsign = {{2{1'd0}}, i_operandB};
logic [33:0] extendOpbCompSign;
assign extendOpbCompSign = {{2{i_operandB[31]}}, i_operandB};
logic [33:0] exeOpaComp, exeOpbCompTemp;
selOperandComp SelecConpareOpa(
    .i_sel(signalSelSign),
    .i_a(extendOpaCompUnsign),
    .i_b(extendOpaCompSign),
    .o_d(exeOpaComp)
);
selOperandComp SelecConpareOpb(
    .i_sel(signalSelSign),
    .i_a(extendOpbCompUnsign),
    .i_b(extendOpbCompSign),
    .o_d(exeOpbCompTemp)
);
logic [33:0] exeOpbComp;
assign exeOpbComp = ~exeOpbCompTemp + 34'd1;
logic [33:0] resultComp;
assign resultComp = exeOpaComp + exeOpbComp;
logic [31:0] m_and;
logic [31:0] m_or;
logic [31:0] m_xor;
logic [31:0] m_add;
logic [31:0] m_slt, m_sltu;
logic [31:0] m_sll, m_srla;
logic [31:0] m_lui;
assign m_and = i_operandA & i_operandB;
assign m_or = i_operandA | i_operandB;
assign m_xor = i_operandA ^ i_operandB;
assign adderTemp = extendOpa + operandBToAdd;
assign m_slt = {{31{1'd0}}, resultComp[32]};
assign m_sltu = {{31{1'd0}}, resultComp[32]};
assign m_add = adderTemp[31:0];
assign m_lui = i_operandB;
shiftLeft shiftLeftBlock (
    .i_agr(i_operandA),
    .i_shift(i_operandB[4:0]),
    .o_data(m_sll)
);

shiftRight shiftRightBlock (
    .i_agr(i_operandA),
    .i_shift(i_operandB[4:0]),
    .i_logicArith(athi),
    .o_data(m_srla)
);

selOutputAlu selectOutputLogicBlock(
    .i_oper(i_aluOp),
    .i_addSub(m_add),
    .i_lui(m_lui),
    .i_slt(m_slt),
    .i_sltu(m_sltu),
    .i_xor(m_xor),
    .i_or(m_or),
    .i_and(m_and),
    .i_sll(m_sll),
    .i_srla(m_srla),
    .o_data(o_aluData)
);
endmodule

