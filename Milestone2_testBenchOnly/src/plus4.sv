module plus4(
    input logic [31:0] i_data,
    output logic [31:0] o_data
);
assign o_data = i_data + 32'd4;
endmodule