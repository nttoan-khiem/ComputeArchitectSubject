module top (
    input logic nickle_i,
    input logic reset_n,
    input logic dime_i,
    input logic quarter_i,
    input logic clk_i,
    output logic soda_o,
    output logic [2:0] change_o
);
logic [2:0] selInput;
logic [3:0] valueInput;
logic [3:0] currentMoneySel;
logic [3:0] currentMoney;
logic [3:0] nextMoney;
logic [3:0] change;
logic [3:0] changeTemp;
logic soda;
assign selInput = {quarter_i, dime_i, nickle_i};

inputDecode inputDecoderBlock (
    .sig_i(selInput),
    .sig_o(valueInput)
);

sel2bit selectionBlock0 (
    .sel_i(soda),
    .a_i(currentMoney),
    .b_i(4'd0),
    .data_o(currentMoneySel)
);

adder4bit adderBlock(
    .a_i(valueInput),
    .b_i(currentMoneySel),
    .s_o(nextMoney)
);

registerSet memoryMoneyBlock(
    .clk_i(clk_i),
    .reset_n(reset_n),
    .data_i(nextMoney),
    .data_o(currentMoney)
);

compare4 compareWith4Block (
    .data_i(currentMoney),
    .greater_o(soda)
);

adder4bit adderBlockUseForChange(
    .a_i(currentMoney),
    .b_i(4'b1100),
    .s_o(change)
);
sel2bit slectionForChangeBlock(
    .sel_i(soda),
    .a_i(4'd0),
    .b_i(change),
    .data_o(changeTemp)
);
assign soda_o = soda;
assign change_o[2:0] = changeTemp[2:0];
endmodule

module inputDecode(
    input logic [2:0] sig_i,
    output logic [3:0] sig_o
);
always @(*) begin
    case (sig_i)
        3'b000: begin 
            sig_o = 4'd0;
        end
        3'b001: begin 
            sig_o = 4'd1;
        end
        3'b010: begin 
            sig_o = 4'd2;
        end
        3'b100: begin 
            sig_o = 4'd5;
        end
        default: begin 
            sig_o = 4'd0;
        end
    endcase
end
endmodule 

module registerSet(
    input logic clk_i,
    input logic reset_n,
    input logic [3:0] data_i,
    output logic [3:0] data_o
);
always @(posedge clk_i or negedge reset_n) begin
    if(!reset_n) begin 
        data_o <= 4'd0;
    end else begin 
        data_o <= data_i;
    end
end
endmodule

module adder4bit(
    input logic [3:0] a_i,
    input logic [3:0] b_i,
    output logic [3:0] s_o
);
always @(*) begin
    s_o = a_i + b_i;
end
endmodule

module compare4(
    input logic [3:0] data_i,
    output logic greater_o
);
logic [3:0] bu1;
logic [3:0] temp;
assign bu1 = ~data_i + 4'd0;
always @(*) begin
    temp = 4'd4 + bu1;
end
assign greater_o = temp[3];
endmodule

module sel2bit(
    input logic sel_i,
    input logic [3:0] a_i,
    input logic [3:0] b_i,
    output logic [3:0] data_o
);
always @(*) begin
    case (sel_i)
        1'b0: begin 
            data_o = a_i;
        end 
        1'b1: begin 
            data_o = b_i;
        end
    endcase
end
endmodule