`timescale 1ps/1ps
module controlSel(
    input logic [3:0] i_oper,
    output logic o_sig,
    output logic o_athi
);
always @(*) begin
    case (i_oper)
        4'b0001: begin 
            o_sig = 1;
            o_athi = 0;
        end
        4'b0010: begin 
            o_sig = 1;
            o_athi = 0;
        end
        4'b0011: begin
            o_sig = 1;
            o_athi = 0;
        end
        4'b1001: begin 
            o_sig = 0;
            o_athi = 1;
        end
        default: begin 
            o_sig = 0;
            o_athi = 0;
        end
    endcase
end
endmodule
