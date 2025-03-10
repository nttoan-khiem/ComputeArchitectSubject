`timescale 1ps/1ps

module branchControl (
    input  [31:0] i_rs1Data,
    input  [31:0] i_rs2Data,
    input         i_brUnsign,
    output        o_brLess,
    output        o_brEqual
);

    wire [32:0] rs1, rs2;

    assign rs1 = {1'b0, i_rs1Data}; // extern zero to become 33 bit number 
    assign rs2 = {1'b0, i_rs2Data};

    xorLogic xorLogicBlock (   //check equal block
        .i_rs1(i_rs1Data),
        .i_rs2(i_rs2Data),
        .o_brEqual(o_brEqual)
    );

    branchLessControl branchLessBlock ( //check less than block
        .i_rs1(rs1),
        .i_rs2(rs2),
        .i_brU(i_brUnsign),
        .o_less(o_brLess)
    );

endmodule

module xorLogic (
    input  [31:0] i_rs1,
    input  [31:0] i_rs2,
    output        o_brEqual
);
    wire [31:0] xorR1R2;

    assign xorR1R2  = i_rs1 ^ i_rs2; 
    assign o_brEqual = ~(|xorR1R2); 

endmodule

module branchLessControl (
    input  [32:0] i_rs1,
    input  [32:0] i_rs2,
    input         i_brU,
    output        o_less
);
    wire [32:0] bu2Rs2, subR1R2;

    assign bu2Rs2  = ~i_rs2 + 1'b1; 
    assign subR1R2 = i_rs1 + bu2Rs2;

    assign o_less = (i_brU) ? subR1R2[32] : subR1R2[31];

endmodule