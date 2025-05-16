`timescale 1ns/1ps
module pcRegister(
    input logic [31:0] i_data,
    input logic i_clk,
    input logic i_en_wr,
    input logic i_reset,
    output logic [31:0] o_data
);
always @(posedge i_clk or posedge i_reset) begin
    if(i_reset) begin 
        o_data <= 32'd0;
    end else begin 
        if(i_en_wr) begin
            o_data <= i_data;
        end
    end
end
endmodule
