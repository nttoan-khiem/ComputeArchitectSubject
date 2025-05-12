module instMem(   //as rom memory
    input logic i_reset,
    input logic [10:0] i_addr,
    output logic [31:0] o_data
);
(* ram_init_file = "inst.hex" *) 
 logic [7:0] mem [0:2047] = '{default:8'h00};  // Initialize all to 0 first
 initial begin 
	  $readmemh("inst.hex", mem);  // Overwrite with HEX contents
 end

logic [10:0] addr_0, addr_1, addr_2, addr_3;
assign addr_0 = i_addr;          // addr0 first byte
assign addr_1 = i_addr + 11'd1;  // addr1 second byte
assign addr_2 = i_addr + 11'd2;  // addr2 third byte
assign addr_3 = i_addr + 11'd3;  // addr3 four th byte
always @(*) begin
    o_data[7:0] = mem[addr_0];
    o_data[15:8] = mem[addr_1]; 
    o_data[23:16] = mem[addr_2];
    o_data[31:24] = mem[addr_3];  
end
endmodule