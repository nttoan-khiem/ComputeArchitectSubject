`timescale 1ns/1ps
module pcDebugff(
    input logic i_clk,
    input logic i_reset,
    input logic [31:0] i_data,
    output logic [31:0] o_data
);
always @(posedge i_clk or negedge i_reset) begin
    if(!i_reset) begin 
        o_data <= 32'd0;
    end else begin 
        o_data <= i_data;
    end
end
endmodule
