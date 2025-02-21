module top (
    input logic nickle_i,
    input logic reset_n,
    input logic dime_i,
    input logic quarter_i,
    input logic clk_i,
    output logic soda_o,
    output logic [2:0] change_o
);
localparam [3:0]    s0 = 4'd0, //0, 0
                    s1 = 4'd1, //5, 0
                    s2 = 4'd2, //10, 0
                    s3 = 4'd3, //15, 0
                    s4 = 4'd4, //0, 1
                    s5 = 4'd5, //5, 1
                    s6 = 4'd6, //10, 1
                    s7 = 4'd7, //15, 1
                    s8 = 4'd8; //20, 1

logic [3:0] state_q, state_d;
logic soda;
logic [2:0] change;

always @(posedge clk_i or negedge reset_n) begin
    if(!reset_n) begin 
        state_q <= s0;
    end else begin 
        state_q <= state_d;
    end
end

always @(*) begin
    case (state_q)
        s0: begin 
            if(nickle_i) begin 
                state_d = s1;
            end else if (dime_i) begin 
                state_d = s2;
            end else if (quarter_i) begin 
                state_d = s5;
            end else begin 
                state_d = state_q;
            end
            soda = 0;
            change = 3'b000;
        end
        s1: begin 
            if(nickle_i) begin 
                state_d = s2;
            end else if (dime_i) begin 
                state_d = s3;
            end else if (quarter_i) begin 
                state_d = s6;
            end else begin 
                state_d = state_q;
            end
            soda = 0;
            change = 3'b000;
        end
        s2: begin //10
            if(nickle_i) begin 
                state_d = s3;
            end else if (dime_i) begin 
                state_d = s4;
            end else if (quarter_i) begin 
                state_d = s7;
            end else begin 
                state_d = state_q;
            end
            soda = 0;
            change = 3'b000;
        end
        s3: begin //15
            if(nickle_i) begin 
                state_d = s4;
            end else if (dime_i) begin 
                state_d = s5;
            end else if (quarter_i) begin 
                state_d = s8;
            end else begin 
                state_d = state_q;
            end
            soda = 0;
            change = 3'b000;
        end
        s4: begin //0, 1
            if(nickle_i) begin 
                state_d = s1;
            end else if (dime_i) begin 
                state_d = s2;
            end else if (quarter_i) begin 
                state_d = s5;
            end else begin 
                state_d = s0;
            end
            soda = 1;
            change = 3'b000;
        end
        s5: begin //5, 1
            if(nickle_i) begin 
                state_d = s1;
            end else if (dime_i) begin 
                state_d = s2;
            end else if (quarter_i) begin 
                state_d = s5;
            end else begin 
                state_d = s0;
            end
            soda = 1;
            change = 3'b001;
        end
        s6: begin //10, 1
            if(nickle_i) begin 
                state_d = s1;
            end else if (dime_i) begin 
                state_d = s2;
            end else if (quarter_i) begin 
                state_d = s5;
            end else begin 
                state_d = s0;
            end
            soda = 1;
            change = 3'b010;
        end
        s7: begin //15, 1
            if(nickle_i) begin 
                state_d = s1;
            end else if (dime_i) begin 
                state_d = s2;
            end else if (quarter_i) begin 
                state_d = s5;
            end else begin 
                state_d = s0;
            end
            soda = 1;
            change = 3'b011;
        end
        s8: begin //20, 1
            if(nickle_i) begin 
                state_d = s1;
            end else if (dime_i) begin 
                state_d = s2;
            end else if (quarter_i) begin 
                state_d = s5;
            end else begin 
                state_d = s0;
            end
            soda = 1;
            change = 3'b100;
        end
    endcase
end
assign soda_o = soda;
assign change_o = change;
endmodule