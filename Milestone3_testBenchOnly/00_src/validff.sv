`timescale 1ns/1ps
module validff(
    input logic i_clk,
    input logic i_reset,
    input logic i_data,
    output logic o_data
);
always @(posedge i_clk or negedge i_reset) begin
    if(i_reset) begin 
        o_data <= 1'b0;
    end else begin 
        o_data <= i_data;
    end
end
endmodule
