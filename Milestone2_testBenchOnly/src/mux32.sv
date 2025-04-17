`timescale 1ns/1ps
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
