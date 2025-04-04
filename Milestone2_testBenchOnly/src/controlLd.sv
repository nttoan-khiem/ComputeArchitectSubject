module controlLd(
    input logic [31:0] i_data,
    input logic i_unsign,
    input logic [3:0] i_mask,
    output logic [31:0] o_data
);
logic [31:0] loadByte;
logic [31:0] loadHWord;
assign loadByte = {{24{i_data[7] & (~i_unsign)}}, i_data[7:0]};
assign loadHWord = {{16{i_data[15] & (~i_unsign)}}, i_data[15:0]};

always @(*) begin
    case (i_mask)
        4'b0001: o_data = loadByte;
        4'b0011: o_data = loadHWord;
        default: o_data = i_data;
    endcase    
end
endmodule