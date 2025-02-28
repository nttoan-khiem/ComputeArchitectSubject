`timescale 1ns/1ps

module genImm_tb;

    // Input và output của module genImm
    logic [31:0] i_instruction;
    logic [2:0] i_operation;
    logic [31:0] o_imm;

    // Instance module genImm
    genImm uut (
        .i_instruction(i_instruction),
        .i_operation(i_operation),
        .o_imm(o_imm)
    );

    // Task để hiển thị kết quả
    task display_result;
        input [31:0] expected_imm;
        input [31:0] imm_gen;
        begin
            if (o_imm === expected_imm)
                $display("PASS: i_instruction=0x%h, i_operation=%b, o_imm=0x%h", i_instruction, i_operation, o_imm);
            else
                $display("FAIL: i_instruction=0x%h, i_operation=%b, o_imm=0x%h (expected: 0x%h)", i_instruction, i_operation, o_imm, expected_imm);
        end
    endtask

    // Testbench main logic
    initial begin
        $display("Starting genImm Testbench...");
        /*
        // Case 3'b000: I-type immediate
        i_instruction = 32'hFFF0A123; // I-type instruction
        i_operation = 3'b000; // I-type immediate
        #10;
        display_result(32'hFFFFF0A1); // Expected I-type immediate (sign-extended)

        // Case 3'b001: I-type immediate (shamt)
        i_instruction = 32'h000F8123; // I-type instruction with shift amount
        i_operation = 3'b001; // I-type immediate (shamt)
        #10;
        display_result(32'h0000000F); // Expected shamt immediate (sign-extended)

        // Case 3'b010: S-type immediate
        i_instruction = 32'hF00FF123; // S-type instruction
        i_operation = 3'b010; // S-type immediate
        #10;
        display_result(32'hFFFFF00F); // Expected S-type immediate (sign-extended)

        // Case 3'b011: B-type immediate
        i_instruction = 32'h8007F123; // B-type instruction
        i_operation = 3'b011; // B-type immediate
        #10;
        display_result(32'hFFFFF00E); // Expected B-type immediate (sign-extended)

        // Case 3'b100: JAL immediate
        i_instruction = 32'hFE00F123; // JAL instruction
        i_operation = 3'b100; // JAL immediate
        #10;
        display_result(32'hFFFFE01E); // Expected JAL immediate (sign-extended)

        // Case 3'b101: U-type immediate
        i_instruction = 32'hABCD1234; // U-type instruction
        i_operation = 3'b101; // U-type immediate
        #10;
        display_result(32'hABCD1000); // Expected U-type immediate (upper 20 bits, lower 12 bits are 0)

        // Trường hợp mặc định (Khi i_operation không xác định)
        i_instruction = 32'h12345678; // Một giá trị ngẫu nhiên
        i_operation = 3'b111; // Giá trị không xác định
        #10;
        display_result(32'h12345678); // Expected default to I-type immediate (giữ nguyên nếu không xác định)

        $display("Testbench completed.");
        $stop;
        */
        //I-type addi x3, x4, 10
        $display("Test I-TYPE");
        i_instruction <= 32'h00a28213; //addi x4, x3, 10
        i_operation <= 3'b000;
        #1 display_result(32'd10, o_imm);
        #1 i_instruction <= 32'hff028213; //addi x4, x3, -16
        i_operation <= 3'b000;
        #1 display_result(-32'd16, o_imm);
        #1 i_instruction <= 32'h00425193; //srli x3, x4, 4
        i_operation <= 3'b001;
        #1 display_result(32'd4, o_imm);
        #1 i_instruction <= 32'h40525193; //srla x3, x4, 5
        i_operation <= 3'b001;
        #1 display_result(32'd5, o_imm);
        #1 i_instruction <= 32'h00f11093; //slli x1, x2, 15
        i_operation <= 3'b001;
        #1 display_result(32'd15, o_imm);
        //-------Load type-----------
        $display("Test LOAD INSTRUCMENT-TYPE");
        #1 i_instruction <= 32'h00510083; //lb x1, 5(x2)
        i_operation <= 3'b000;
        #1 display_result(32'd5, o_imm);
        #1 i_instruction <= 32'hf4c7a403; //lw x8, -180(x15)
        i_operation <= 3'b000;
        #1 display_result(-32'd180, o_imm);
        //------------STORE-type---------
        $display("Test S-TYPE");
        #1 i_instruction <= 32'h06110223; //sb x1, 100(x2)
        i_operation <= 3'b010;
        #1 display_result(32'd100, o_imm);
        #1 i_instruction <= 32'h801129a3; //sw x1, -2029(x2)
        i_operation <= 3'b010;
        #1 display_result(-32'd2029, o_imm);
        //------------B-format----------
        $display("Test B-TYPE");
        #1 i_instruction <= 32'h00209463; //bne x1, x2, 8
        i_operation <= 3'b011;
        #1 display_result(32'd8, o_imm);
        #1 i_instruction <= 32'h7a2090e3; //bne x1, x2, 4000
        i_operation <= 3'b011;
        #1 display_result(32'd4000, o_imm);
        #1 i_instruction <= 32'h86209063; //bne x1, x2, -4000
        i_operation <= 3'b011;
        #1 display_result(-32'd4000, o_imm);
        #1 i_instruction <= 32'h82208c63; //beq x1, x2, -4040
        i_operation <= 3'b011;
        #1 display_result(-32'd4040, o_imm);
        #1 i_instruction <= 32'hb220fc63; //bgeu x1, x2, -3272
        i_operation <= 3'b011;
        #1 display_result(-32'd3272, o_imm);
        //----------JAL----------------
        $display("Test JAL-TYPE");
        #1 i_instruction <= 32'h729dc2ef; //jal x5, 905000;
        i_operation <= 3'b100;
        #1 display_result(32'd905000, o_imm);
        #1 i_instruction <= 32'hdb9222ef; //jal x5, -905800;
        i_operation <= 3'b100;
        #1 display_result(-32'd905800, o_imm);
        //----------JALR----------------
        $display("Test JALR-TYPE");
        #1 i_instruction <= 32'hf16082e7; //jalr x5, -234(x1);
        i_operation <= 3'b000;
        #1 display_result(-32'd234, o_imm);
        #1 i_instruction <= 32'h7ff082e7; //jalr x5, 2047(x1);
        i_operation <= 3'b000;
        #1 display_result(32'd2047, o_imm);
        #1 i_instruction <= 32'h418082e7; //jalr x5, 1048(x1);
        i_operation <= 3'b000;
        #1 display_result(32'd1048, o_imm);
        //----------U-format----------------
        $display("Test U-TYPE");
        #1 i_instruction <= 32'h0000a0b7; //lui x1, 10
        i_operation <= 3'b101;
        #1 display_result(32'd10 << 12, o_imm);
        #1 i_instruction <= 32'he6eb20b7; //lui x1, -102734
        i_operation <= 3'b101;
        #1 display_result(-32'd102734 << 12, o_imm);
        #1 i_instruction <= 32'h1a8be0b7; //lui x1, 108734
        i_operation <= 3'b101;
        #1 display_result(32'd108734 << 12, o_imm);
        #1 i_instruction <= 32'h0b67c297; //auipc x5, 46716
        i_operation <= 3'b101;
        #1 display_result(32'd46716 << 12, o_imm);
        #1 i_instruction <= 32'hf4ab0297; //auipc x5, -46416
        i_operation <= 3'b101;
        #1 display_result(-32'd46416 << 12, o_imm);
        $stop;
    end

endmodule
