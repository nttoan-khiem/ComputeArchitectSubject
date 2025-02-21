`timescale 1ns/1ns
module top_tb();
logic clk_i, reset_n, nickle_i, dime_i, quarter_i, soda_o;
logic [2:0] change_o;

top dut(
    .nickle_i(nickle_i),
    .dime_i(dime_i),
    .quarter_i(quarter_i),
    .reset_n(reset_n),
    .clk_i(clk_i),
    .soda_o(soda_o),
    .change_o(change_o)
);

task checkOutput(input soda_o, input [2:0] change_o, input soda, input [2:0] change);
    begin 
        if((soda_o == soda) && (change_o == change)) begin 
            $display("[pass] with soda=%b, change=%b", soda_o, change_o);
        end else begin 
            $display("[Fail] with soda=%b, change=%b but expect is soda= %b, change= %b",soda_o, change_o, soda, change);
        end
    end
endtask

initial begin
    clk_i <= 0;
    reset_n <= 1;
    nickle_i <= 0;
    dime_i <= 0;
    quarter_i <= 0;
    #10 reset_n <= 0;
    #20 reset_n <= 1; //complete reset
    #123 nickle_i <= 1; //5
    #20 nickle_i <= 0;
    #20 nickle_i <= 1; //10
    @(posedge clk_i);
    #1 checkOutput(soda_o, change_o, 1'd0, 3'b000);
    #2 nickle_i <= 0;
    #28 nickle_i <= 1; //15
    #20 nickle_i <= 0;
    #32 nickle_i <= 1; //20
    @(posedge clk_i);
    #1 checkOutput(soda_o, change_o, 1'd1, 3'd0);
    #3 nickle_i <= 0;
    #62 dime_i <= 1;
    @(posedge clk_i);
    #1 checkOutput(soda_o, change_o, 1'd0, 3'b000);
    #2 dime_i <= 0; // 10
    #28 dime_i <= 1;
    @(posedge clk_i);
    #1 checkOutput(soda_o, change_o, 1'd1, 3'd0);
    #5 dime_i <= 0; //20
    #28 quarter_i <= 1; //25
    @(posedge clk_i);
    #1 checkOutput(soda_o, change_o, 1'd1, 3'b001);
    #2 quarter_i <= 0; 
    #50 dime_i <= 1;  //10
    #20 dime_i <= 0;
    #30 quarter_i <= 1; //35
    @(posedge clk_i);
    #1 checkOutput(soda_o, change_o, 1'd1, 3'b011);
    #5 quarter_i = 0;
    #80 nickle_i <= 1; //5;
    @(posedge clk_i);
    #1 checkOutput(soda_o, change_o, 1'd0, 3'b000);
    #2 nickle_i <= 0;
    #53 dime_i <= 1; //15
    @(posedge clk_i);
    #1 checkOutput(soda_o, change_o, 1'd0, 3'b000);
    #2 dime_i <= 0;
    #45 quarter_i <= 1; //40
    @(posedge clk_i);
    #1 checkOutput(soda_o, change_o, 1'd1, 3'b100);
    #3 quarter_i = 0;
    #1000;
    $finish;
end

initial begin
    clk_i = 0;
    forever begin
        #10 clk_i <= ~clk_i;
    end
end


endmodule