module myDff(
    input logic i_clk,
    input logic i_rst,
    input logic i_wr_enable,
    input logic i_wr_data,
    output logic o_rd_data
);
logic regStore;
always @(posedge i_clk or posedge i_rst) begin
    if(i_rst) begin 
        regStore <= 1'd0;
    end else begin 
        if(i_wr_enable) begin 
            regStore <= i_wr_data;
        end
    end
end
assign o_rd_data = regStore;
endmodule