`timescale 1ns/1ps
module registerSet_tb;

  // Declare testbench signals
  logic         i_clk;
  logic         i_rst;
  logic [4:0]   i_rs1_addr, i_rs2_addr;
  logic [31:0]  o_rs1_data, o_rs2_data;
  logic [4:0]   i_wr_addr;
  logic [31:0]  i_wr_data;
  logic         i_wr_wren;
  
  // Instantiate the Register File (DUT)
  registerSet uut (
    .i_clk(i_clk),
    .i_rst(i_rst),
    .i_rs1_addr(i_rs1_addr),
    .i_rs2_addr(i_rs2_addr),
    .o_rs1_data(o_rs1_data),
    .o_rs2_data(o_rs2_data),
    .i_wr_addr(i_wr_addr),
    .i_wr_data(i_wr_data),
    .i_wr_wren(i_wr_wren)
  );
  
  // Clock generation: period = 10 ns (5 ns high, 5 ns low)
  initial begin
    i_clk = 0;
    forever #5 i_clk = ~i_clk;
  end

  // Error counter
  int error_count = 0;
  
  initial begin
    i_rst = 0;
    i_wr_wren = 0;
    i_wr_addr = 5'd0;
    i_wr_data = 32'd0;
    i_rs1_addr = 5'd0;
    i_rs2_addr = 5'd0;
    
    #12;
    i_rst = 1;
    #10;
    
    $display("===== Starting Register File Testbench =====");
    
    // Test Case 1: Write unique values to registers x1 to x31
    for (int i = 1; i < 32; i++) begin
      @(posedge i_clk);
      i_wr_addr = i;
      i_wr_data = i * 10;  // e.g., x1=10, x2=20, x3=30, etc.
      i_wr_wren = 1;
      @(posedge i_clk);
      i_wr_wren = 0;
    end
    #10;
    
    // Test Case 2: Read back all 32 registers and check values
    for (int i = 0; i < 32; i++) begin
      i_rs1_addr = i;
      i_rs2_addr = i;
      @(posedge i_clk);
      #1; // Wait for data stabilization
      if (i == 0) begin
        if (o_rs1_data !== 32'd0 || o_rs2_data !== 32'd0) begin
          $display("Error: Register x0 is not 0. RS1=%h, RS2=%h", o_rs1_data, o_rs2_data);
          error_count++;
        end else begin
          $display("Passed: Register x0 correctly remains 0.");
        end
      end else begin
        if (o_rs1_data !== (i * 10) || o_rs2_data !== (i * 10)) begin
          $display("Error: Register x%0d expected %d, but got RS1=%h, RS2=%h", i, i * 10, o_rs1_data, o_rs2_data);
          error_count++;
        end else begin
          $display("Passed: Register x%0d = %0d", i, i * 10);
        end
      end
    end

    // Test Case 3: Attempt to write to register x0 and verify it remains 0
    @(posedge i_clk);
    i_wr_addr = 5'd0;
    i_wr_data = 32'hAABBCCDD;
    i_wr_wren = 1;
    @(posedge i_clk);
    i_wr_wren = 0;
    i_rs1_addr = 5'd0;
    @(posedge i_clk);
    #1;
    if (o_rs1_data !== 32'd0) begin
      $display("Error: Register x0 changed to %h after write attempt.", o_rs1_data);
      error_count++;
    end else begin
      $display("Passed: Register x0 remains 0 as expected after write attempt to 32'h%h.", i_wr_data);
    end

    // Test Case 4: Simultaneous operations (concurrent read/write)
    // Scenario 1: Write to x5 while reading x6 (x6 should not be affected)
    @(posedge i_clk);
    i_wr_addr = 5'd5;
    i_wr_data = 32'hAAAA_AAAA;
    i_wr_wren = 1;
    i_rs1_addr = 5'd6; 
    @(posedge i_clk);
    i_wr_wren = 0;
    #1;
    if (o_rs1_data !== (6 * 10)) begin
      $display("Error: Concurrent read/write issue: x6 unexpectedly changed to %h", o_rs1_data);
      error_count++;
    end else begin
      $display("Passed: Concurrent read/write: x6 remains unchanged as expected.");
    end

    // Scenario 2: Consecutive writes to x7 and x8, then verify
    @(posedge i_clk);
    i_wr_addr = 5'd7;
    i_wr_data = 32'h12345678;
    i_wr_wren = 1;
    @(posedge i_clk);
    i_wr_wren = 0;
    
    @(posedge i_clk);
    i_wr_addr = 5'd8;
    i_wr_data = 32'h87654321;
    i_wr_wren = 1;
    @(posedge i_clk);
    i_wr_wren = 0;
    
    @(posedge i_clk);
    i_rs1_addr = 5'd7;
    i_rs2_addr = 5'd8;
    @(posedge i_clk);
    #1;
    if (o_rs1_data !== 32'h12345678 || o_rs2_data !== 32'h87654321) begin
      $display("Error: Simultaneous write test failed: x7=%h, x8=%h", o_rs1_data, o_rs2_data);
      error_count++;
    end else begin
      $display("Passed: Simultaneous write test passed: x7=%h, x8=%h", o_rs1_data, o_rs2_data);
    end
    
    // Test Case 5: Dual read ports in one clock cycle
    @(posedge i_clk);
    i_rs1_addr = 5'd2;  // x2
    i_rs2_addr = 5'd3;  // x3
    @(posedge i_clk);
    #1;
    if (o_rs1_data !== 32'd20 || o_rs2_data !== 32'd30) begin
      $display("Error: Dual read test failed: Expected x2=20 and x3=30, got RS1=%0d, RS2=%0d", o_rs1_data, o_rs2_data);
      error_count++;
    end else begin
      $display("Passed: Dual read test passed: x2=20 and x3=30.");
    end
	// Test Case 6: Dual read same register: reading register x2 from both ports
	@(posedge i_clk);
	i_rs1_addr = 5'd2;  
	i_rs2_addr = 5'd2;  
	@(posedge i_clk);
	#1; 
	if (o_rs1_data !== o_rs2_data) begin
		$display("Error: Dual read same register failed: RS1 = %h, RS2 = %h", o_rs1_data, o_rs2_data);
		error_count++;
	end else begin
		$display("Passed: Dual read same register passed: Both ports return 32'h%h", o_rs1_data);
	end

	// Test Case 7: Check update of x15 before and after posedge
	@(posedge i_clk);
	i_rs1_addr = 5'd15;
  i_wr_addr = 5'd15;
  i_wr_data = 32'h00abcdff;
  i_wr_wren = 0;
	@(posedge i_clk);
	#1;
	if (o_rs1_data !== 32'd150) begin
		$display("Error: Before update, x15 expected to be 150, but got %h", o_rs1_data);
		error_count++;
	end else begin
		$display("Passed: Before update, x15 correctly holds 150.");
	end

	// Test case 8: Enable write but check immediately the value still holds 150 before posedge
	@(posedge i_clk);
	i_wr_addr = 5'd15;
	i_wr_data = 32'hCAFEEEEE;
	i_wr_wren = 1;
	i_rs1_addr = 5'd15;  
	#1;
	if (o_rs1_data !== 32'd150) begin
		$display("Error: x15 changed before posedge; expected 150, got %h", o_rs1_data);
		error_count++;
	end else begin
		$display("Passed: Before posedge, x15 still holds 150 as expected.");
	end
	@(posedge i_clk);
	i_wr_wren = 0;
	#1;
	if (o_rs1_data !== 32'hCAFEEEEE) begin
		$display("Error: After posedge, x15 expected to update to %h, but got %h", 32'hCAFEEEEE, o_rs1_data);
		error_count++;
	end else begin
		$display("Passed: After posedge, x15 successfully updated to 32'h%h.", o_rs1_data);
	end
    $display("===== All tests completed, error_count = %0d =====", error_count);
    $finish;
  end

endmodule
