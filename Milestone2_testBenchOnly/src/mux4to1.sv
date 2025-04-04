module mux4to1(
    input logic [1:0] i_sel,
    input logic [31:0] i_dataA,
    input logic [31:0] i_dataB,
    input logic [31:0] i_dataC,
    input logic [31:0] i_dataD,
    output logic [31:0] o_data
);
always @(*) begin
    case (i_sel)
        2'b00: o_data = i_dataA;
        2'b01: o_data = i_dataB;
        2'b10: o_data = i_dataC;
        2'b11: o_data = i_dataD;
    endcase
end
endmodule