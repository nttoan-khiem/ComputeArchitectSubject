module lsu_tb;
    logic i_clk; 
    logic i_reset;
    logic [31:0] i_stData;
    logic i_wren;
    logic [31:0] i_addr;
    logic [3:0] i_mask;
    logic [31:0] i_ph_sw;
    logic [31:0] i_ph_button;
    logic [31:0] o_ldData;
    logic [31:0] o_ph_ledr;
    logic [31:0] o_ph_ledg;
    logic [6:0] o_ph_seg0;
    logic [6:0] o_ph_seg1;
    logic [6:0] o_ph_seg2;
    logic [6:0] o_ph_seg3;
    logic [6:0] o_ph_seg4;
    logic [6:0] o_ph_seg5;
    logic [6:0] o_ph_seg6;
    logic [6:0] o_ph_seg7;
    logic [31:0] o_ph_lcd;
    //reg hold old value for output test
    logic [31:0] ph_ledr;
    logic [31:0] ph_ledg;
    logic [6:0] ph_seg0;
    logic [6:0] ph_seg1;
    logic [6:0] ph_seg2;
    logic [6:0] ph_seg3;
    logic [6:0] ph_seg4;
    logic [6:0] ph_seg5;
    logic [6:0] ph_seg6;
    logic [6:0] ph_seg7;
    logic [31:0] ph_lcd;
    logic [31:0] ph_seg30;
    logic [31:0] ph_seg74;
    assign ph_seg0 = ph_seg30[6:0];
    assign ph_seg1 = ph_seg30[14:8];
    assign ph_seg2 = ph_seg30[22:16];
    assign ph_seg3 = ph_seg30[30:24];
    assign ph_seg4 = ph_seg74[6:0];
    assign ph_seg5 = ph_seg74[14:8];
    assign ph_seg6 = ph_seg74[22:16];
    assign ph_seg7 = ph_seg74[30:24];
    always @(posedge i_clk) begin
        if(i_wren) begin 
            if(i_addr <= 32'h10000fff && i_addr >= 32'h10000000 && i_mask[3] == 1) begin 
                ph_ledr[31:24] <= i_stData[31:24];
            end
            if(i_addr <= 32'h10000fff && i_addr >= 32'h10000000 && i_mask[2] == 1) begin 
                ph_ledr[23:16] <= i_stData[23:16];
            end
            if(i_addr <= 32'h10000fff && i_addr >= 32'h10000000 && i_mask[1] == 1) begin 
                ph_ledr[15:8] <= i_stData[15:8];
            end
            if(i_addr <= 32'h10000fff && i_addr >= 32'h10000000 && i_mask[0] == 1) begin 
                ph_ledr[7:0] <= i_stData[7:0];
            end // control hold data ledr
            if(i_addr <= 32'h10001fff && i_addr >= 32'h10001000 && i_mask[3] == 1) begin 
                ph_ledg[31:24] <= i_stData[31:24];
            end
            if(i_addr <= 32'h10001fff && i_addr >= 32'h10001000 && i_mask[2] == 1) begin 
                ph_ledg[23:16] <= i_stData[23:16];
            end
            if(i_addr <= 32'h10001fff && i_addr >= 32'h10001000 && i_mask[1] == 1) begin 
                ph_ledg[15:8] <= i_stData[15:8];
            end
            if(i_addr <= 32'h10001fff && i_addr >= 32'h10001000 && i_mask[0] == 1) begin 
                ph_ledg[7:0] <= i_stData[7:0];
            end //control hold data ledg
            if(i_addr <= 32'h10002fff && i_addr >= 32'h10002000 && i_mask[3] == 1) begin 
                ph_seg30[31:24] <= i_stData[31:24];
            end
            if(i_addr <= 32'h10002fff && i_addr >= 32'h10002000 && i_mask[2] == 1) begin 
                ph_seg30[23:16] <= i_stData[23:16];
            end
            if(i_addr <= 32'h10002fff && i_addr >= 32'h10002000 && i_mask[1] == 1) begin 
                ph_seg30[15:8] <= i_stData[15:8];
            end
            if(i_addr <= 32'h10002fff && i_addr >= 32'h10002000 && i_mask[0] == 1) begin 
                ph_seg30[7:0] <= i_stData[7:0];
            end //control hold data seg30
            if(i_addr <= 32'h10003fff && i_addr >= 32'h10003000 && i_mask[3] == 1) begin 
                ph_seg74[31:24] <= i_stData[31:24];
            end
            if(i_addr <= 32'h10003fff && i_addr >= 32'h10003000 && i_mask[2] == 1) begin 
                ph_seg74[23:16] <= i_stData[23:16];
            end
            if(i_addr <= 32'h10003fff && i_addr >= 32'h10003000 && i_mask[1] == 1) begin 
                ph_seg74[15:8] <= i_stData[15:8];
            end
            if(i_addr <= 32'h10003fff && i_addr >= 32'h10003000 && i_mask[0] == 1) begin 
                ph_seg74[7:0] <= i_stData[7:0];
            end //control hold data seg74
            if(i_addr <= 32'h10004fff && i_addr >= 32'h10004000 && i_mask[3] == 1) begin 
                ph_lcd[31:24] <= i_stData[31:24];
            end
            if(i_addr <= 32'h10004fff && i_addr >= 32'h10004000 && i_mask[2] == 1) begin 
                ph_lcd[23:16] <= i_stData[23:16];
            end
            if(i_addr <= 32'h10004fff && i_addr >= 32'h10004000 && i_mask[1] == 1) begin 
                ph_lcd[15:8] <= i_stData[15:8];
            end
            if(i_addr <= 32'h10004fff && i_addr >= 32'h10004000 && i_mask[0] == 1) begin 
                ph_lcd[7:0] <= i_stData[7:0];
            end //control hold data lcd
        end
    end
    // check hold data output
    always @(*) begin 
        #1
        if(o_ph_lcd != ph_lcd) $display("\033[31m[FAILED]\033[0m Wrong hold data output LCD, current is: %h but expected is: %h, at time: %d", o_ph_lcd, ph_lcd, $time);
        if(o_ph_ledr != ph_ledr) $display("\033[31m[FAILED]\033[0m Wrong hold data output LEDR, current is: %h but expected is: %h, at time: %d", o_ph_ledr, ph_ledr, $time);
        if(o_ph_ledg != ph_ledg) $display("\033[31m[FAILED]\033[0m Wrong hold data output LEDG, current is: %h but expected is: %h, at time: %d", o_ph_ledg, ph_ledg, $time);
        if(o_ph_seg0 != ph_seg0) $display("\033[31m[FAILED]\033[0m Wrong hold data output SEG0, current is: %h but expected is: %h, at time: %d", o_ph_seg0, ph_seg0, $time);
        if(o_ph_seg1 != ph_seg1) $display("\033[31m[FAILED]\033[0m Wrong hold data output SEG1, current is: %h but expected is: %h, at time: %d", o_ph_seg1, ph_seg1, $time);
        if(o_ph_seg2 != ph_seg2) $display("\033[31m[FAILED]\033[0m Wrong hold data output SEG2, current is: %h but expected is: %h, at time: %d", o_ph_seg2, ph_seg2, $time);
        if(o_ph_seg3 != ph_seg3) $display("\033[31m[FAILED]\033[0m Wrong hold data output SEG3, current is: %h but expected is: %h, at time: %d", o_ph_seg3, ph_seg3, $time);
        if(o_ph_seg4 != ph_seg4) $display("\033[31m[FAILED]\033[0m Wrong hold data output SEG4, current is: %h but expected is: %h, at time: %d", o_ph_seg4, ph_seg4, $time);
        if(o_ph_seg5 != ph_seg5) $display("\033[31m[FAILED]\033[0m Wrong hold data output SEG5, current is: %h but expected is: %h, at time: %d", o_ph_seg5, ph_seg5, $time);
        if(o_ph_seg6 != ph_seg6) $display("\033[31m[FAILED]\033[0m Wrong hold data output SEG6, current is: %h but expected is: %h, at time: %d", o_ph_seg6, ph_seg6, $time);
        if(o_ph_seg7 != ph_seg7) $display("\033[31m[FAILED]\033[0m Wrong hold data output SEG7, current is: %h but expected is: %h, at time: %d", o_ph_seg7, ph_seg7, $time);
    end
    // Instantiate the DUT (Device Under Test)
    lsu uut (
        .*
    );
    
    //define task write operation
    task writeW(
        input [31:0] addr,
        input [31:0] data
    );
        begin 
            #7
            i_addr = addr;
            i_stData = data;
            i_wren = 1;
            i_mask = 4'b1111;
            #10 // wait 10ns to write (f = 100Mhz)
            i_wren = 0;
            $display("\033[34m[OPERATION]\033[0m Write WORD data = %h to address = %h, at time: %d", data, i_addr, $time);
        end    
    endtask

    task writeH(
        input [31:0] addr,
        input [15:0] data
    );
        begin 
            #6
            i_addr = addr;
            i_stData = {{16{1'd0}}, data};
            i_wren = 1;
            i_mask = 4'b0011;
            #10 // wait 10ns to write (f = 100Mhz)
            i_wren = 0;
            $display("\033[34m[OPERATION]\033[0m Write HALF WORD data = %h to address = %h, at time: %d", data, i_addr, $time);
        end    
    endtask

    task writeB(
        input [31:0] addr,
        input [7:0] data
    );
        begin 
            #9
            i_addr = addr;
            i_stData = {{24{1'd0}}, data};
            i_wren = 1;
            i_mask = 4'b0001;
            #10 // wait 10ns to write (f = 100Mhz)
            i_wren = 0;
            $display("\033[34m[OPERATION]\033[0m Write BYTE data = %h to address = %h, at time: %d", data, i_addr, $time);
        end    
    endtask

    task checkValueW (
        input [31:0] addr,
        input [31:0] expected
    );
        begin 
            i_addr = addr;
            i_mask = 4'b1111;
            #1 // wait 1ns for read
            if(o_ldData === expected) begin 
                $display("\033[32m[PASSED]\033[0m Correct output data at address = %h, data: %h, at time: %d", i_addr, o_ldData, $time);
            end else begin 
                $display("\033[31m[FAILED]\033[0m Wrong output data at address = %h, data: %h, but expected: %h, at time: %d", i_addr, o_ldData, expected, $time);
            end
        end
    endtask

    task checkValueH (
        input [31:0] addr,
        input [31:0] expected
    );
        begin 
            i_addr = addr;
            i_mask = 4'b0011;
            #1 // wait 1ns for read
            if(o_ldData === expected) begin 
                $display("\033[32m[PASSED]\033[0m Correct output data at address = %h, data: %h, at time: %d", i_addr, o_ldData, $time);
            end else begin 
                $display("\033[31m[FAILED]\033[0m Wrong output data at address = %h, data: %h, but expected: %h, at time: %d", i_addr, o_ldData, expected, $time);
            end
        end
    endtask
    
    task checkValueB (
        input [31:0] addr,
        input [31:0] expected
    );
        begin 
            i_addr = addr;
            i_mask = 4'b0001;
            #1 // wait 1ns for read
            if(o_ldData === expected) begin 
                $display("\033[32m[PASSED]\033[0m Correct output data at address = %h, data: %h, at time: %d", i_addr, o_ldData, $time);
            end else begin 
                $display("\033[31m[FAILED]\033[0m Wrong output data at address = %h, data: %h, but expected: %h, at time: %d", i_addr, o_ldData, expected, $time);
            end
        end
    endtask

    // Clock generation
    always #5 i_clk = ~i_clk; // 10ns period (100MHz)

    initial begin
        // Initialize Signals
        i_clk = 0;
        i_reset = 1;
        i_stData = 32'd0;
        i_wren = 32'd0;
        i_addr = 32'd0;
        i_mask = 4'b1111;
        i_ph_sw = 32'd0;
        i_ph_button = 32'd0;

        // Reset Phase
        #20 i_reset = 0;
        #20 i_reset = 1;

        //tesing data memory------------------------------
        //normal write and read test 0
        writeW(32'h0000_0000, 32'h1234_5678);
        checkValueW(32'h0000_0000, 32'h1234_5678);
        //normal write and read test 1
        writeW(32'h0000_0004, 32'hab34_5678);
        checkValueW(32'h0000_0004, 32'hab34_5678);
        //normal write and read test 2
        writeW(32'h0000_07fc, 32'h1234_56ff);
        checkValueW(32'h0000_07fc, 32'h1234_56ff);
        //read check memory without write
        checkValueW(32'h0000_010c, 32'h0000_0000);
        //half word write read test 0
        writeH(32'h0000_0100, 16'h1234);
        checkValueH(32'h0000_0100, 32'h1234);
        checkValueH(32'h0000_0102, 32'h0000);
        //half word write read test 1
        writeH(32'h0000_0300, 16'hffff);
        checkValueH(32'h0000_0300, 32'hffff);
        checkValueH(32'h0000_0302, 32'h0000);
        //byte write and read test 
        writeB(32'h0000_0400, 8'h11);
        checkValueB(32'h0000_0400, 32'h0011);
        checkValueB(32'h0000_0401, 32'h0000);
        checkValueB(32'h0000_0402, 32'h0000);
        checkValueB(32'h0000_0403, 32'h0000);
        writeB(32'h0000_0401, 8'h21);
        writeB(32'h0000_0402, 8'h31);
        writeB(32'h0000_0403, 8'h41);
        checkValueW(32'h0000_0400, 32'h4131_2111);
        //access check ledr
        writeB(32'h1000_0400, 8'h11);
        checkValueB(32'h1000_0000, 32'h11);
        writeH(32'h1000_04a0, 16'h1234);
        checkValueH(32'h1000_0400, 32'h1234);
        writeW(32'h1000_04f0, 32'hefad_1234);
        checkValueW(32'h1000_0f00, 32'hefad_1234);
        //access check ledg
        writeB(32'h1000_1400, 8'h11);
        checkValueB(32'h1000_1000, 32'h11);
        writeH(32'h1000_14a0, 16'h1234);
        checkValueH(32'h1000_1400, 32'h1234);
        writeW(32'h1000_14f0, 32'hefad_1234);
        checkValueW(32'h1000_1ff0, 32'hefad_1234);
        //access check seg30
        writeB(32'h1000_2400, 8'h11);
        checkValueB(32'h1000_2000, 32'h11);
        writeH(32'h1000_24a0, 16'h1234);
        checkValueH(32'h1000_2400, 32'h1234);
        writeW(32'h1000_24f0, 32'hefad_1234);
        checkValueW(32'h1000_2ff0, 32'hefad_1234);
        //access check seg74
        writeB(32'h1000_3410, 8'h11);
        checkValueB(32'h1000_3010, 32'h11);
        writeH(32'h1000_3410, 16'h1234);
        checkValueH(32'h1000_3410, 32'h1234);
        writeW(32'h1000_3410, 32'hefad_1234);
        checkValueW(32'h1000_3f10, 32'hefad_1234);
        //access check lcd
        writeB(32'h1000_4f02, 8'h11);
        checkValueB(32'h1000_4f02, 32'h11);
        writeH(32'h1000_4fa2, 16'h1234);
        checkValueH(32'h1000_4f02, 32'h1234);
        writeW(32'h1000_4ff2, 32'hefad_1234);
        checkValueW(32'h1000_4ff2, 32'hefad_1234);
        //check input sw
        #123
        i_ph_sw = 32'h1234_5678;
        checkValueB(32'h1001_0000, 32'h78);
        checkValueH(32'h1001_0001, 32'h5678);
        checkValueW(32'h1001_0030, 32'h1234_5678);
        #91
        i_ph_sw = 32'habcd_ef01;
        checkValueB(32'h1001_0010, 32'h01);
        checkValueH(32'h1001_0021, 32'hef01);
        checkValueW(32'h1001_003f, 32'habcd_ef01);
        //check input sw
        #123
        i_ph_button = 32'h4321_8765;
        checkValueB(32'h1001_1030, 32'h65);
        checkValueH(32'h1001_10f1, 32'h8765);
        checkValueW(32'h1001_1032, 32'h4321_8765);
        #91
        i_ph_button = 32'h1023_2025;
        checkValueB(32'h1001_1f10, 32'h25);
        checkValueH(32'h1001_10ff, 32'h2025);
        checkValueW(32'h1001_1fff, 32'h1023_2025);
        #100;
        $stop;
    end
endmodule