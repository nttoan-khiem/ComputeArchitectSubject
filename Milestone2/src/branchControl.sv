module branchControl(
    input logic [31:0] i_rs1Data,
    input logic [31:0] i_rs2Data,
    input logic i_brUnsign,
    output logic o_brLess,
    output logic o_brEqual
);
logic [32:0] rs1, rs2;
assign rs1 = {1'b0, i_rs1Data};
assign rs2 = {1'b0, i_rs2Data};
xorLogic xorLogicBlock(
    .i_rs1(i_rs1),
    .i_rs2(i_rs2),
    .o_brEqual(o_brEqual)
);

endmodule

module xorLogic(
    input logic [31:0] i_rs1;
    input logic [31:0] i_rs2;
    output logic o_brEqual
);
logic [31:0] xorR1R2;
assign xorR1R2 = i_rs1 ^ i_rs2;
assign o_brEqual = |xorR1R2;
endmodule

module branchLessControl(
    input logic [32:0] i_rs1,
    input logic [32:0] i_rs2,
    input logic i_brU,
    output logic o_less
);
logic [32:0] Prebu2Rs2;
assign Prebu2Rs2 = ~i_rs2;
logic [32:0] bu2Rs2;
assign bu2Rs2 = Prebu2Rs2 + 33'd1;
logic [32:0] subR1R2;
assign subR1R2 = i_rs1 + bu2Rs2;
assign o_less = subR1R2[32]&i_brU | subR1R2[31]&(~i_brU);
endmodule