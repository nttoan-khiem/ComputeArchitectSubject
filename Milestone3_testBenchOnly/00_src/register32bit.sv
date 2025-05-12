`timescale 1ns/1ps
module register32bit(
    input logic i_clk,
    input logic i_rst,
    input logic i_wr_enable,
    input logic [31:0] i_wr_data,
    output logic [31:0] o_rd_data
);
//internal dff
logic [31:0] register32;
always @(posedge i_clk or negedge i_rst) begin
    if(i_rst) begin 
        register32 <= 32'd0;
    end else begin 
        if(i_wr_enable) begin 
            register32 <= i_wr_data;
        end else begin 
            register32 <= register32;
        end
    end
end
assign o_rd_data = register32;
endmodule
