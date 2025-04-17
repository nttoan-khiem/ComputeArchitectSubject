`timescale 1ns/1ps
module shiftLeft(
    input logic [31:0] i_agr,
    input logic [4:0] i_shift,
    output logic [31:0] o_data
);
logic [31:0] internalData [31:0];
assign internalData[0] = i_agr;
assign internalData[1] = {i_agr[30:0], {1{1'b0}}};
assign internalData[2] = {i_agr[29:0], {2{1'b0}}};
assign internalData[3] = {i_agr[28:0], {3{1'b0}}};
assign internalData[4] = {i_agr[27:0], {4{1'b0}}};
assign internalData[5] = {i_agr[26:0], {5{1'b0}}};
assign internalData[6] = {i_agr[25:0], {6{1'b0}}};
assign internalData[7] = {i_agr[24:0], {7{1'b0}}};
assign internalData[8] = {i_agr[23:0], {8{1'b0}}};
assign internalData[9] = {i_agr[22:0], {9{1'b0}}};
assign internalData[10] = {i_agr[21:0], {10{1'b0}}};
assign internalData[11] = {i_agr[20:0], {11{1'b0}}};
assign internalData[12] = {i_agr[19:0], {12{1'b0}}};
assign internalData[13] = {i_agr[18:0], {13{1'b0}}};
assign internalData[14] = {i_agr[17:0], {14{1'b0}}};
assign internalData[15] = {i_agr[16:0], {15{1'b0}}};
assign internalData[16] = {i_agr[15:0], {16{1'b0}}};
assign internalData[17] = {i_agr[14:0], {17{1'b0}}};
assign internalData[18] = {i_agr[13:0], {18{1'b0}}};
assign internalData[19] = {i_agr[12:0], {19{1'b0}}};
assign internalData[20] = {i_agr[11:0], {20{1'b0}}};
assign internalData[21] = {i_agr[10:0], {21{1'b0}}};
assign internalData[22] = {i_agr[9:0], {22{1'b0}}};
assign internalData[23] = {i_agr[8:0], {23{1'b0}}};
assign internalData[24] = {i_agr[7:0], {24{1'b0}}};
assign internalData[25] = {i_agr[6:0], {25{1'b0}}};
assign internalData[26] = {i_agr[5:0], {26{1'b0}}};
assign internalData[27] = {i_agr[4:0], {27{1'b0}}};
assign internalData[28] = {i_agr[3:0], {28{1'b0}}};
assign internalData[29] = {i_agr[2:0], {29{1'b0}}};
assign internalData[30] = {i_agr[1:0], {30{1'b0}}};
assign internalData[31] = {i_agr[0], {31{1'b0}}};
assign o_data = internalData[i_shift];
endmodule
