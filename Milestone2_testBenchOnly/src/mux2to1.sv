`timescale 1ns/1ps
module mux2to1(
    input logic i_sel,
    input logic [31:0] i_dataA,
    input logic [31:0] i_dataB,
    output logic [31:0] o_data
);
always @(*) begin
    case (i_sel)
        1'b0: o_data = i_dataA;
        1'b1: o_data = i_dataB; 
    endcase
end
endmodule
