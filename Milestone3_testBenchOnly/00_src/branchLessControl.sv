`timescale 1ps/1ps
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
