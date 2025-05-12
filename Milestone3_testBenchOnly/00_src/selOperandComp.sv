`timescale 1ns/1ps
module selOperandComp(
    input logic i_sel,
    input logic [33:0] i_a,
    input logic [33:0] i_b,
    output logic [33:0] o_d
);
always @(*) begin
    case (i_sel)
        1'b0: o_d = i_a;
        1'b1: o_d = i_b; 
    endcase
end
endmodule
