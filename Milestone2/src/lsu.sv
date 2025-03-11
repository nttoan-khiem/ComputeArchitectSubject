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
    output logic [9:0] o_ph_ledr,
    output logic [9:0] o_ph_ledg,
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
    case (i_addr[31:24])
        8'h00: begin 
            en_memory = ~i_addr[23];
            en_ledr = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        8'h10: begin 
            en_ledr = 1;
            en_memory = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        8'h11: begin
            en_ledg = 1;
            en_ledr = 0;
            en_memory = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        8'h12: begin 
            en_seg30 = 1;
            en_ledr = 0;
            en_memory = 0;
            en_ledg = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        8'h13: begin 
            en_seg74 = 1;
            en_ledr = 0;
            en_memory = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_lcd = 0;
            en_sw = 0;
            en_button = 0;
        end
        8'h14: begin 
            en_lcd = 1;
            en_ledr = 0;
            en_memory = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_sw = 0;
            en_button = 0;
        end
        8'h90: begin 
            en_sw = 1;
            en_ledr = 0;
            en_memory = 0;
            en_ledg = 0;
            en_seg30 = 0;
            en_seg74 = 0;
            en_lcd = 0;
            en_button = 0;
        end
        8'h91: begin
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
    .i_addr(i_addr[11:0]), //2kb
    .i_wdata(i_stData),
    .i_mask(i_mask),
    .i_wren(i_wren & en_memory),
    .o_rdata(mem)
);
//ledr control 
logic [31:0] ledr;
always @(posedge i_clk or negedge i_reset) begin
    if(!i_reset) begin 
        ledr <= 32'd0;
    end else begin
        if(i_wren & en_ledr & i_mask[0]) ledr[7:0] <= i_stData[7:0];
        if(i_wren & en_ledr & i_mask[1]) ledr[15:8] <= i_stData[15:8];
        if(i_wren & en_ledr & i_mask[2]) ledr[23:16] <= i_stData[23:16];
        if(i_wren & en_ledr & i_mask[3]) ledr[31:24] <= i_stData[31:24];
    end
end
assign o_ph_ledr = ledr[9:0];
//ledg control 
logic [31:0] ledg;
always @(posedge i_clk or negedge i_reset) begin
    if(!i_reset) begin 
        ledg <= 32'd0;
    end else begin
        if(i_wren & en_ledg & i_mask[0]) ledg[7:0] <= i_stData[7:0];
        if(i_wren & en_ledg & i_mask[1]) ledg[15:8] <= i_stData[15:8];
        if(i_wren & en_ledg & i_mask[2]) ledg[23:16] <= i_stData[23:16];
        if(i_wren & en_ledg & i_mask[3]) ledg[31:24] <= i_stData[31:24];
    end
end
assign o_ph_ledg = ledg[9:0];
//hex 3 to 0 control
logic [31:0] seg30;
always @(posedge i_clk or negedge i_reset) begin
    if(!i_reset) begin 
        seg30 <= 32'd0;
    end else begin
        if(i_wren & en_seg30 & i_mask[0]) seg30[7:0] <= i_stData[7:0];
        if(i_wren & en_seg30 & i_mask[1]) seg30[15:8] <= i_stData[15:8];
        if(i_wren & en_seg30 & i_mask[2]) seg30[23:16] <= i_stData[23:16];
        if(i_wren & en_seg30 & i_mask[3]) seg30[31:24] <= i_stData[31:24];
    end
end
assign o_ph_seg0 = seg30[6:0];
assign o_ph_seg1 = seg30[14:8];
assign o_ph_seg2 = seg30[22:16];
assign o_ph_seg3 = seg30[30:24];
//hex 7 to 4 control
logic [31:0] seg74;
always @(posedge i_clk or negedge i_reset) begin
    if(!i_reset) begin 
        seg74 <= 32'd0;
    end else begin
        if(i_wren & en_seg74 & i_mask[0]) seg74[7:0] <= i_stData[7:0];
        if(i_wren & en_seg74 & i_mask[1]) seg74[15:8] <= i_stData[15:8];
        if(i_wren & en_seg74 & i_mask[2]) seg74[23:16] <= i_stData[23:16];
        if(i_wren & en_seg74 & i_mask[3]) seg74[31:24] <= i_stData[31:24];
    end
end
assign o_ph_seg4 = seg74[6:0];
assign o_ph_seg5 = seg74[14:8];
assign o_ph_seg6 = seg74[22:16];
assign o_ph_seg7 = seg74[30:24];
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
assign r_ledr = {32{en_ledr}} & ledr & {{8{i_mask[3]}}, {8{i_mask[2]}}, {8{i_mask[1]}}, {8{i_mask[0]}}};
assign r_ledg = {32{en_ledg}} & ledg & {{8{i_mask[3]}}, {8{i_mask[2]}}, {8{i_mask[1]}}, {8{i_mask[0]}}};
assign r_seg30 = {32{en_seg30}} & seg30 & {{8{i_mask[3]}}, {8{i_mask[2]}}, {8{i_mask[1]}}, {8{i_mask[0]}}};
assign r_seg74 = {32{en_seg74}} & seg74 & {{8{i_mask[3]}}, {8{i_mask[2]}}, {8{i_mask[1]}}, {8{i_mask[0]}}};
assign r_lcd = {32{en_lcd}} & lcd & {{8{i_mask[3]}}, {8{i_mask[2]}}, {8{i_mask[1]}}, {8{i_mask[0]}}};
assign r_sw = {32{en_sw}} & i_ph_sw & {{8{i_mask[3]}}, {8{i_mask[2]}}, {8{i_mask[1]}}, {8{i_mask[0]}}};
assign r_button = {32{en_button}} & i_ph_button & {{8{i_mask[3]}}, {8{i_mask[2]}}, {8{i_mask[1]}}, {8{i_mask[0]}}};
//master output ld data
assign o_ldData = r_mem | r_ledr | r_ledg | r_seg30 | r_seg74 | r_lcd | r_sw | r_button;
endmodule
