`timescale 1ns/1ps
module alu_tb;

  // ------------------ 1) Khai báo struct ------------------
  typedef struct {
    string       test_name;   // Requires -sv if using string
    logic [31:0] operandA;
    logic [31:0] operandB;
    logic [3:0]  aluOp;
    logic [31:0] expected;
  } test_vector_t;

  // ------------------ 2) Khai báo mảng cố định ------------------
  localparam int NUM_TESTS = 25;
  test_vector_t test_vectors [NUM_TESTS];

  // ------------------ 3) Tín hiệu cho DUT ------------------
  logic [31:0] i_operandA;
  logic [31:0] i_operandB;
  logic [3:0]  i_aluOp;
  logic [31:0] o_aluData;

  // ------------------ 4) Instance ALU ------------------
  alu uut (
    .i_operandA(i_operandA),
    .i_operandB(i_operandB),
    .i_aluOp(i_aluOp),
    .o_aluData(o_aluData)
  );

  // ------------------ 5) Khối initial khởi tạo mảng và chạy test ------------------
  int error_count = 0;  // Đếm số test FAIL

  initial begin
    // Khởi tạo mảng test_vectors
    test_vectors = '{
      // 1. Addition (opcode 4'b0000)
      '{test_name: "Addition", operandA: 32'd15, operandB: 32'd10, aluOp: 4'b0000, expected: 32'd25},

      // 2. Subtraction (opcode 4'b0001)
      '{test_name: "Subtraction", operandA: 32'd15, operandB: 32'd10, aluOp: 4'b0001, expected: 32'd5},

      // 3. SLT (signed) true
      '{test_name: "SLT (True)", operandA: 32'd10, operandB: 32'd15, aluOp: 4'b0010, expected: 32'd1},

      // 4. SLT (signed) false
      '{test_name: "SLT (False)", operandA: 32'd20, operandB: 32'd15, aluOp: 4'b0010, expected: 32'd0},

      // 5. SLTU (unsigned) true
      '{test_name: "SLTU (True)", operandA: 32'd10, operandB: 32'd15, aluOp: 4'b0011, expected: 32'd1},

      // 6. SLTU (unsigned) false
      '{test_name: "SLTU (False)", operandA: 32'd20, operandB: 32'd15, aluOp: 4'b0011, expected: 32'd0},

      // 7. XOR (4'b0100)
      '{test_name: "XOR", operandA: 32'hFF00FF00, operandB: 32'h0F0F0F0F, aluOp: 4'b0100, expected: (32'hFF00FF00 ^ 32'h0F0F0F0F)},

      // 8. OR (4'b0101)
      '{test_name: "OR", operandA: 32'hFF00FF00, operandB: 32'h0F0F0F0F, aluOp: 4'b0101, expected: (32'hFF00FF00 | 32'h0F0F0F0F)},

      // 9. AND (4'b0110)
      '{test_name: "AND", operandA: 32'hFF00FF00, operandB: 32'h0F0F0F0F, aluOp: 4'b0110, expected: (32'hFF00FF00 & 32'h0F0F0F0F)},

      // 10. Shift Left (4'b0111)
      '{test_name: "Shift Left", operandA: 32'd1, operandB: 32'd2, aluOp: 4'b0111, expected: 32'd4},

      // 11. Shift Right Logical (4'b1000)
      '{test_name: "Shift Right Logical", operandA: 32'd16, operandB: 32'd2, aluOp: 4'b1000, expected: 32'd4},

      // 12. Shift Right Arithmetic (4'b1001)
      '{test_name: "Shift Right Arithmetic", operandA: 32'hF0000000, operandB: 32'd4, aluOp: 4'b1001, expected: 32'hFF000000},

      // 13. LUI (4'b1010)
      '{test_name: "LUI", operandA: 32'd0, operandB: 32'hDEADBEEF, aluOp: 4'b1010, expected: 32'hDEADBEEF},

      // 14. Add Zero Operands
      '{test_name: "Add Zero Operands", operandA: 32'd0, operandB: 32'd0, aluOp: 4'b0000, expected: 32'd0},

      // 15. Sub Zero Result
      '{test_name: "Sub Zero Result", operandA: 32'd50, operandB: 32'd50, aluOp: 4'b0001, expected: 32'd0},

      // 16. Add Large Positive
      '{test_name: "Add Large Positive", operandA: 32'h7FFFFFFE, operandB: 32'd1, aluOp: 4'b0000, expected: 32'h7FFFFFFF},

      // 17. Sub Negative
      '{test_name: "Sub Negative", operandA: 32'd10, operandB: 32'd20, aluOp: 4'b0001, expected: 32'hFFFFFFF6},

      // 18. SLT Negative True: -1 < 0 => 1
      '{test_name: "SLT Negative True", operandA: 32'hFFFFFFFF, operandB: 32'd0, aluOp: 4'b0010, expected: 32'd1},

      // 19. SLT Negative False: -1 < -2 => false
      '{test_name: "SLT Negative False", operandA: 32'hFFFFFFFF, operandB: 32'hFFFFFFFE, aluOp: 4'b0010, expected: 32'd0},

      // 20. SLTU Large Unsigned False: 0xFFFFFFFF < 0xFFFFFFFE => 0
      '{test_name: "SLTU Large Unsigned False", operandA: 32'hFFFFFFFF, operandB: 32'hFFFFFFFE, aluOp: 4'b0011, expected: 32'd0},

      // 21. XOR with 0
      '{test_name: "XOR with 0", operandA: 32'hA5A5A5A5, operandB: 32'd0, aluOp: 4'b0100, expected: 32'hA5A5A5A5},

      // 22. OR with 0
      '{test_name: "OR with 0", operandA: 32'h12345678, operandB: 32'd0, aluOp: 4'b0101, expected: 32'h12345678},

      // 23. AND with 0
      '{test_name: "AND with 0", operandA: 32'hABCDEF12, operandB: 32'd0, aluOp: 4'b0110, expected: 32'd0},

      // 24. Shift Left 31 bits
      '{test_name: "Shift Left 31", operandA: 32'd1, operandB: 32'd31, aluOp: 4'b0111, expected: 32'h80000000},

      // 25. Shift Right Arithmetic 31 bits (0x80000000 >> 31 => 0xFFFFFFFF)
      '{test_name: "Shift Right Arithmetic 31", operandA: 32'h80000000, operandB: 32'd31, aluOp: 4'b1001, expected: 32'hFFFFFFFF}
    };

    // Chạy từng test
    $display("==== Starting ALU Testbench ====");
    for (int i = 0; i < NUM_TESTS; i++) begin
      i_operandA = test_vectors[i].operandA;
      i_operandB = test_vectors[i].operandB;
      i_aluOp    = test_vectors[i].aluOp;
      #10; // Chờ tín hiệu ổn định

      // Kiểm tra kết quả
      if (o_aluData !== test_vectors[i].expected) begin
        $display("Test %0d (%s) FAILED: got = %h, expected = %h",
                 i, test_vectors[i].test_name, o_aluData, test_vectors[i].expected);
        error_count++;
      end else begin
        $display("Test %0d (%s) PASSED: result = %h",
                 i, test_vectors[i].test_name, o_aluData);
      end
    end

    if (error_count == 0)
      $display("==== All tests PASSED ====");
    else
      $display("==== A total of %0d tests FAILED ====", error_count);

    $finish;
  end

endmodule
