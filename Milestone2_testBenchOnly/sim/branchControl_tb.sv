`timescale 1ns/1ps

module branchControl_tb;

    // Khai báo biến kiểm thử
    logic  [31:0] i_rs1Data;
    logic  [31:0] i_rs2Data;
    logic         i_brUnsign;
    logic        o_brLess;
    logic        o_brEqual;
    // Khởi tạo module DUT (Device Under Test)
    branchControl uut (
        .i_rs1Data(i_rs1Data),
        .i_rs2Data(i_rs2Data),
        .i_brUnsign(i_brUnsign),
        .o_brLess(o_brLess),
        .o_brEqual(o_brEqual)
    );

    // Task kiểm tra kết quả
    task check_result;
        input expected_brLess, expected_brEqual;
    begin
        if (o_brLess === expected_brLess && o_brEqual === expected_brEqual) begin
            $display("[Passed] at Time=%0t | rs1=%h, rs2=%h, brUnsign=%b -> brLess=%b, brEqual=%b",
                      $time, i_rs1Data, i_rs2Data, i_brUnsign, o_brLess, o_brEqual);
        end else begin
            $display("[Failed] at Time=%0t | rs1=%h, rs2=%h, brUnsign=%b -> brLess=%b, brEqual=%b (Expected brLess=%b, brEqual=%b)",
                      $time, i_rs1Data, i_rs2Data, i_brUnsign, o_brLess, o_brEqual, expected_brLess, expected_brEqual);
        end
    end
    endtask

    // Quá trình kiểm thử
    initial begin
        $display("Starting testbench...");
        //$monitor("Time=%0t | rs1=%h, rs2=%h, brUnsign=%b -> brLess=%b, brEqual=%b", 
        //          $time, i_rs1Data, i_rs2Data, i_brUnsign, o_brLess, o_brEqual);

        // TH1: Hai số bằng nhau -> o_brEqual = 1, o_brLess = 0
        i_rs1Data  = 32'h00000010;
        i_rs2Data  = 32'h00000010;
        i_brUnsign = 1'b0;
        #10;
        check_result(0, 1);

        // TH1: Hai số bằng nhau -> o_brEqual = 1, o_brLess = 0
        i_rs1Data  = 32'hc00f0a10;
        i_rs2Data  = 32'hc00f0a10;
        i_brUnsign = 1'b0;
        #10;
        check_result(0, 1);

        // TH1: Hai số bằng nhau -> o_brEqual = 1, o_brLess = 0
        i_rs1Data  = 32'hca0f0a10;
        i_rs2Data  = 32'hca0f0a10;
        i_brUnsign = 1'b0;
        #10;
        check_result(0, 1);

        // TH1: Hai số bằng nhau -> o_brEqual = 1, o_brLess = 0
        i_rs1Data  = 32'hca0fba10;
        i_rs2Data  = 32'hca0fba10;
        i_brUnsign = 1'b1;
        #10;
        check_result(0, 1);

        // TH2: rs1 nhỏ hơn rs2 (signed) -> o_brLess = 1
        i_rs1Data  = 32'hFFFFFFF0; // -16 (signed)
        i_rs2Data  = 32'h00000010; // 16 (signed)
        i_brUnsign = 1'b0;
        #10;
        check_result(1, 0);

        // TH2: rs1 nhỏ hơn rs2 (signed) -> o_brLess = 1
        i_rs1Data  = 32'hFFFF0FF0; // -16 (signed)
        i_rs2Data  = 32'h10000010; // 16 (signed)
        i_brUnsign = 1'b0;
        #10;
        check_result(1, 0);

        // TH2: rs1 nhỏ hơn rs2 (signed) -> o_brLess = 1
        i_rs1Data  = 32'hFFab0FF0; // -16 (signed)
        i_rs2Data  = 32'h00000000; // 16 (signed)
        i_brUnsign = 1'b0;
        #10;
        check_result(1, 0);

        // TH3: rs1 lớn hơn rs2 (signed) -> o_brLess = 0
        i_rs1Data  = 32'h00000020; // 32
        i_rs2Data  = 32'h00000010; // 16
        i_brUnsign = 1'b0;
        #10;
        check_result(0, 0);

        // TH3: rs1 lớn hơn rs2 (signed) -> o_brLess = 0
        i_rs1Data  = 32'h10a00020; // 32
        i_rs2Data  = 32'h10900010; // 16
        i_brUnsign = 1'b0;
        #10;
        check_result(0, 0);

        // TH3: rs1 lớn hơn rs2 (signed) -> o_brLess = 0
        i_rs1Data  = 32'h8fa00020; // -18e8
        i_rs2Data  = 32'h80b00010; // -21e8
        i_brUnsign = 1'b0;
        #10;
        check_result(0, 0);

        // TH3: rs1 lớn hơn rs2 (signed) -> o_brLess = 0
        i_rs1Data  = 32'h00000000; // 0
        i_rs2Data  = 32'hffffffff; // -1
        i_brUnsign = 1'b0;
        #10;
        check_result(0, 0);

        // TH4: rs1 nhỏ hơn rs2 (unsigned) -> o_brLess = 1
        i_rs1Data  = 32'h00000010; // 16 (unsigned)
        i_rs2Data  = 32'h80000000; // 2147483648 (unsigned)
        i_brUnsign = 1'b1;
        #10;
        check_result(1, 0);

        i_rs1Data  = 32'h7fff0000; // 16 (unsigned)
        i_rs2Data  = 32'h80000000; // 2147483648 (unsigned)
        i_brUnsign = 1'b1;
        #10;
        check_result(1, 0);

        i_rs1Data  = 32'h7fff0000; // 16 (unsigned)
        i_rs2Data  = 32'hff000000; // 2147483648 (unsigned)
        i_brUnsign = 1'b1;
        #10;
        check_result(1, 0);

        i_rs1Data  = 32'hf0ff0000; // 16 (unsigned)
        i_rs2Data  = 32'hf1000000; // 2147483648 (unsigned)
        i_brUnsign = 1'b1;
        #10;
        check_result(1, 0);

        // TH5: rs1 lớn hơn rs2 (unsigned) -> o_brLess = 0
        i_rs1Data  = 32'h80000000; // 2147483648 (unsigned)
        i_rs2Data  = 32'h00000010; // 16 (unsigned)
        i_brUnsign = 1'b1;
        #10;
        check_result(0, 0);

        // TH5: rs1 lớn hơn rs2 (unsigned) -> o_brLess = 0
        i_rs1Data  = 32'h000a0000; // 2147483648 (unsigned)
        i_rs2Data  = 32'h0009ff10; // 16 (unsigned)
        i_brUnsign = 1'b1;
        #10;
        check_result(0, 0);

        // TH6: Hai số âm, rs1 nhỏ hơn rs2 (signed) -> o_brLess = 1
        i_rs1Data  = 32'hFFFFFF00; // -256
        i_rs2Data  = 32'hFFFFFF10; // -240
        i_brUnsign = 1'b0;
        #10;
        check_result(1, 0);

        // TH6: Hai số âm, rs1 nhỏ hơn rs2 (signed) -> o_brLess = 1
        i_rs1Data  = 32'hFFF0FF00; // -256
        i_rs2Data  = 32'hFFF7FF10; // -240
        i_brUnsign = 1'b0;
        #10;
        check_result(1, 0);

        // TH6: Hai số âm, rs1 nhỏ hơn rs2 (signed) -> o_brLess = 1
        i_rs1Data  = 32'hF0F0FF00; // -256
        i_rs2Data  = 32'hF1F7FF10; // -240
        i_brUnsign = 1'b0;
        #10;
        check_result(1, 0);

        // TH6: Hai số âm, rs1 nhỏ hơn rs2 (signed) -> o_brLess = 1
        i_rs1Data  = 32'h7eF0FF00; // -256
        i_rs2Data  = 32'h7FF7FF10; // -240
        i_brUnsign = 1'b0;
        #10;
        check_result(1, 0);

        // TH7: Hai số âm, rs1 lớn hơn rs2 (signed) -> o_brLess = 0
        i_rs1Data  = 32'hFFFFFF10; // -240
        i_rs2Data  = 32'hFFFFFF00; // -256
        i_brUnsign = 1'b0;
        #10;
        check_result(0, 0);

        // TH7: Hai số âm, rs1 lớn hơn rs2 (signed) -> o_brLess = 0
        i_rs1Data  = 32'hFF5FFF10; // -240
        i_rs2Data  = 32'hFF4FFF00; // -256
        i_brUnsign = 1'b0;
        #10;
        check_result(0, 0);

        // TH7: Hai số âm, rs1 lớn hơn rs2 (signed) -> o_brLess = 0
        i_rs1Data  = 32'hF05FFF10; // -240
        i_rs2Data  = 32'heF4FFF00; // -256
        i_brUnsign = 1'b0;
        #10;
        check_result(0, 0);

        // Kết thúc kiểm thử
        $display("Testbench completed. All tests executed.");
        $finish;
    end

endmodule
