`timescale 1ns/1ps
module shiftRight(
    input logic [31:0] i_agr,
    input logic [4:0] i_shift,
    input logic i_logicArith,
    output logic [31:0] o_data
);
logic [31:0] internalData [31:0];
assign internalData[0] = i_agr;
assign internalData[1] = {{1{i_logicArith & i_agr[31]}},i_agr[31:1]};
assign internalData[2] = {{2{i_logicArith & i_agr[31]}},i_agr[31:2]};
assign internalData[3] = {{3{i_logicArith & i_agr[31]}},i_agr[31:3]};
assign internalData[4] = {{4{i_logicArith & i_agr[31]}},i_agr[31:4]};
assign internalData[5] = {{5{i_logicArith & i_agr[31]}},i_agr[31:5]};
assign internalData[6] = {{6{i_logicArith & i_agr[31]}},i_agr[31:6]};
assign internalData[7] = {{7{i_logicArith & i_agr[31]}},i_agr[31:7]};
assign internalData[8] = {{8{i_logicArith & i_agr[31]}},i_agr[31:8]};
assign internalData[9] = {{9{i_logicArith & i_agr[31]}},i_agr[31:9]};
assign internalData[10] = {{10{i_logicArith & i_agr[31]}},i_agr[31:10]};
assign internalData[11] = {{11{i_logicArith & i_agr[31]}},i_agr[31:11]};
assign internalData[12] = {{12{i_logicArith & i_agr[31]}},i_agr[31:12]};
assign internalData[13] = {{13{i_logicArith & i_agr[31]}},i_agr[31:13]};
assign internalData[14] = {{14{i_logicArith & i_agr[31]}},i_agr[31:14]};
assign internalData[15] = {{15{i_logicArith & i_agr[31]}},i_agr[31:15]};
assign internalData[16] = {{16{i_logicArith & i_agr[31]}},i_agr[31:16]};
assign internalData[17] = {{17{i_logicArith & i_agr[31]}},i_agr[31:17]};
assign internalData[18] = {{18{i_logicArith & i_agr[31]}},i_agr[31:18]};
assign internalData[19] = {{19{i_logicArith & i_agr[31]}},i_agr[31:19]};
assign internalData[20] = {{20{i_logicArith & i_agr[31]}},i_agr[31:20]};
assign internalData[21] = {{21{i_logicArith & i_agr[31]}},i_agr[31:21]};
assign internalData[22] = {{22{i_logicArith & i_agr[31]}},i_agr[31:22]};
assign internalData[23] = {{23{i_logicArith & i_agr[31]}},i_agr[31:23]};
assign internalData[24] = {{24{i_logicArith & i_agr[31]}},i_agr[31:24]};
assign internalData[25] = {{25{i_logicArith & i_agr[31]}},i_agr[31:25]};
assign internalData[26] = {{26{i_logicArith & i_agr[31]}},i_agr[31:26]};
assign internalData[27] = {{27{i_logicArith & i_agr[31]}},i_agr[31:27]};
assign internalData[28] = {{28{i_logicArith & i_agr[31]}},i_agr[31:28]};
assign internalData[29] = {{29{i_logicArith & i_agr[31]}},i_agr[31:29]};
assign internalData[30] = {{30{i_logicArith & i_agr[31]}},i_agr[31:30]};
assign internalData[31] = {{31{i_logicArith & i_agr[31]}},i_agr[31]};
assign o_data = internalData[i_shift];
endmodule
