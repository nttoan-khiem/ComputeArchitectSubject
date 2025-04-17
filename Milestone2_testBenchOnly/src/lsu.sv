`timescale 1ns/1ps
module lsu(
    input logic i_clk,
    input logic i_reset,
    input logic [31:0] i_stData,
    input logic i_wren,
    input logic [31:0] i_addr,
    input logic [3:0] i_mask,
    input logic [31:0] i_ph_sw,
    input logic [31:0] i_ph_button,
    output logic [31:0] o_ldData,
    output logic [31:0] o_ph_ledr,
    output logic [31:0] o_ph_ledg,
    output logic [6:0] o_ph_seg0,
    output logic [6:0] o_ph_seg1,
    output logic [6:0] o_ph_seg2,
    output logic [6:0] o_ph_seg3,
    output logic [6:0] o_ph_seg4,
    output logic [6:0] o_ph_seg5,
    output logic [6:0] o_ph_seg6,
    output logic [6:0] o_ph_seg7,
    output logic [31:0] o_ph_lcd
);
logic en_memory, en_ledr, en_ledg, en_seg30, en_seg74, en_lcd, en_sw, en_button;
always @(*) begin
    case (i_addr[31:12]) //31-28, 27-24, 23-20, 19-16, 15-12, 11-8, 7-4, 3-0
                         //0:3, 4:7, 8-11, 12-15, 16-19, 20-23, 24-27, 28-31
        20'h0000_0: begin 
            en_memory = 1;
            en_ledr = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        20'h0000_1: begin 
            en_memory = 1;
            en_ledr = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        20'h0000_2: begin 
            en_memory = 1;
            en_ledr = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        20'h0000_3: begin 
            en_memory = 1;
            en_ledr = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        20'h0000_4: begin 
            en_memory = 1;
            en_ledr = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        20'h0000_5: begin 
            en_memory = 1;
            en_ledr = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        20'h0000_6: begin 
            en_memory = 1;
            en_ledr = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        20'h0000_7: begin 
            en_memory = 1;
            en_ledr = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        20'h1000_0: begin 
            en_ledr = 1;
            en_memory = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        20'h1000_1: begin
            en_ledg = 1;
            en_ledr = 0;
            en_memory = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        20'h1000_2: begin 
            en_seg30 = 1;
            en_ledr = 0;
            en_memory = 0;
            en_ledg = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        20'h1000_3: begin 
            en_seg74 = 1;
            en_ledr = 0;
            en_memory = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        20'h1000_4: begin 
            en_lcd = 1;
            en_ledr = 0;
            en_memory = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_sw = 0;
            en_button = 0;
        end
        20'h1001_0: begin 
            en_sw = 1;
            en_ledr = 0;
            en_memory = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_button = 0;
        end
        20'h1001_1: begin
            en_button = 1;
            en_ledr = 0;
            en_memory = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
        end
        default: begin 
            en_ledr = 0;
            en_memory = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
    endcase
end
//memory data control 
logic [31:0] mem;
memory dataMemoryBlock(
    .i_clk(i_clk),
    .i_reset(i_reset),
    .i_addr(i_addr[15:0]), //16kb
    .i_wdata(i_stData),
    .i_mask(i_mask),
    .i_wren(i_wren & en_memory),
    .o_rdata(mem)
);
logic [31:0] addr0Temp, addr1Temp, addr2Temp, addr3Temp;
assign addr0Temp = i_addr;
assign addr1Temp = i_addr + 32'd1;
assign addr2Temp = i_addr + 32'd2;
assign addr3Temp = i_addr + 32'd3;
logic [2:0] addr0, addr1, addr2, addr3; 
assign addr0 = addr0Temp[2:0];
assign addr1 = addr1Temp[2:0];
assign addr2 = addr2Temp[2:0];
assign addr3 = addr3Temp[2:0];

//ledr control 
logic [7:0] ledrReg [7:0];
always @(posedge i_clk or negedge i_reset) begin
    if(!i_reset) begin 
        ledrReg[0] <= 8'd0;
        ledrReg[1] <= 8'd0;
        ledrReg[2] <= 8'd0;
        ledrReg[3] <= 8'd0;
    end else begin
        if(i_wren & en_ledr & i_mask[0]) ledrReg[addr0] <= i_stData[7:0];
        if(i_wren & en_ledr & i_mask[1]) ledrReg[addr1] <= i_stData[15:8];
        if(i_wren & en_ledr & i_mask[2]) ledrReg[addr2] <= i_stData[23:16];
        if(i_wren & en_ledr & i_mask[3]) ledrReg[addr3] <= i_stData[31:24];
    end
end
assign o_ph_ledr = {ledrReg[3], ledrReg[2], ledrReg[1], ledrReg[0]};
//ledg control 
logic [7:0] ledg [7:0];
always @(posedge i_clk or negedge i_reset) begin
    if(!i_reset) begin 
        ledg[0] <= 8'd0;
        ledg[1] <= 8'd0;
        ledg[2] <= 8'd0;
        ledg[3] <= 8'd0;
    end else begin
        if(i_wren & en_ledg & i_mask[0]) ledg[addr0] <= i_stData[7:0];
        if(i_wren & en_ledg & i_mask[1]) ledg[addr1] <= i_stData[15:8];
        if(i_wren & en_ledg & i_mask[2]) ledg[addr2] <= i_stData[23:16];
        if(i_wren & en_ledg & i_mask[3]) ledg[addr3] <= i_stData[31:24];
    end
end
assign o_ph_ledg = {ledg[3], ledg[2], ledg[1], ledg[0]};
//hex 3 to 0 control
logic [7:0] seg30 [7:0];
always @(posedge i_clk or negedge i_reset) begin
    if(!i_reset) begin 
        seg30[0] <= 8'd0;
        seg30[1] <= 8'd0;
        seg30[2] <= 8'd0;
        seg30[3] <= 8'd0;
    end else begin
        if(i_wren & en_seg30 & i_mask[0]) seg30[addr0] <= i_stData[7:0];
        if(i_wren & en_seg30 & i_mask[1]) seg30[addr1] <= i_stData[15:8];
        if(i_wren & en_seg30 & i_mask[2]) seg30[addr2] <= i_stData[23:16];
        if(i_wren & en_seg30 & i_mask[3]) seg30[addr3] <= i_stData[31:24];
    end
end
assign o_ph_seg0 = seg30[0][6:0];
assign o_ph_seg1 = seg30[1][6:0];
assign o_ph_seg2 = seg30[2][6:0];
assign o_ph_seg3 = seg30[3][6:0];
//hex 7 to 4 control
logic [7:0] seg74 [7:0];
always @(posedge i_clk or negedge i_reset) begin
    if(!i_reset) begin 
        seg74[0] <= 8'd0;
        seg74[1] <= 8'd0;
        seg74[2] <= 8'd0;
        seg74[3] <= 8'd0;
    end else begin
        if(i_wren & en_seg74 & i_mask[0]) seg74[addr0] <= i_stData[7:0];
        if(i_wren & en_seg74 & i_mask[1]) seg74[addr1] <= i_stData[15:8];
        if(i_wren & en_seg74 & i_mask[2]) seg74[addr2] <= i_stData[23:16];
        if(i_wren & en_seg74 & i_mask[3]) seg74[addr3] <= i_stData[31:24];
    end
end
assign o_ph_seg4 = seg74[0][6:0];
assign o_ph_seg5 = seg74[1][6:0];
assign o_ph_seg6 = seg74[2][6:0];
assign o_ph_seg7 = seg74[3][6:0];
//lcd control
logic [31:0] lcd;
always @(posedge i_clk or negedge i_reset) begin
    if(!i_reset) begin 
        lcd <= 32'd0;
    end else begin
        if(i_wren & en_lcd & i_mask[0]) lcd[7:0] <= i_stData[7:0];
        if(i_wren & en_lcd & i_mask[1]) lcd[15:8] <= i_stData[15:8];
        if(i_wren & en_lcd & i_mask[2]) lcd[23:16] <= i_stData[23:16];
        if(i_wren & en_lcd & i_mask[3]) lcd[31:24] <= i_stData[31:24];
    end
end
assign o_ph_lcd = lcd;
//control for read (load data) closely similar mux
logic [31:0] r_mem, r_ledr, r_ledg, r_seg30, r_seg74, r_lcd, r_sw, r_button;
assign r_mem = {32{en_memory}} & mem & {{8{i_mask[3]}}, {8{i_mask[2]}}, {8{i_mask[1]}}, {8{i_mask[0]}}};
assign r_ledr = {32{en_ledr}} & {ledrReg[3], ledrReg[2], ledrReg[1], ledrReg[0]} & {{8{i_mask[3]}}, {8{i_mask[2]}}, {8{i_mask[1]}}, {8{i_mask[0]}}};
assign r_ledg = {32{en_ledg}} & {ledg[3], ledg[2], ledg[1], ledg[0]} & {{8{i_mask[3]}}, {8{i_mask[2]}}, {8{i_mask[1]}}, {8{i_mask[0]}}};
assign r_seg30 = {32{en_seg30}} & {seg30[3], seg30[2], seg30[1], seg30[0]} & {{8{i_mask[3]}}, {8{i_mask[2]}}, {8{i_mask[1]}}, {8{i_mask[0]}}};
assign r_seg74 = {32{en_seg74}} & {seg74[3], seg74[2], seg74[1], seg74[0]} & {{8{i_mask[3]}}, {8{i_mask[2]}}, {8{i_mask[1]}}, {8{i_mask[0]}}};
assign r_lcd = {32{en_lcd}} & lcd & {{8{i_mask[3]}}, {8{i_mask[2]}}, {8{i_mask[1]}}, {8{i_mask[0]}}};
assign r_sw = {32{en_sw}} & i_ph_sw & {{8{i_mask[3]}}, {8{i_mask[2]}}, {8{i_mask[1]}}, {8{i_mask[0]}}};
assign r_button = {32{en_button}} & i_ph_button & {{8{i_mask[3]}}, {8{i_mask[2]}}, {8{i_mask[1]}}, {8{i_mask[0]}}};
//master output ld data
assign o_ldData = r_mem | r_ledr | r_ledg | r_seg30 | r_seg74 | r_lcd | r_sw | r_button;
endmodule

