`timescale 1ps/1ps
module xorLogic (
    input  [31:0] i_rs1,
    input  [31:0] i_rs2,
    output        o_brEqual
);
    wire [31:0] xorR1R2;

    assign xorR1R2  = i_rs1 ^ i_rs2; 
    assign o_brEqual = ~(|xorR1R2); 

endmodule
