`timescale 1ns/1ps
module registerSet(
    input logic i_clk,
    input logic i_rst,
    input logic [4:0] i_rs1_addr,
    input logic [4:0] i_rs2_addr,
    output logic [31:0] o_rs1_data,
    output logic [31:0] o_rs2_data,
    input logic [4:0] i_wr_addr,
    input logic [31:0] i_wr_data,
    input logic i_wr_wren
);
//internal wire connecttion
logic [31:0] enableWriteSignal;
logic [31:0] rdDataRegister [31:0];
//internal register32 bit set
assign rdDataRegister[0] = 32'd0;
register32bit register_x_1 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[1]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[1]));
register32bit register_x_2 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[2]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[2]));
register32bit register_x_3 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[3]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[3]));
register32bit register_x_4 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[4]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[4]));
register32bit register_x_5 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[5]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[5]));
register32bit register_x_6 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[6]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[6]));
register32bit register_x_7 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[7]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[7]));
register32bit register_x_8 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[8]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[8]));
register32bit register_x_9 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[9]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[9]));
register32bit register_x_10 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[10]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[10]));
register32bit register_x_11 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[11]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[11]));
register32bit register_x_12 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[12]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[12]));
register32bit register_x_13 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[13]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[13]));
register32bit register_x_14 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[14]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[14]));
register32bit register_x_15 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[15]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[15]));
register32bit register_x_16 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[16]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[16]));
register32bit register_x_17 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[17]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[17]));
register32bit register_x_18 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[18]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[18]));
register32bit register_x_19 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[19]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[19]));
register32bit register_x_20 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[20]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[20]));
register32bit register_x_21 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[21]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[21]));
register32bit register_x_22 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[22]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[22]));
register32bit register_x_23 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[23]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[23]));
register32bit register_x_24 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[24]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[24]));
register32bit register_x_25 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[25]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[25]));
register32bit register_x_26 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[26]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[26]));
register32bit register_x_27 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[27]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[27]));
register32bit register_x_28 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[28]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[28]));
register32bit register_x_29 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[29]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[29]));
register32bit register_x_30 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[30]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[30]));
register32bit register_x_31 (.i_clk(i_clk), .i_rst(i_rst), .i_wr_enable(enableWriteSignal[31]), .i_wr_data(i_wr_data), .o_rd_data(rdDataRegister[31]));
//
//decoder signal write
decoder32bit decodeBlock(.i_addr(i_wr_addr), .i_enable(i_wr_wren), .o_decodeSignal(enableWriteSignal));
//
//Mux for read RS1
mux32 muxBlock1 (.i_data(rdDataRegister), .i_sel(i_rs1_addr), .o_data(o_rs1_data));
//Mux for read RS2
mux32 muxBlock2 (.i_data(rdDataRegister), .i_sel(i_rs2_addr), .o_data(o_rs2_data));

endmodule
