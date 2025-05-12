`timescale 1ns/1ps
module decoder32bit(
    input logic [4:0] i_addr,
    input logic i_enable,
    output logic [31:0] o_decodeSignal
);
always_comb begin : decodeLogicBlock
    if (!i_enable) begin 
        o_decodeSignal = 32'd0;
    end else begin 
        case (i_addr)
            5'd0: o_decodeSignal = {{31{1'b0}}, 1'b1}; 
            5'd1: o_decodeSignal = {{30{1'b0}}, 1'b1, {1{1'b0}}};
            5'd2: o_decodeSignal = {{29{1'b0}}, 1'b1, {2{1'b0}}};
            5'd3: o_decodeSignal = {{28{1'b0}}, 1'b1, {3{1'b0}}};
            5'd4: o_decodeSignal = {{27{1'b0}}, 1'b1, {4{1'b0}}};
            5'd5: o_decodeSignal = {{26{1'b0}}, 1'b1, {5{1'b0}}};
            5'd6: o_decodeSignal = {{25{1'b0}}, 1'b1, {6{1'b0}}};
            5'd7: o_decodeSignal = {{24{1'b0}}, 1'b1, {7{1'b0}}};
            5'd8: o_decodeSignal = {{23{1'b0}}, 1'b1, {8{1'b0}}};
            5'd9: o_decodeSignal = {{22{1'b0}}, 1'b1, {9{1'b0}}};
            5'd10: o_decodeSignal = {{21{1'b0}}, 1'b1, {10{1'b0}}};
            5'd11: o_decodeSignal = {{20{1'b0}}, 1'b1, {11{1'b0}}};
            5'd12: o_decodeSignal = {{19{1'b0}}, 1'b1, {12{1'b0}}};
            5'd13: o_decodeSignal = {{18{1'b0}}, 1'b1, {13{1'b0}}};
            5'd14: o_decodeSignal = {{17{1'b0}}, 1'b1, {14{1'b0}}};
            5'd15: o_decodeSignal = {{16{1'b0}}, 1'b1, {15{1'b0}}};
            5'd16: o_decodeSignal = {{15{1'b0}}, 1'b1, {16{1'b0}}};
            5'd17: o_decodeSignal = {{14{1'b0}}, 1'b1, {17{1'b0}}};
            5'd18: o_decodeSignal = {{13{1'b0}}, 1'b1, {18{1'b0}}};
            5'd19: o_decodeSignal = {{12{1'b0}}, 1'b1, {19{1'b0}}};
            5'd20: o_decodeSignal = {{11{1'b0}}, 1'b1, {20{1'b0}}};
            5'd21: o_decodeSignal = {{10{1'b0}}, 1'b1, {21{1'b0}}};
            5'd22: o_decodeSignal = {{9{1'b0}}, 1'b1, {22{1'b0}}};
            5'd23: o_decodeSignal = {{8{1'b0}}, 1'b1, {23{1'b0}}};
            5'd24: o_decodeSignal = {{7{1'b0}}, 1'b1, {24{1'b0}}};
            5'd25: o_decodeSignal = {{6{1'b0}}, 1'b1, {25{1'b0}}};
            5'd26: o_decodeSignal = {{5{1'b0}}, 1'b1, {26{1'b0}}};
            5'd27: o_decodeSignal = {{4{1'b0}}, 1'b1, {27{1'b0}}};
            5'd28: o_decodeSignal = {{3{1'b0}}, 1'b1, {28{1'b0}}};
            5'd29: o_decodeSignal = {{2{1'b0}}, 1'b1, {29{1'b0}}};
            5'd30: o_decodeSignal = {{1{1'b0}}, 1'b1, {30{1'b0}}};
            5'd31: o_decodeSignal = {1'b1, {31{1'b0}}};
            default: o_decodeSignal = 32'd0;
        endcase
    end
end
endmodule
