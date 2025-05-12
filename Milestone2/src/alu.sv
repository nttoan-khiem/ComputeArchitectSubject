module alu(
    input logic [31:0] i_operandA,
    input logic [31:0] i_operandB,
    input logic [3:0] i_aluOp,
    output logic [31:0] o_aluData
);
logic [32:0] extendOpa, extendOpb, operandBToAdd;
logic [32:0] adderTemp; 
logic [32:0] bu2_operandB;
logic signalSelSign;
logic athi;
assign extendOpa = {1'b0, i_operandA};
assign extendOpb = {1'b0, i_operandB};
assign bu2_operandB = (~extendOpb) + 33'd1;
controlSel selControlBlock(
    .i_oper(i_aluOp),
    .o_sig(signalSelSign),
    .o_athi(athi)
);
selOperand selBlock(
    .i_sel(signalSelSign),
    .i_a(extendOpb),
    .i_b(bu2_operandB),
    .o_d(operandBToAdd)
);
logic [33:0] extendOpaCompUnsign;
assign extendOpaCompUnsign = {{2{1'd0}}, i_operandA};
logic [33:0] extendOpaCompSign;
assign extendOpaCompSign = {{2{i_operandA[31]}}, i_operandA};
logic [33:0] extendOpbCompUnsign;
assign extendOpbCompUnsign = {{2{1'd0}}, i_operandB};
logic [33:0] extendOpbCompSign;
assign extendOpbCompSign = {{2{i_operandB[31]}}, i_operandB};
logic [33:0] exeOpaComp, exeOpbCompTemp;
controlSelComp SelecConpareOpa(
    .i_sel(signalSelSign),
    .i_a(extendOpaCompUnsign),
    .i_b(extendOpaCompSign),
    .o_d(exeOpaComp)
);
controlSelComp SelecConpareOpb(
    .i_sel(signalSelSign),
    .i_a(extendOpbCompUnsign),
    .i_b(extendOpbCompSign),
    .o_d(exeOpbCompTemp)
);
logic [33:0] exeOpbComp;
assign exeOpbComp = ~exeOpbCompTemp + 34'd1;
logic [33:0] resultComp;
assign resultComp = exeOpaComp + exeOpbComp;
logic [31:0] m_and;
logic [31:0] m_or;
logic [31:0] m_xor;
logic [31:0] m_add;
logic [31:0] m_slt, m_sltu;
logic [31:0] m_sll, m_srla;
logic [31:0] m_lui;
assign m_and = i_operandA & i_operandB;
assign m_or = i_operandA | i_operandB;
assign m_xor = i_operandA ^ i_operandB;
assign adderTemp = extendOpa + operandBToAdd;
assign m_slt = {{31{1'd0}}, resultComp[33]};
assign m_sltu = {{31{1'd0}}, resultComp[33]};
assign m_add = adderTemp[31:0];
assign m_lui = i_operandB;
shiftLeft shiftLeftBlock (
    .i_agr(i_operandA),
    .i_shift(i_operandB[4:0]),
    .o_data(m_sll)
);

shiftRight shiftRightBlock (
    .i_agr(i_operandA),
    .i_shift(i_operandB[4:0]),
    .i_logicArith(athi),
    .o_data(m_srla)
);

selOutputAlu selectOutputLogicBlock(
    .i_oper(i_aluOp),
    .i_addSub(m_add),
    .i_lui(m_lui),
    .i_slt(m_slt),
    .i_sltu(m_sltu),
    .i_xor(m_xor),
    .i_or(m_or),
    .i_and(m_and),
    .i_sll(m_sll),
    .i_srla(m_srla),
    .o_data(o_aluData)
);
endmodule

module selOperand(
    input logic i_sel,
    input logic [32:0] i_a,
    input logic [32:0] i_b,
    output logic [32:0] o_d
);
always @(*) begin
    case (i_sel)
        1'b0: o_d = i_a;
        1'b1: o_d = i_b; 
    endcase
end
endmodule

module selOperandComp(
    input logic i_sel,
    input logic [33:0] i_a,
    input logic [33:0] i_b,
    output logic [33:0] o_d
);
always @(*) begin
    case (i_sel)
        1'b0: o_d = i_a;
        1'b1: o_d = i_b; 
    endcase
end
endmodule

module controlSel(
    input logic [3:0] i_oper,
    output logic o_sig,
    output logic o_athi
);
always @(*) begin
    case (i_oper)
        4'b0001: begin 
            o_sig = 1;
            o_athi = 0;
        end
        4'b0010: begin 
            o_sig = 1;
            o_athi = 0;
        end
        4'b0011: begin
            o_sig = 1;
            o_athi = 0;
        end
        4'b1001: begin 
            o_sig = 0;
            o_athi = 1;
        end
        default: begin 
            o_sig = 0;
            o_athi = 0;
        end
    endcase
end
endmodule

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

module selOutputAlu(
    input logic [3:0] i_oper,
    input logic [31:0] i_addSub,
    input logic [31:0] i_slt,
    input logic [31:0] i_sltu,
    input logic [31:0] i_xor,
    input logic [31:0] i_lui,
    input logic [31:0] i_or,
    input logic [31:0] i_and,
    input logic [31:0] i_sll,
    input logic [31:0] i_srla,
    output logic [31:0] o_data
);
always @(*) begin
    case (i_oper)
        4'b0000: o_data = i_addSub; 
        4'b0001: o_data = i_addSub;
        4'b0010: o_data = i_slt;  
        4'b0011: o_data = i_sltu;
        4'b0100: o_data = i_xor;
        4'b0101: o_data = i_or;
        4'b0110: o_data = i_and;
        4'b0111: o_data = i_sll;
        4'b1000: o_data = i_srla;
        4'b1001: o_data = i_srla;
        4'b1010: o_data = i_lui;
        default: o_data = 32'd0;
    endcase
end
endmodule
