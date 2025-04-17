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

