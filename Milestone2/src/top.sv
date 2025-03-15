module top(
    input logic i_clk,
    input logic i_reset,
    input logic [9:0] i_sw,
    input logic [3:0] i_button,
    output logic [31:0] o_pcDebug,
    output logic o_insnVld,
    output logic [31:0] o_ph_ledr,
    output logic [31:0] o_ph_ledg,
    output logic [6:0] o_ph_seg0,
    output logic [6:0] o_ph_seg1,
    output logic [6:0] o_ph_seg2,
    output logic [6:0] o_ph_seg3,
    output logic [6:0] o_ph_seg4,
    output logic [6:0] o_ph_seg5,
    output logic [6:0] o_ph_seg6,
    output logic [6:0] o_ph_seg7,
    output logic [31:0] o_ph_lcd
);
//still not complete
endmodule