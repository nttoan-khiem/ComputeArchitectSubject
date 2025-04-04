`timescale 1ns/1ps

module controlLd_tb;
    // Khai báo tín hiệu testbench
    reg [31:0] i_data;
    reg i_unsign;
    reg [3:0] i_mask;
    wire [31:0] o_data;

    // Instantiate DUT (Device Under Test)
    controlLd uut (
        .i_data(i_data),
        .i_unsign(i_unsign),
        .i_mask(i_mask),
        .o_data(o_data)
    );

    // Task kiểm tra kết quả
    task check_output;
        input [31:0] expected;
        input integer test_num;
        begin
            #10; // Chờ cập nhật giá trị
            if (o_data === expected) 
                $display("Test %0d PASSED: i_data=%h, i_unsign=%b, i_mask=%b, o_data=%h", test_num, i_data, i_unsign, i_mask, o_data);
            else 
                $display("Test %0d FAILED: i_data=%h, i_unsign=%b, i_mask=%b, o_data=%h (Expected: %h)", test_num, i_data, i_unsign, i_mask, o_data, expected);
        end
    endtask

    // Test procedure
    initial begin
        // Test case 1: Load byte sign-extended (âm)
        i_data = 32'hF4; 
        i_unsign = 0;  
        i_mask = 4'b0001;
        check_output(32'hFFFFFFF4, 1);

        // Test case 2: Load byte zero-extended
        i_data = 32'hF4;
        i_unsign = 1;  
        i_mask = 4'b0001;
        check_output(32'h000000F4, 2);

        // Test case 3: Load halfword sign-extended (âm)
        i_data = 32'h0000FFF4;
        i_unsign = 0;
        i_mask = 4'b0011;
        check_output(32'hFFFFFFF4, 3);

        // Test case 4: Load halfword zero-extended
        i_data = 32'h0000FFF4;
        i_unsign = 1;
        i_mask = 4'b0011;
        check_output(32'h0000FFF4, 4);

        // Test case 5: Default case (output = input)
        i_data = 32'hAABBCCDD;
        i_unsign = 0;
        i_mask = 4'b1111;
        check_output(32'hAABBCCDD, 5);

        // Test case 6: Load byte sign-extended (số dương)
        i_data = 32'h0000007F; 
        i_unsign = 0;
        i_mask = 4'b0001;
        check_output(32'h0000007F, 6);

        // Test case 7: Load byte zero-extended (số dương)
        i_data = 32'h0000007F;
        i_unsign = 1;
        i_mask = 4'b0001;
        check_output(32'h0000007F, 7);

        // Test case 8: Load halfword sign-extended (số dương)
        i_data = 32'h00007FFF;
        i_unsign = 0;
        i_mask = 4'b0011;
        check_output(32'h00007FFF, 8);

        // Test case 9: Load halfword zero-extended (số dương)
        i_data = 32'h00007FFF;
        i_unsign = 1;
        i_mask = 4'b0011;
        check_output(32'h00007FFF, 9);

        // Test case 10: Load byte từ số âm (-1)
        i_data = 32'hFFFFFFFF;
        i_unsign = 0;
        i_mask = 4'b0001;
        check_output(32'hFFFFFFFF, 10);

        // Test case 11: Load byte từ số âm (-1), nhưng không dấu
        i_data = 32'hFFFFFFFF;
        i_unsign = 1;
        i_mask = 4'b0001;
        check_output(32'h000000FF, 11);

        // Test case 12: Load halfword từ số âm (-1)
        i_data = 32'hFFFFFFFF;
        i_unsign = 0;
        i_mask = 4'b0011;
        check_output(32'hFFFFFFFF, 12);

        // Test case 13: Load halfword từ số âm (-1), nhưng không dấu
        i_data = 32'hFFFFFFFF;
        i_unsign = 1;
        i_mask = 4'b0011;
        check_output(32'h0000FFFF, 13);

        // Test case 14: Load nguyên giá trị (không đổi)
        i_data = 32'h12345678;
        i_unsign = 0;
        i_mask = 4'b1111;
        check_output(32'h12345678, 14);

        // Test case 15: Load nguyên giá trị khác (không đổi)
        i_data = 32'h87654321;
        i_unsign = 1;
        i_mask = 4'b1111;
        check_output(32'h87654321, 15);

        // Kết thúc mô phỏng
        $finish;
    end

endmodule
