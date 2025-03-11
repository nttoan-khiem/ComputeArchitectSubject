module memory_tb;
    logic        i_clk;
    logic        i_reset;
    logic [10:0] i_addr;
    logic [31:0] i_wdata;
    logic [3:0]  i_mask;
    logic        i_wren;
    logic [31:0] o_rdata;

    // Instantiate the DUT (Device Under Test)
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
    always #5 i_clk = ~i_clk; // 10ns period (100MHz)

    initial begin
        // Initialize signals
        i_clk   = 0;
        i_reset = 1;
        i_addr  = 0;
        i_wdata = 0;
        i_mask  = 4'b0000;
        i_wren  = 0;

        #10
        i_addr = 0;
        i_mask  = 4'b1111;  // Enable all 4 bytes   //test init value for inst memory. It just on modelsim, Not sure it still work when synthesis
        for(int i= 0; i < 6; i = i+1) begin 
            @(posedge i_clk);
            #1 $display("Read Data = %h at addr: %d", o_rdata, i_addr);
            i_addr = i_addr + 4;
        end

        // Reset phase
        #10 i_reset = 0;
        #10 i_reset = 1;

        // Test 1: Write full 32-bit word at address 10
        i_addr  = 11'd10;
        i_wdata = 32'hDEADBEEF;
        i_mask  = 4'b1111;  // Enable all 4 bytes
        i_wren  = 1;
        #10;
        i_wren  = 0;
        #10;

        // Test 2: Read back from address 10
        i_addr  = 11'd10;
        #10;
        $display("Read Data = %h (Expected: DEADBEEF)", o_rdata);

        // Test 3: Write only lower 16-bits at address 20
        i_addr  = 11'd20;
        i_wdata = 32'h12345678;
        i_mask  = 4'b0011;  // Write only lower half
        i_wren  = 1;
        #10;
        i_wren  = 0;
        #10;

        // Test 4: Read from address 20
        i_addr  = 11'd20;
        #10;
        $display("Read Data = %h (Expected: 00005678)", o_rdata);

        // Test 5: Write 8 bits at address 30 (Partial write)
        i_addr  = 11'd30;
        i_wdata = 32'h12345678;
        i_mask  = 4'b0001;  // Write upper half
        i_wren  = 1;
        #10;
        i_wren  = 0;
        #10;

        // Test 6: Read again from address 30 (Should merge)
        i_addr  = 11'd30;
        #10;
        $display("Read Data = %h (Expected: 00000078)", o_rdata);

        // Test 7: Read again from address 30 (Should merge)
        i_addr  = 11'd31;
        #10;
        $display("Read Data = %h (Expected: 00000000)", o_rdata);

        // End simulation
        #50;
        $stop;
    end
endmodule