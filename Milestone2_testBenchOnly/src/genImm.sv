module genImm(
    input logic [31:0] i_instruction,
    input logic [2:0] i_operation,
    output logic [31:0] o_imm
);
logic [31:0] i0, i1;
assign i0[31:0] = {{20{i_instruction[31]}}, i_instruction[31:20]};
assign i1[31:0] = {{27{1'b0}}, i_instruction[24:20]};
logic [31:0] s;
assign s[31:0] = {{20{i_instruction[31]}},i_instruction[31:25],i_instruction[11:7]};
logic [31:0] b;
assign b[31:0] = {{20{i_instruction[31]}},i_instruction[7],i_instruction[30:25],i_instruction[11:8],1'b0};
logic [31:0] jal;
assign jal[31:0] = {{12{i_instruction[31]}},i_instruction[19:12],i_instruction[20],i_instruction[30:25],i_instruction[24:21],1'b0};
logic [31:0] u;
assign u[31:0] = {i_instruction[31:12], {12{1'b0}}};

always_comb begin : decodeBlock
    case (i_operation)
        3'b000: o_imm = i0;
        3'b001: o_imm = i1;
        3'b010: o_imm = s;
        3'b011: o_imm = b;
        3'b100: o_imm = jal;
        3'b101: o_imm = u;
        default: o_imm = i0;
    endcase
end
endmodule