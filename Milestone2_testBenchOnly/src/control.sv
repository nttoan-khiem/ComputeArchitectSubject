`timescale 1ns/1ps
module control(
    input logic [31:0] i_inst,
    input logic i_brlLess,
    input logic i_brEqual,
    output logic o_pcSel,
    output logic [2:0] o_opImm,
    output logic o_brUnsigned,
    output logic o_opaSel,
    output logic o_opbSel,
    output logic [3:0] o_aluOp,
    output logic o_memWrEnable,
    output logic [1:0] o_wbSel,
    output logic o_rdWrEnable,
    output logic [4:0] o_mask,
    output logic o_insn_vld
);
logic [6:0] opcode;
assign opcode = i_inst[6:0];
logic [2:0] func3;
assign func3 = i_inst[14:12];
logic specialBit;
assign specialBit = i_inst[30];
logic [3:0] formatCode;
always @(*) begin
    case (opcode)
        7'b0110111: formatCode = 4'd0; //LUI
        7'b0010111: formatCode = 4'd1; //AUIPC
        7'b1101111: formatCode = 4'd2; //JAL
        7'b1100111: formatCode = 4'd3; //JALR
        7'b1100011: formatCode = 4'd4; //B-format(BEQ)
        7'b0000011: formatCode = 4'd5; //L-format(LB)
        7'b0100011: formatCode = 4'd6; //S-format(SB)
        7'b0010011: formatCode = 4'd7; //I-format(ADDI)
        7'b0110011: formatCode = 4'd8; //R-format(ADD)    
        default: formatCode = 4'b1111; //Undefine Type
    endcase
end
//for pc_sel;
logic pcSel; 
logic pcSel_Bformat;
always @(*) begin
    case (func3)
        3'b000: pcSel_Bformat = i_brEqual;
        3'b001: pcSel_Bformat = ~(i_brEqual);
        3'b100: pcSel_Bformat = i_brlLess;
        3'b101: pcSel_Bformat = ~(i_brlLess);
        3'b110: pcSel_Bformat = i_brlLess;
        3'b111: pcSel_Bformat = ~(i_brlLess);
        default: pcSel_Bformat = 1'b0; //undefind with opcode B-format
    endcase
end
always @(*) begin
    case (formatCode)
        4'd0: pcSel = 0;
        4'd1: pcSel = 0;
        4'd2: pcSel = 1;  //JAL
        4'd3: pcSel = 1;  //JALR
        4'd4: pcSel = pcSel_Bformat; //B-format
        4'd5: pcSel = 0;  //L-format
        4'd6: pcSel = 0;  //S-format
        4'd7: pcSel = 0;  //I-format
        4'd8: pcSel = 0;  //R-format
        default: pcSel = 0;
    endcase
end
//For opImm 
logic [2:0] opImm;
logic [2:0] opImm_Iformat;
always @(*) begin
    case (func3)
        3'b001: opImm_Iformat = 3'b001;
        3'b101: opImm_Iformat = 3'b001;
        default: opImm_Iformat = 3'b000;      //dont care because 
    endcase
end
always @(*) begin
    case (formatCode)
        4'd0: opImm = 3'b101;  //LUI
        4'd1: opImm = 3'b101;  //AUIPC
        4'd2: opImm = 3'b100;  //JAL
        4'd3: opImm = 3'b000;  //JALR
        4'd4: opImm = 3'b011; //B-format
        4'd5: opImm = 3'b000;  //L-format
        4'd6: opImm = 3'b010;  //S-format
        4'd7: opImm = opImm_Iformat;  //I-format
        4'd8: opImm = 3'b000;  //R-format
        default: opImm = 3'b000;
    endcase
end
//For br_unsigned
logic brUnsign;
logic brUnsign_BFormat;
always @(*) begin
    case (func3)
        3'b110: brUnsign_BFormat = 1'b1;
        3'b111: brUnsign_BFormat = 1'b1;
        default: brUnsign_BFormat = 1'b0; //dont care because I type full func3
    endcase
end
always @(*) begin
    case (formatCode)
        4'd0: brUnsign = 1'b0;  //LUI
        4'd1: brUnsign = 1'b0;  //AUIPC
        4'd2: brUnsign = 1'b0;  //JAL
        4'd3: brUnsign = 1'b0;  //JALR
        4'd4: brUnsign = brUnsign_BFormat; //B-format
        4'd5: brUnsign = 1'b0;  //L-format
        4'd6: brUnsign = 1'b0;  //S-format
        4'd7: brUnsign = 1'b0;  //I-format
        4'd8: brUnsign = 1'b0;  //R-format
        default: brUnsign = 1'b0;
    endcase
end
//For opa_sel
logic opASel;
always @(*) begin
    case (formatCode)
        4'd0: opASel = 1'b0; //LUI
        4'd1: opASel = 1'b1; //AUIPC
        4'd2: opASel = 1'b1; //JAL
        4'd3: opASel = 1'b0; //JALR
        4'd4: opASel = 1'b1; //B-format
        4'd5: opASel = 1'b0; //L-format
        4'd6: opASel = 1'b0; //S-format
        4'd7: opASel = 1'b0; //I-format
        4'd8: opASel = 1'b0; //R-format
        default: opASel = 1'b0;
    endcase
end
//For opb_sel
logic opBSel;
always @(*) begin
    case (formatCode)
        4'd0: opBSel = 1'b1; //LUI
        4'd1: opBSel = 1'b1; //AUIPC
        4'd2: opBSel = 1'b1; //JAL
        4'd3: opBSel = 1'b1; //JALR
        4'd4: opBSel = 1'b1; //B-format
        4'd5: opBSel = 1'b1; //L-format
        4'd6: opBSel = 1'b1; //S-format
        4'd7: opBSel = 1'b1; //I-format
        4'd8: opBSel = 1'b0; //R-format
        default: opBSel = 1'b0;
    endcase
end
//For alu opcode
logic [3:0] aluOp;
logic [3:0] aluOp_IFormat;
logic [3:0] aluOp_RFormat;
always @(*) begin
    case (func3)
        3'b000: begin
            if(!specialBit) begin 
                aluOp_RFormat = 4'b0000; //add
            end else begin 
                aluOp_RFormat = 4'b0001; //sub
            end 
            aluOp_IFormat = 4'b0000; //0 ADD
        end
        3'b001: begin 
            aluOp_IFormat = 4'b0111; //7 SLL
            aluOp_RFormat = 4'b0111; //7 SLL
        end
        3'b010: begin 
            aluOp_IFormat = 4'b0010; //2 SLT
            aluOp_RFormat = 4'b0010; //2 SLT
        end
        3'b011: begin 
            aluOp_IFormat = 4'b0011; //3 SLTU
            aluOp_RFormat = 4'b0011; //3 SLTU
        end
        3'b100: begin 
            aluOp_IFormat = 4'b0100; //4 XOR
            aluOp_RFormat = 4'b0100; //4 XOR
        end
        3'b101: begin 
            if(!specialBit) begin 
                aluOp_IFormat = 4'b1000; //8 SRL
                aluOp_RFormat = 4'b1000; //8 SRL
            end else begin 
                aluOp_IFormat = 4'b1001; //9 SRA
                aluOp_RFormat = 4'b1001; //9 SRA
            end
        end
        3'b110: begin 
            aluOp_IFormat = 4'b0101; //5 OR
            aluOp_RFormat = 4'b0101; //5 OR
        end
        3'b111: begin 
            aluOp_IFormat = 4'b0110; //6 AND
            aluOp_RFormat = 4'b0110; //6 AND
        end
        default: begin 
            aluOp_IFormat = 4'b0000; 
            aluOp_RFormat = 4'b0000; 
        end
    endcase
end
always @(*) begin
    case (formatCode)
        4'd0: aluOp = 4'b1010; //LUI
        4'd1: aluOp = 4'b0000; //AUIPC
        4'd2: aluOp = 4'b0000; //JAL
        4'd3: aluOp = 4'b0000; //JALR
        4'd4: aluOp = 4'b0000; //B-format
        4'd5: aluOp = 4'b0000; //L-format
        4'd6: aluOp = 4'b0000; //S-format
        4'd7: aluOp = aluOp_IFormat; //I-format
        4'd8: aluOp = aluOp_RFormat; //R-format
        default: aluOp = 4'b0000;
    endcase
end
//For mem_wr
logic memWrEnable;
always @(*) begin
    case (formatCode)
        4'd0: memWrEnable = 1'b0; //LUI
        4'd1: memWrEnable = 1'b0; //AUIPC
        4'd2: memWrEnable = 1'b0; //JAL
        4'd3: memWrEnable = 1'b0; //JALR
        4'd4: memWrEnable = 1'b0; //B-format
        4'd5: memWrEnable = 1'b0; //L-format
        4'd6: memWrEnable = 1'b1; //S-format
        4'd7: memWrEnable = 1'b0; //I-format
        4'd8: memWrEnable = 1'b0; //R-format
        default: memWrEnable = 1'b0;
    endcase
end
//for wb_sel
logic [1:0] wbSel;
always @(*) begin
    case (formatCode)
        4'd0: wbSel = 2'b00; //LUI
        4'd1: wbSel = 2'b00; //AUIPC
        4'd2: wbSel = 2'b01; //JAL
        4'd3: wbSel = 2'b01; //JALR
        4'd4: wbSel = 2'b00; //B-format
        4'd5: wbSel = 2'b10; //L-format
        4'd6: wbSel = 2'b00; //S-format
        4'd7: wbSel = 2'b00; //I-format
        4'd8: wbSel = 2'b00; //R-format
        default: wbSel = 2'b00;
    endcase
end
//for rd_Wr_Enable
logic rdWrEnable;
always @(*) begin
    case (formatCode)
        4'd0: rdWrEnable = 1'b1; //LUI
        4'd1: rdWrEnable = 1'b1; //AUIPC
        4'd2: rdWrEnable = 1'b1; //JAL
        4'd3: rdWrEnable = 1'b1; //JALR
        4'd4: rdWrEnable = 1'b0; //B-format
        4'd5: rdWrEnable = 1'b1; //L-format
        4'd6: rdWrEnable = 1'b0; //S-format
        4'd7: rdWrEnable = 1'b1; //I-format
        4'd8: rdWrEnable = 1'b1; //R-format
        default: rdWrEnable = 1'b0;
    endcase
end
//For mask memory
logic [4:0] mask;
logic [4:0] mask_LSformat; 
always @(*) begin
    case (func3)
        3'b000: mask_LSformat = 5'b00001;
        3'b001: mask_LSformat = 5'b00011;
        3'b010: mask_LSformat = 5'b01111;
        3'b100: mask_LSformat = 5'b10001;
        3'b101: mask_LSformat = 5'b10011;
        default: mask_LSformat = 5'b00000;
    endcase
end
always @(*) begin
    case (formatCode)
        4'd0: mask = 5'b00000; //LUI
        4'd1: mask = 5'b00000; //AUIPC
        4'd2: mask = 5'b00000; //JAL
        4'd3: mask = 5'b00000; //JALR
        4'd4: mask = 5'b00000; //B-format
        4'd5: mask = mask_LSformat; //L-format
        4'd6: mask = mask_LSformat; //S-format
        4'd7: mask = 5'b00000; //I-format
        4'd8: mask = 5'b00000; //R-format
        default: mask = 5'b00000;
    endcase
end
//insn validation gen
//check jalr func3
logic jalrFunc3Vld;
always @(*) begin
    case (func3)
        3'b000: jalrFunc3Vld = 1'b1; 
        default: jalrFunc3Vld = 1'b0;
    endcase
end
logic bTypeFuncVld;
always @(*) begin
    case (func3)
        3'b000: bTypeFuncVld = 1'b1;
        3'b001: bTypeFuncVld = 1'b1;
        3'b100: bTypeFuncVld = 1'b1;
        3'b101: bTypeFuncVld = 1'b1;
        3'b110: bTypeFuncVld = 1'b1;
        3'b111: bTypeFuncVld = 1'b1;
        default: bTypeFuncVld = 1'b0; //undefind with opcode B-format
    endcase
end
logic iTypefuncVld;
always @(*) begin
    case (func3)
        3'b001: begin 
            if(i_inst[31:25] === 7'd0) begin
                iTypefuncVld = 1'b1;
            end else begin 
                iTypefuncVld = 1'b0;
            end
        end 
        3'b101: begin 
            if(i_inst[31] | i_inst[29] | i_inst[28] | i_inst[27] | i_inst[26] | i_inst[25]) begin 
                iTypefuncVld = 1'b0;
            end else begin 
                iTypefuncVld = 1'b1;
            end
        end
        default: iTypefuncVld = 1'b1;
    endcase
end
logic rTypeFuncVald;
always @(*) begin
    case (func3)
        3'b000: begin 
            if(i_inst[31] | i_inst[29] | i_inst[28] | i_inst[27] | i_inst[26] | i_inst[25]) begin 
                rTypeFuncVald = 1'b0;
            end else begin 
                rTypeFuncVald = 1'b1;
            end
        end
        3'b101: begin 
            if(i_inst[31] | i_inst[29] | i_inst[28] | i_inst[27] | i_inst[26] | i_inst[25]) begin 
                rTypeFuncVald = 1'b0;
            end else begin 
                rTypeFuncVald = 1'b1;
            end
        end 
        default: begin 
            if(i_inst[31:25] === 7'd0) begin
                rTypeFuncVald = 1'b1;
            end else begin 
                rTypeFuncVald = 1'b0;
            end
        end
    endcase
end
logic lTypeFuncVld;
always @(*) begin
    case (func3)
        3'b000: lTypeFuncVld = 1'b1;
        3'b001: lTypeFuncVld = 1'b1;
        3'b010: lTypeFuncVld = 1'b1;
        3'b100: lTypeFuncVld = 1'b1; 
        3'b101: lTypeFuncVld = 1'b1;
        default: lTypeFuncVld = 1'b0;
    endcase
end
logic sTypeFuncVld;
always @(*) begin
    case (func3)
        3'b000: sTypeFuncVld = 1'b1; 
        3'b001: sTypeFuncVld = 1'b1; 
        3'b010: sTypeFuncVld = 1'b1; 
        default: sTypeFuncVld = 1'b0;
    endcase
end
always @(*) begin
    case (formatCode)
        4'd0: o_insn_vld = 1'b1; //LUI
        4'd1: o_insn_vld = 1'b1; //AUIPC
        4'd2: o_insn_vld = 1'b1; //JAL
        4'd3: o_insn_vld = jalrFunc3Vld; //JALR
        4'd4: o_insn_vld = bTypeFuncVld; //B-format
        4'd5: o_insn_vld = lTypeFuncVld; //L-format
        4'd6: o_insn_vld = sTypeFuncVld; //S-format
        4'd7: o_insn_vld = iTypefuncVld; //I-format
        4'd8: o_insn_vld = rTypeFuncVald; //R-format
        default: o_insn_vld = 1'b0; //undefine opcode
    endcase
end
//Assign signal
assign o_pcSel = pcSel;
assign o_opImm = opImm;
assign o_brUnsigned =  brUnsign;
assign o_opaSel = opASel;
assign o_opbSel = opBSel;
assign o_aluOp = aluOp;
assign o_memWrEnable = memWrEnable;
assign o_wbSel =  wbSel;
assign o_rdWrEnable = rdWrEnable;
assign o_mask = mask;
endmodule
