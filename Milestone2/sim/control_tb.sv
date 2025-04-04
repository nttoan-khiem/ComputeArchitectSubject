`timescale 1ns / 1ps

module control_tb;

    // Input và output của module control
    logic [31:0] i_inst; //input
    logic i_brlLess; //input
    logic i_brEqual; //input
    logic o_pcSel; 
    logic [2:0] o_opImm;
    logic o_brUnsigned;
    logic o_opaSel;
    logic o_opbSel;
    logic [3:0] o_aluOp;
    logic o_memWrEnable;
    logic [1:0] o_wbSel;
    logic o_rdWrEnable;
    logic [4:0] o_mask;
    logic o_insn_vld;
    // Instance module control
    control uut (
        .i_inst(i_inst),
        .i_brlLess(i_brlLess),
        .i_brEqual(i_brEqual),
        .o_pcSel(o_pcSel),
        .o_opImm(o_opImm),
        .o_brUnsigned(o_brUnsigned),
        .o_opaSel(o_opaSel),
        .o_opbSel(o_opbSel),
        .o_aluOp(o_aluOp),
        .o_memWrEnable(o_memWrEnable),
        .o_wbSel(o_wbSel),
        .o_rdWrEnable(o_rdWrEnable),
        .o_mask(o_mask),
        .o_insn_vld(o_insn_vld)
    );

    // Task để hiển thị kết quả
    task testCase;
        input expected_pcSel;
        input [2:0] expected_opImm;
        input expected_brUnsigned;
        input expected_opaSel;
        input expected_opbSel;
        input [3:0] expected_aluOp;
        input expected_memWrEnable;
        input [1:0] expected_wbSel;
        input expected_rdWrEnable;
        input [4:0] expected_mask;
        begin
            if (o_pcSel === expected_pcSel && 
                o_opImm === expected_opImm && 
                o_brUnsigned === expected_brUnsigned &&
                o_opaSel === expected_opaSel && 
                o_opbSel === expected_opbSel && 
                o_aluOp === expected_aluOp && 
                o_memWrEnable === expected_memWrEnable && 
                o_wbSel === expected_wbSel && 
                o_rdWrEnable === expected_rdWrEnable && 
                o_mask === expected_mask) 
                $display("PASS: i_inst=0x%h", i_inst);
            else begin 
                if(o_pcSel != expected_pcSel) $display("Fail: i_inst=0x%h, wrong PC_SEL = %h but expect: %h", i_inst, o_pcSel, expected_pcSel);
                if(o_opImm != expected_opImm) $display("Fail: i_inst=0x%h, wrong OpImm = %h but expect: %h", i_inst, o_opImm, expected_opImm);
                if(o_brUnsigned != expected_brUnsigned) $display("Fail: i_inst=0x%h, wrong BR_UNSIGN = %h but expect: %h", i_inst, o_brUnsigned, expected_brUnsigned);
                if(o_opaSel != expected_opaSel) $display("Fail: i_inst=0x%h, wrong SEL_OPA = %h but expect: %h", i_inst, o_opaSel, expected_opaSel);
                if(o_opbSel != expected_opbSel) $display("Fail: i_inst=0x%h, wrong SEL_OPB = %h but expect: %h", i_inst, o_opbSel, expected_opbSel);
                if(o_aluOp != expected_aluOp) $display("Fail: i_inst=0x%h, wrong ALU_OP = %h but expect: %h", i_inst, o_aluOp, expected_aluOp);
                if(o_memWrEnable != expected_memWrEnable) $display("Fail: i_inst=0x%h, wrong WR_MEM = %h but expect: %h", i_inst, o_memWrEnable, expected_memWrEnable);
                if(o_wbSel != expected_wbSel) $display("Fail: i_inst=0x%h, wrong WB_SEL = %h but expect: %h", i_inst, o_wbSel, expected_wbSel);
                if(o_rdWrEnable != expected_rdWrEnable) $display("Fail: i_inst=0x%h, wrong WR_RD = %h but expect: %h", i_inst, o_rdWrEnable, expected_rdWrEnable);
                if(o_mask != expected_mask) $display("Fail: i_inst=0x%h, wrong MEM_MASK = %h but expect: %h", i_inst, o_mask, expected_mask);
            end
            if(o_insn_vld == 1'b1) begin 
                $display("--inst_valid--");   
            end else begin 
                $display("--inst_[Invalid]-- inst = %b", i_inst);
            end
            $display("------------------------------------------------");    
        end
    endtask

    // Testbench main logic
    initial begin
        $display("Starting control Testbench...");
        //Test: 0 Assamply: lui x1, 1000
        #10 i_inst <= 32'h003e80b7;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b101, 1'b0, 1'b0, 1'b1, 4'b1010, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 1 Assamply: lui x5, -1100
        #10 i_inst <= 32'hffbb42b7;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b101, 1'b0, 1'b0, 1'b1, 4'b1010, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 2 Assamply: auipc x3, 5000
        #10 i_inst <= 32'h01388197;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b101, 1'b0, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 3 Assamply: auipc x18, -23000
        #10 i_inst <= 32'hfa628917;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b0, 3'b101, 1'b0, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 4 Assamply: jal x5, 10000
        #10 i_inst <= 32'h710022ef;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b1, 3'b100, 1'b0, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b01, 1'b1, 5'b00000);

        //Test: 5 Assamply: jal x30, -10000
        #10 i_inst <= 32'h8f1fdf6f;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b1, 3'b100, 1'b0, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b01, 1'b1, 5'b00000);

        //Test: 6 Assamply: jalr x6, 1000(x2)
        #10 i_inst <= 32'h3e810367;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b1, 3'b000, 1'b0, 1'b0, 1'b1, 4'b0000, 1'b0, 2'b01, 1'b1, 5'b00000);

        //Test: 7 Assamply: jalr x13, -1000(x31)
        #10 i_inst <= 32'hc18f86e7;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b1, 3'b000, 1'b0, 1'b0, 1'b1, 4'b0000, 1'b0, 2'b01, 1'b1, 5'b00000);

        //Test: 8 Assamply: beq x1, x2, 4000
        #10 i_inst <= 32'h7a2080e3;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b1, 3'b011, 1'b0, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b0, 1'b0, 5'b00000);

        //Test: 9 Assamply: beq x4, x6, -2400
        #10 i_inst <= 32'hea620063;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b011, 1'b0, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b0, 1'b0, 5'b00000);

        //Test: 10 Assamply: bne x1, x7, 1232
        #10 i_inst <= 32'h4c709863;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b0;
        #1 testCase(1'b1, 3'b011, 1'b0, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b0, 1'b0, 5'b00000);

        //Test: 11 Assamply: bne x9, x30, -1732
        #10 i_inst <= 32'h93e49ee3;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b0, 3'b011, 1'b0, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b0, 1'b0, 5'b00000);

        //Test: 12 Assamply: blt x1, x8, -2134
        #10 i_inst <= 32'hfa80c563;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b011, 1'b0, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b0, 1'b0, 5'b00000);

        //Test: 13 Assamply: blt x21, x9, 2134
        #10 i_inst <= 32'h049acbe3;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b1, 3'b011, 1'b0, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b0, 1'b0, 5'b00000);

        //Test: 14 Assamply: bge x4, x5, 1234
        #10 i_inst <= 32'h4c525963;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b1, 3'b011, 1'b0, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b0, 1'b0, 5'b00000);

        //Test: 15 Assamply: bge x4, x31, -1234
        #10 i_inst <= 32'hb3f257e3;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b0;
        #1 testCase(1'b1, 3'b011, 1'b0, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b0, 1'b0, 5'b00000);

        //Test: 16 Assamply: bge x16, x31, -1234
        #10 i_inst <= 32'hb3f857e3;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b011, 1'b0, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b0, 1'b0, 5'b00000);

        //Test: 17 Assamply: bltu x7, x9, 2614
        #10 i_inst <= 32'h2293ebe3;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b1, 3'b011, 1'b1, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b0, 1'b0, 5'b00000);

        //Test: 18 Assamply: bltu x9, x31, -2614
        #10 i_inst <= 32'hddf4e563;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b011, 1'b1, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b0, 1'b0, 5'b00000);

        //Test: 19 Assamply: bgeu x8, x16, 2312
        #10 i_inst <= 32'h110474e3;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b1, 3'b011, 1'b1, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b0, 1'b0, 5'b00000);

        //Test: 20 Assamply: bgeu x9, x15, -2312
        #10 i_inst <= 32'heef4fc63;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b0;
        #1 testCase(1'b1, 3'b011, 1'b1, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b0, 1'b0, 5'b00000);

        //Test: 21 Assamply: bgeu x9, x15, 2322
        #10 i_inst <= 32'h10f4f9e3;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b011, 1'b1, 1'b1, 1'b1, 4'b0000, 1'b0, 2'b0, 1'b0, 5'b00000);

        //Test: 22 Assamply: lb x7, 1000(x8)
        #10 i_inst <= 32'h3e840383;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b1, 4'b0000, 1'b0, 2'b10, 1'b1, 5'b00001);

        //Test: 23 Assamply: lb x17, -1000(x28)
        #10 i_inst <= 32'hc18e0883;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b1, 4'b0000, 1'b0, 2'b10, 1'b1, 5'b00001);

        //Test: 24 Assamply: lh x6, 1000(x25)
        #10 i_inst <= 32'h3e8c9303;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b1, 4'b0000, 1'b0, 2'b10, 1'b1, 5'b00011);

        //Test: 25 Assamply: lw x8, -900(x21)
        #10 i_inst <= 32'hc7caa403;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b1, 4'b0000, 1'b0, 2'b10, 1'b1, 5'b01111);

        //Test: 26 Assamply: lbu x7, 1000(x8)
        #10 i_inst <= 32'h3e844383;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b1, 4'b0000, 1'b0, 2'b10, 1'b1, 5'b10001);

        //Test: 27 Assamply: lhu x17, -1000(x31)
        #10 i_inst <= 32'hc18fd883;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b1, 4'b000, 1'b0, 2'b10, 1'b1, 5'b10011);

        //Test: 28 Assamply: sb x6, 1000(x8)
        #10 i_inst <= 32'h3e640423;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b0, 3'b010, 1'b0, 1'b0, 1'b1, 4'b0000, 1'b1, 2'b00, 1'b0, 5'b00001);

        //Test: 29 Assamply: sh x31, -2000(x15)
        #10 i_inst <= 32'h83f79823;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b0, 3'b010, 1'b0, 1'b0, 1'b1, 4'b0000, 1'b1, 2'b00, 1'b0, 5'b00011);

        //Test: 30 Assamply: sw x30, -1200(x11)
        #10 i_inst <= 32'hb5e5a823;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b010, 1'b0, 1'b0, 1'b1, 4'b0000, 1'b1, 2'b0, 1'b0, 5'b01111);

        //Test: 31 Assamply: addi x7, x9, 127
        #10 i_inst <= 32'h07f48393;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b1, 4'b0000, 1'b0, 2'b00, 1'b1, 5'b00000);

        //Test: 32 Assamply: addi x17, x9, -1270
        #10 i_inst <= 32'hb0a48893;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b1, 4'b0000, 1'b0, 2'b00, 1'b1, 5'b00000);

        //Test: 33 Assamply: slti x6, x1, 372
        #10 i_inst <= 32'h1740a313;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b1, 4'b0010, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 34 Assamply: slti x7, x31, -1720
        #10 i_inst <= 32'h948fa393;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b1, 4'b0010, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 35 Assamply: sltiu x13, x28, 1720
        #10 i_inst <= 32'h6b8e3693;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b1, 4'b0011, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 36 Assamply: xori x7, x21, 127
        #10 i_inst <= 32'h07fac393;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b1, 4'b0100, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 37 Assamply: ori x9, x25, 1127
        #10 i_inst <= 32'h467ce493;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b1, 4'b0101, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 38 Assamply: andi x8, x23, 128
        #10 i_inst <= 32'h080bf413;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b1, 4'b0110, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 39 Assamply: slli x8, x23, 12
        #10 i_inst <= 32'h00cb9413;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b001, 1'b0, 1'b0, 1'b1, 4'b0111, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 40 Assamply: srli x10, x13, 16
        #10 i_inst <= 32'h0106d513;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b0, 3'b001, 1'b0, 1'b0, 1'b1, 4'b1000, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 41 Assamply: srai x17, x1, 6
        #10 i_inst <= 32'h4060d893;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b001, 1'b0, 1'b0, 1'b1, 4'b1001, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 42 Assamply: add x1, x2, x9
        #10 i_inst <= 32'h009100b3;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b0, 4'b0000, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 43 Assamply: sub x10, x0, x31
        #10 i_inst <= 32'h41f00533;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b0, 4'b0001, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 44 Assamply: slt x7, x9, x0
        #10 i_inst <= 32'h0004a3b3;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b0, 4'b0010, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 45 Assamply: sltu x17, x31, x1
        #10 i_inst <= 32'h001fb8b3;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b0, 4'b0011, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 46 Assamply: xor x17, x11, x1
        #10 i_inst <= 32'h0015c8b3;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b0, 4'b0100, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 47 Assamply: or x7, x17, x5
        #10 i_inst <= 32'h0058e3b3;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b0, 4'b0101, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 48 Assamply: and x7, x17, x5
        #10 i_inst <= 32'h0058f3b3;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b0, 4'b0110, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 49 Assamply: sll x4, x27, x1
        #10 i_inst <= 32'h001d9233;
        i_brlLess <= 1'b1;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b0, 4'b0111, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 50 Assamply: srl x4, x7, x7
        #10 i_inst <= 32'h0073d233;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b1;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b0, 4'b1000, 1'b0, 2'b0, 1'b1, 5'b00000);

        //Test: 51 Assamply: sra x5, x17, x27
        #10 i_inst <= 32'h41b8d2b3;
        i_brlLess <= 1'b0;
        i_brEqual <= 1'b0;
        #1 testCase(1'b0, 3'b000, 1'b0, 1'b0, 1'b0, 4'b1001, 1'b0, 2'b0, 1'b1, 5'b00000);
        $stop;
    end

endmodule