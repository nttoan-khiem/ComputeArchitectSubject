module controlHardzard(
    input logic [31:0] inst,
    input logic [31:0] inst_s1,
    input logic [31:0] inst_s2,
    input logic [31:0] inst_s3,
    input logic [31:0] inst_s4,
    input logic branch,
    input logic e_wrReg1, e_wrReg2, e_wrReg3, e_wrReg4,
    output logic pipe_continue,
    output logic pipe_passS1, pipe_passS2, pipe_passS3, pipe_passS4,
    output logic pipe_clearStateFet,
    output logic pipe_clearStateID,
    output logic pipe_clearStateEX,
    output logic pipe_clearStateMem
);
logic [6:0] opcode0;
assign opcode0 = inst[6:0];
logic [6:0] opcode1;
assign opcode1 = inst_s1[6:0];
logic [6:0] opcode2;
assign opcode2 = inst_s2[6:0];
logic [6:0] opcode3;
assign opcode3 = inst_s3[6:0];
logic [6:0] opcode4;
assign opcode4 = inst_s4[6:0];
logic [4:0] rd0;
assign rd0 = inst[11:7];
logic [4:0] rd1;
assign rd1 = inst_s1[11:7];
logic [4:0] rd2;
assign rd2 = inst_s2[11:7];
logic [4:0] rd3;
assign rd3 = inst_s3[11:7];
logic [4:0] rd4;
assign rd4 = inst_s4[11:7];
logic [4:0] rs1_0;
assign rs1_0 = inst[19:15];
logic [4:0] rs1_1;
assign rs1_1 = inst_s1[19:15];
logic [4:0] rs1_2;
assign rs1_2 = inst_s2[19:15];
logic [4:0] rs1_3;
assign rs1_3 = inst_s3[19:15];
logic [4:0] rs1_4;
assign rs1_4 = inst_s4[19:15];
logic [4:0] rs2_0;
assign rs2_0 = inst[24:0];
logic [4:0] rs2_1;
assign rs2_1 = inst_s1[24:0];
logic [4:0] rs2_2;
assign rs2_2 = inst_s2[24:0];
logic [4:0] rs2_3;
assign rs2_3 = inst_s3[24:0];
logic [4:0] rs2_4;
assign rs2_4 = inst_s4[24:0];

always @(*) begin
    if( (((rd2 == rs1_1)&e_wrReg2)|
         ((rd3 == rs1_1)&e_wrReg3)|
         ((rd4 == rs1_1)&e_wrReg4)
        )&
        ((opcode1 == 7'b1100111)|
         (opcode1 == 7'b1100011)|
         (opcode1 == 7'b0000011)|
         (opcode1 == 7'b0100011)|
         (opcode1 == 7'b0010011)|
         (opcode1 == 7'b0110011)
        )
    ) begin 
        pipe_continue = 0; //stop update pc
        pipe_passS1 = 0; //stall at inst 1
        pipe_passS2 = 1; //not stall
        pipe_passS3 = 1; //not stall 
        pipe_passS4 = 1; //not stall
        pipe_clearStateFet = 0; //not clear        
        pipe_clearStateID = 1; //clear
        pipe_clearStateEX = 0;
        pipe_clearStateMem = 0;   
    end
    else if( (((rd2 == rs2_1)&e_wrReg2)|
              ((rd3 == rs2_1)&e_wrReg3)|
              ((rd4 == rs2_1)&e_wrReg4)
             )&
            ((opcode1 == 7'b1100011)|  //check opcode using rs2
            (opcode1 == 7'b0100011)|
            (opcode1 == 7'b0110011)
            )
    )begin 
        pipe_continue = 0; //stop update pc
        pipe_passS1 = 0; //stall at inst 1
        pipe_passS2 = 1; //not stall
        pipe_passS3 = 1; //not stall 
        pipe_passS4 = 1; //not stall
        pipe_clearStateFet = 0; //not clear        
        pipe_clearStateID = 1; //clear
        pipe_clearStateEX = 0;
        pipe_clearStateMem = 0;   
    end
    else if(branch) begin 
        pipe_continue = 1; //still update pc
        pipe_passS1 = 1; //not stall
        pipe_passS2 = 1; //not stall
        pipe_passS3 = 1; //not stall 
        pipe_passS4 = 1; //not stall
        pipe_clearStateFet = 1; //clear        
        pipe_clearStateID = 1; //clear
        pipe_clearStateEX = 1; //clear
        pipe_clearStateMem = 0; //not clear
    end
end

endmodule