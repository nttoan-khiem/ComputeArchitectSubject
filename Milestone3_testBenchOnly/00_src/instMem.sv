`timescale 1ns/1ps
module instMem(   //as rom memory
    input logic [15:0] i_addr,
    output logic [31:0] o_data
);
logic [7:0] mem [0: 65535]; //intermal memory block

initial begin 
    $readmemh("./../02_test/isa.mem", mem); //change init code in here
end
logic [15:0] addr_0, addr_1, addr_2, addr_3;
assign addr_0 = i_addr;          // addr0 first byte
assign addr_1 = i_addr + 16'd1;  // addr1 second byte
assign addr_2 = i_addr + 16'd2;  // addr2 third byte
assign addr_3 = i_addr + 16'd3;  // addr3 four th byte
always @(*) begin
    o_data[7:0] = mem[addr_0];
    o_data[15:8] = mem[addr_1]; 
    o_data[23:16] = mem[addr_2];
    o_data[31:24] = mem[addr_3];  
end
endmodule
