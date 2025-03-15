`timescale 1ns/1ps
module memory_tb;

  // Testbench signals
  logic         i_clk;
  logic         i_reset;
  logic [10:0]  i_addr;
  logic [31:0]  i_wdata;
  logic [3:0]   i_mask;
  logic         i_wren;
  logic [31:0]  o_rdata;
  int failed = 0, passed = 0;

  // Instantiate memory module
  memory uut (
    .i_clk(i_clk),
    .i_reset(i_reset),
    .i_addr(i_addr),
    .i_wdata(i_wdata),
    .i_mask(i_mask),
    .i_wren(i_wren),
    .o_rdata(o_rdata)
  );

  // Clock generation
  initial begin
    i_clk = 0;
    forever #5 i_clk = ~i_clk;
  end

  // Task to write data to memory with full mask
  task mem_write(input [10:0] addr, input [31:0] data);
    @(posedge i_clk);
    i_addr  = addr;
    i_wdata = data;
    i_mask  = 4'b1111;
    i_wren  = 1;
    @(posedge i_clk);
    i_wren  = 0;
    $display("Write: Addr=0x%0h | Data=0x%0h", addr, data);
  endtask

  // Task to read data and verify expected value
  task mem_read(input [10:0] addr, input [31:0] expected);
    @(posedge i_clk);
    i_addr = addr;
    @(posedge i_clk);
    #1;
    $display("Read: Addr=0x%0h -> Data=0x%0h", addr, o_rdata);
    if (o_rdata !== expected) begin
      $display("FAILED: Expected=0x%0h, Got=0x%0h", expected, o_rdata);
      failed++;
    end else begin
      $display("PASSED: Expected=0x%0h, Got=0x%0h", expected, o_rdata);
      passed++;
    end
  endtask

  // Main test process
  initial begin
    i_reset = 0;
    i_wren  = 0;
    i_addr  = 11'd0;
    i_wdata = 32'd0;
    i_mask  = 4'b1111;

    // Apply reset
    #10;
    i_reset = 1;
    #10;

    $display("===== Test Case: Write & Read Full 32-bit Word =====");
    mem_write(11'h100, 32'hAABBCCDD);
    mem_read(11'h100, 32'hAABBCCDD);
    
    mem_write(11'h104, 32'h12345678);
    mem_read(11'h104, 32'h12345678);

    mem_write(11'h108, 32'hDEADBEEF);
    mem_read(11'h108, 32'hDEADBEEF);

    mem_write(11'h10C, 32'hCAFEBABE);
    mem_read(11'h10C, 32'hCAFEBABE);

    $display("===== Test Summary =====");
    $display("PASSED: %0d, FAILED: %0d", passed, failed);
    $finish;
  end

endmodule
