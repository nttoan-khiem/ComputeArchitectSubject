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
    if(!i_rst) begin 
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

module decoder32bit(
    input logic [4:0] i_addr,
    input logic i_enable,
    output logic [31:0] o_decodeSignal
);
always_comb begin : decodeLogicBlock
    if (!i_enable) begin 
        o_decodeSignal = 32'd0;
    end else begin 
        case (i_addr)
            5'd0: o_decodeSignal = {{31{1'b0}}, 1'b1}; 
            5'd1: o_decodeSignal = {{30{1'b0}}, 1'b1, {1{1'b0}}};
            5'd2: o_decodeSignal = {{29{1'b0}}, 1'b1, {2{1'b0}}};
            5'd3: o_decodeSignal = {{28{1'b0}}, 1'b1, {3{1'b0}}};
            5'd4: o_decodeSignal = {{27{1'b0}}, 1'b1, {4{1'b0}}};
            5'd5: o_decodeSignal = {{26{1'b0}}, 1'b1, {5{1'b0}}};
            5'd6: o_decodeSignal = {{25{1'b0}}, 1'b1, {6{1'b0}}};
            5'd7: o_decodeSignal = {{24{1'b0}}, 1'b1, {7{1'b0}}};
            5'd8: o_decodeSignal = {{23{1'b0}}, 1'b1, {8{1'b0}}};
            5'd9: o_decodeSignal = {{22{1'b0}}, 1'b1, {9{1'b0}}};
            5'd10: o_decodeSignal = {{21{1'b0}}, 1'b1, {10{1'b0}}};
            5'd11: o_decodeSignal = {{20{1'b0}}, 1'b1, {11{1'b0}}};
            5'd12: o_decodeSignal = {{19{1'b0}}, 1'b1, {12{1'b0}}};
            5'd13: o_decodeSignal = {{18{1'b0}}, 1'b1, {13{1'b0}}};
            5'd14: o_decodeSignal = {{17{1'b0}}, 1'b1, {14{1'b0}}};
            5'd15: o_decodeSignal = {{16{1'b0}}, 1'b1, {15{1'b0}}};
            5'd16: o_decodeSignal = {{15{1'b0}}, 1'b1, {16{1'b0}}};
            5'd17: o_decodeSignal = {{14{1'b0}}, 1'b1, {17{1'b0}}};
            5'd18: o_decodeSignal = {{13{1'b0}}, 1'b1, {18{1'b0}}};
            5'd19: o_decodeSignal = {{12{1'b0}}, 1'b1, {19{1'b0}}};
            5'd20: o_decodeSignal = {{11{1'b0}}, 1'b1, {20{1'b0}}};
            5'd21: o_decodeSignal = {{10{1'b0}}, 1'b1, {21{1'b0}}};
            5'd22: o_decodeSignal = {{9{1'b0}}, 1'b1, {22{1'b0}}};
            5'd23: o_decodeSignal = {{8{1'b0}}, 1'b1, {23{1'b0}}};
            5'd24: o_decodeSignal = {{7{1'b0}}, 1'b1, {24{1'b0}}};
            5'd25: o_decodeSignal = {{6{1'b0}}, 1'b1, {25{1'b0}}};
            5'd26: o_decodeSignal = {{5{1'b0}}, 1'b1, {26{1'b0}}};
            5'd27: o_decodeSignal = {{4{1'b0}}, 1'b1, {27{1'b0}}};
            5'd28: o_decodeSignal = {{3{1'b0}}, 1'b1, {28{1'b0}}};
            5'd29: o_decodeSignal = {{2{1'b0}}, 1'b1, {29{1'b0}}};
            5'd30: o_decodeSignal = {{1{1'b0}}, 1'b1, {30{1'b0}}};
            5'd31: o_decodeSignal = {1'b1, {31{1'b0}}};
            default: o_decodeSignal = 32'd0;
        endcase
    end
end
endmodule

module mux32(
    input logic [31:0] i_data [31:0],
    input logic [4:0] i_sel,
    output logic [31:0] o_data
);
always @(*) begin
    case (i_sel)
        5'd0: o_data = i_data[0]; 
        5'd1: o_data = i_data[1];
        5'd2: o_data = i_data[2];
        5'd3: o_data = i_data[3];
        5'd4: o_data = i_data[4];
        5'd5: o_data = i_data[5];
        5'd6: o_data = i_data[6];
        5'd7: o_data = i_data[7];
        5'd8: o_data = i_data[8];
        5'd9: o_data = i_data[9];
        5'd10: o_data = i_data[10];
        5'd11: o_data = i_data[11];
        5'd12: o_data = i_data[12];
        5'd13: o_data = i_data[13];
        5'd14: o_data = i_data[14];
        5'd15: o_data = i_data[15];
        5'd16: o_data = i_data[16];
        5'd17: o_data = i_data[17];
        5'd18: o_data = i_data[18];
        5'd19: o_data = i_data[19];
        5'd20: o_data = i_data[20];
        5'd21: o_data = i_data[21];
        5'd22: o_data = i_data[22];
        5'd23: o_data = i_data[23];
        5'd24: o_data = i_data[24];
        5'd25: o_data = i_data[25];
        5'd26: o_data = i_data[26];
        5'd27: o_data = i_data[27];
        5'd28: o_data = i_data[28];
        5'd29: o_data = i_data[29];
        5'd30: o_data = i_data[30];
        5'd31: o_data = i_data[31];
        default: o_data = 32'd0;
    endcase
end
endmodule