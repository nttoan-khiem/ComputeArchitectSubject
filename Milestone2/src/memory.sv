module memory(
    input logic i_clk,
    input logic i_reset,
    input logic [10:0] i_addr,
    input logic [31:0] i_wdata,
    input logic [3:0] i_mask,
    input logic i_wren,
    output logic [31:0] o_rdata
);
(* ram_init_file = "inst.hex" *) 
 logic [7:0] mem [0:2047] = '{default:8'h00};  // Initialize all to 0 first
 initial begin 
	  $readmemh("inst.hex", mem);  // Overwrite with HEX contents
 end
logic [10:0] addr_0, addr_1, addr_2, addr_3;
logic byteWEn0, byteWEn1, byteWEn2, byteWEn3;
assign addr_0 = i_addr;          // addr0 first byte
assign addr_1 = i_addr + 11'd1;  // addr1 second byte
assign addr_2 = i_addr + 11'd2;  // addr2 third byte
assign addr_3 = i_addr + 11'd3;  // addr3 four th byte
assign byteWEn0 = i_mask[0] & i_wren; //wr mask enb 0
assign byteWEn1 = i_mask[1] & i_wren; //wr mask enb 1
assign byteWEn2 = i_mask[2] & i_wren; //wr mask enb 2
assign byteWEn3 = i_mask[3] & i_wren; //wr mask enb 3
always @(posedge i_clk) begin //write control block and reset handle
    if(!i_reset) begin 
        mem[2047] = 8'h00;
    end else begin 
        if(byteWEn0) begin 
            mem[addr_0] <= i_wdata[7:0];
        end
        if (byteWEn1) begin 
            mem[addr_1] <= i_wdata[15:8];
        end 
        if (byteWEn2) begin 
            mem[addr_2] <= i_wdata[23:16];
        end 
        if (byteWEn3) begin 
            mem[addr_3] <= i_wdata[31:24];
        end
    end
end
always @(*) begin
    o_rdata[7:0] = {8{i_mask[0]}} & mem[addr_0];
    o_rdata[15:8] = {8{i_mask[1]}} & mem[addr_1]; 
    o_rdata[23:16] = {8{i_mask[2]}} & mem[addr_2];
    o_rdata[31:24] = {8{i_mask[3]}} & mem[addr_3];  
end
endmodule