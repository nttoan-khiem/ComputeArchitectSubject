`timescale 1ns/1ps
module selOutputAlu(
    input logic [3:0] i_oper,
    input logic [31:0] i_addSub,
    input logic [31:0] i_slt,
    input logic [31:0] i_sltu,
    input logic [31:0] i_xor,
    input logic [31:0] i_lui,
    input logic [31:0] i_or,
    input logic [31:0] i_and,
    input logic [31:0] i_sll,
    input logic [31:0] i_srla,
    output logic [31:0] o_data
);
always @(*) begin
    case (i_oper)
        4'b0000: o_data = i_addSub; 
        4'b0001: o_data = i_addSub;
        4'b0010: o_data = i_slt;  
        4'b0011: o_data = i_sltu;
        4'b0100: o_data = i_xor;
        4'b0101: o_data = i_or;
        4'b0110: o_data = i_and;
        4'b0111: o_data = i_sll;
        4'b1000: o_data = i_srla;
        4'b1001: o_data = i_srla;
        4'b1010: o_data = i_lui;
        default: o_data = 32'd0;
    endcase
end
endmodule
