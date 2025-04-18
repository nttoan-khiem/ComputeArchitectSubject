module memory(
    input logic i_clk,
    input logic i_reset,
    input logic [10:0] i_addr,
    input logic [31:0] i_wdata,
    input logic [3:0] i_mask,
    input logic i_wren,
    output logic [31:0] o_rdata
);
logic [7:0] mem [0: 2047]; //intermal memory block

initial begin 
    $readmemh("../dump/inst.hex", mem);
end
logic [10:0] addr_0, addr_1, addr_2, addr_3;
logic byteWEn0, byteWEn1, byteWEn2, byteWEn3;
assign addr_0 = i_addr;          // addr0 first byte
assign addr_1 = i_addr + 11'd1;  // addr1 second byte
assign addr_2 = i_addr + 11'd2;  // addr2 third byte
assign addr_3 = i_addr + 11'd3;  // addr3 four th byte
assign byteWEn0 = i_mask[0] & i_wren; //wr mask enb 0
assign byteWEn1 = i_mask[1] & i_wren; //wr mask enb 1
assign byteWEn2 = i_mask[2] & i_wren; //wr mask enb 2
assign byteWEn3 = i_mask[3] & i_wren; //wr mask enb 3
always @(posedge i_clk) begin //write control block and reset handle
    if(!i_reset) begin 
        mem[0] <= 8'hb7;
        mem[1] <= 8'h3f;
        mem[2] <= 8'h00;
        mem[3] <= 8'h10;
        mem[4] <= 8'h37;
        mem[5] <= 8'h2f;
        mem[6] <= 8'h00;
        mem[7] <= 8'h10;
        mem[8] <= 8'hb7;
        mem[9] <= 8'h0e;
        mem[10] <= 8'h01;
        mem[11] <= 8'h10;
        mem[12] <= 8'h17;
        mem[13] <= 8'h0b;
        mem[14] <= 8'h00;
        mem[15] <= 8'h00;
        mem[16] <= 8'h13;
        mem[17] <= 8'h0b;
        mem[18] <= 8'hcb;
        mem[19] <= 8'h0d;
        mem[20] <= 8'h97;
        mem[21] <= 8'h0a;
        mem[22] <= 8'h00;
        mem[23] <= 8'h00;
        mem[24] <= 8'h93;
        mem[25] <= 8'h8a;
        mem[26] <= 8'h8a;
        mem[27] <= 8'h0b;
        mem[28] <= 8'hb7;
        mem[29] <= 8'h0d;
        mem[30] <= 8'h00;
        mem[31] <= 8'h10;
        mem[32] <= 8'h93;
        mem[33] <= 8'h0c;
        mem[34] <= 8'hf0;
        mem[35] <= 8'hff;
        mem[36] <= 8'hb7;
        mem[37] <= 8'hf1;
        mem[38] <= 8'hfa;
        mem[39] <= 8'h02;
        mem[40] <= 8'h93;
        mem[41] <= 8'h81;
        mem[42] <= 8'h01;
        mem[43] <= 8'h08;
        mem[44] <= 8'h13;
        mem[45] <= 8'h02;
        mem[46] <= 8'hc0;
        mem[47] <= 8'h03;
        mem[48] <= 8'h93;
        mem[49] <= 8'h00;
        mem[50] <= 8'h10;
        mem[51] <= 8'h00;
        mem[52] <= 8'h13;
        mem[53] <= 8'h01;
        mem[54] <= 8'h00;
        mem[55] <= 8'h00;
        mem[56] <= 8'h03;
        mem[57] <= 8'hae;
        mem[58] <= 8'h0e;
        mem[59] <= 8'h00;
        mem[60] <= 8'h13;
        mem[61] <= 8'h1e;
        mem[62] <= 8'h0e;
        mem[63] <= 8'h01;
        mem[64] <= 8'h13;
        mem[65] <= 8'h7e;
        mem[66] <= 8'h1e;
        mem[67] <= 8'h00;
        mem[68] <= 8'h63;
        mem[69] <= 8'h08;
        mem[70] <= 8'h0e;
        mem[71] <= 8'h00;
        mem[72] <= 8'h03;
        mem[73] <= 8'hae;
        mem[74] <= 8'h0e;
        mem[75] <= 8'h00;
        mem[76] <= 8'h93;
        mem[77] <= 8'h70;
        mem[78] <= 8'hfe;
        mem[79] <= 8'h00;
        mem[80] <= 8'h6f;
        mem[81] <= 8'hf0;
        mem[82] <= 8'h9f;
        mem[83] <= 8'hfe;
        mem[84] <= 8'h23;
        mem[85] <= 8'ha0;
        mem[86] <= 8'h0d;
        mem[87] <= 8'h00;
        mem[88] <= 8'h13;
        mem[89] <= 8'h85;
        mem[90] <= 8'h00;
        mem[91] <= 8'h00;
        mem[92] <= 8'h67;
        mem[93] <= 8'h8a;
        mem[94] <= 8'h0a;
        mem[95] <= 8'h00;
        mem[96] <= 8'h33;
        mem[97] <= 8'h8e;
        mem[98] <= 8'h65;
        mem[99] <= 8'h01;
        mem[100] <= 8'h03;
        mem[101] <= 8'h2e;
        mem[102] <= 8'h0e;
        mem[103] <= 8'h00;
        mem[104] <= 8'ha3;
        mem[105] <= 8'h80;
        mem[106] <= 8'hcf;
        mem[107] <= 8'h01;
        mem[108] <= 8'h33;
        mem[109] <= 8'h0e;
        mem[110] <= 8'h65;
        mem[111] <= 8'h01;
        mem[112] <= 8'h03;
        mem[113] <= 8'h2e;
        mem[114] <= 8'h0e;
        mem[115] <= 8'h00;
        mem[116] <= 8'h23;
        mem[117] <= 8'h80;
        mem[118] <= 8'hcf;
        mem[119] <= 8'h01;
        mem[120] <= 8'h13;
        mem[121] <= 8'h05;
        mem[122] <= 8'h01;
        mem[123] <= 8'h00;
        mem[124] <= 8'h67;
        mem[125] <= 8'h8a;
        mem[126] <= 8'h0a;
        mem[127] <= 8'h00;
        mem[128] <= 8'h33;
        mem[129] <= 8'h8e;
        mem[130] <= 8'h65;
        mem[131] <= 8'h01;
        mem[132] <= 8'h03;
        mem[133] <= 8'h2e;
        mem[134] <= 8'h0e;
        mem[135] <= 8'h00;
        mem[136] <= 8'ha3;
        mem[137] <= 8'h00;
        mem[138] <= 8'hcf;
        mem[139] <= 8'h01;
        mem[140] <= 8'h33;
        mem[141] <= 8'h0e;
        mem[142] <= 8'h65;
        mem[143] <= 8'h01;
        mem[144] <= 8'h03;
        mem[145] <= 8'h2e;
        mem[146] <= 8'h0e;
        mem[147] <= 8'h00;
        mem[148] <= 8'h23;
        mem[149] <= 8'h00;
        mem[150] <= 8'hcf;
        mem[151] <= 8'h01;
        mem[152] <= 8'h63;
        mem[153] <= 8'h0e;
        mem[154] <= 8'h01;
        mem[155] <= 8'h00;
        mem[156] <= 8'h63;
        mem[157] <= 8'h86;
        mem[158] <= 8'h32;
        mem[159] <= 8'h00;
        mem[160] <= 8'h93;
        mem[161] <= 8'h82;
        mem[162] <= 8'h12;
        mem[163] <= 8'h00;
        mem[164] <= 8'h6f;
        mem[165] <= 8'hf0;
        mem[166] <= 8'h9f;
        mem[167] <= 8'hff;
        mem[168] <= 8'h93;
        mem[169] <= 8'h02;
        mem[170] <= 8'h00;
        mem[171] <= 8'h00;
        mem[172] <= 8'h13;
        mem[173] <= 8'h01;
        mem[174] <= 8'hf1;
        mem[175] <= 8'hff;
        mem[176] <= 8'h6f;
        mem[177] <= 8'hf0;
        mem[178] <= 8'h5f;
        mem[179] <= 8'hfa;
        mem[180] <= 8'h63;
        mem[181] <= 8'h88;
        mem[182] <= 8'h00;
        mem[183] <= 8'h00;
        mem[184] <= 8'h93;
        mem[185] <= 8'h80;
        mem[186] <= 8'hf0;
        mem[187] <= 8'hff;
        mem[188] <= 8'h13;
        mem[189] <= 8'h01;
        mem[190] <= 8'hb0;
        mem[191] <= 8'h03;
        mem[192] <= 8'h6f;
        mem[193] <= 8'hf0;
        mem[194] <= 8'h5f;
        mem[195] <= 8'hf9;
        mem[196] <= 8'h23;
        mem[197] <= 8'ha0;
        mem[198] <= 8'h9d;
        mem[199] <= 8'h01;
        mem[200] <= 8'h6f;
        mem[201] <= 8'hf0;
        mem[202] <= 8'h1f;
        mem[203] <= 8'hf7;
        mem[204] <= 8'h93;
        mem[205] <= 8'h06;
        mem[206] <= 8'ha0;
        mem[207] <= 8'h00;
        mem[208] <= 8'h93;
        mem[209] <= 8'h05;
        mem[210] <= 8'h00;
        mem[211] <= 8'h00;
        mem[212] <= 8'h63;
        mem[213] <= 8'h54;
        mem[214] <= 8'hd5;
        mem[215] <= 8'h00;
        mem[216] <= 8'h67;
        mem[217] <= 8'h00;
        mem[218] <= 8'h0a;
        mem[219] <= 8'h00;
        mem[220] <= 8'h13;
        mem[221] <= 8'h05;
        mem[222] <= 8'h65;
        mem[223] <= 8'hff;
        mem[224] <= 8'h93;
        mem[225] <= 8'h85;
        mem[226] <= 8'h15;
        mem[227] <= 8'h00;
        mem[228] <= 8'h6f;
        mem[229] <= 8'hf0;
        mem[230] <= 8'h1f;
        mem[231] <= 8'hff;
        mem[232] <= 8'h40;
        mem[233] <= 8'h00;
        mem[234] <= 8'h00;
        mem[235] <= 8'h00;
        mem[236] <= 8'h79;
        mem[237] <= 8'h00;
        mem[238] <= 8'h00;
        mem[239] <= 8'h00;
        mem[240] <= 8'h24;
        mem[241] <= 8'h00;
        mem[242] <= 8'h00;
        mem[243] <= 8'h00;
        mem[244] <= 8'h30;
        mem[245] <= 8'h00;
        mem[246] <= 8'h00;
        mem[247] <= 8'h00;
        mem[248] <= 8'h19;
        mem[249] <= 8'h00;
        mem[250] <= 8'h00;
        mem[251] <= 8'h00;
        mem[252] <= 8'h12;
        mem[253] <= 8'h00;
        mem[254] <= 8'h00;
        mem[255] <= 8'h00;
        mem[256] <= 8'h02;
        mem[257] <= 8'h00;
        mem[258] <= 8'h00;
        mem[259] <= 8'h00;
        mem[260] <= 8'h78;
        mem[261] <= 8'h00;
        mem[262] <= 8'h00;
        mem[263] <= 8'h00;
        mem[264] <= 8'h00;
        mem[265] <= 8'h00;
        mem[266] <= 8'h00;
        mem[267] <= 8'h00;
        mem[268] <= 8'h10;
        mem[269] <= 8'h00;
        mem[270] <= 8'h00;
        mem[271] <= 8'h00;
    end else begin 
        if(byteWEn0) begin 
            mem[addr_0] <= i_wdata[7:0];
        end
        if (byteWEn1) begin 
            mem[addr_1] <= i_wdata[15:8];
        end 
        if (byteWEn2) begin 
            mem[addr_2] <= i_wdata[23:16];
        end 
        if (byteWEn3) begin 
            mem[addr_3] <= i_wdata[31:24];
        end
    end
end
always @(*) begin
    o_rdata[7:0] = {8{i_mask[0]}} & mem[addr_0];
    o_rdata[15:8] = {8{i_mask[1]}} & mem[addr_1]; 
    o_rdata[23:16] = {8{i_mask[2]}} & mem[addr_2];
    o_rdata[31:24] = {8{i_mask[3]}} & mem[addr_3];  
end
endmodule