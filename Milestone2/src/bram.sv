module bram #(
    parameter ADDR_WIDTH = 9,  // Address width (16 locations)
    parameter DATA_WIDTH = 8   // Data width (8-bit per location)
)(
    input  logic i_clk,
    input  logic i_reset,
    input  logic i_we,                      // Write enable
    input  logic [ADDR_WIDTH-1:0] i_addr,   // Address bus
    input  logic [DATA_WIDTH-1:0] i_data,// Write data
    output logic [DATA_WIDTH-1:0] o_data// Read data (asynchronous)
);
    // Memory declaration
    (* ramstyle = "M9K" *) logic [DATA_WIDTH:0] mem [0:(1<<ADDR_WIDTH) - 1];  // 1K x 8-bit BRAM
    //logic [DATA_WIDTH-1:0] mem [0:(1<<ADDR_WIDTH)-1];

    always_ff @(posedge i_clk) begin
        if(!i_reset) begin
            for(int i = 0; i < (1<<ADDR_WIDTH); i = i + 1) begin 
                mem[i] <= 8'd0;
            end
        end else begin 
            if (i_we) begin 
                mem[i_addr] <= i_data;  // Write operation (synchronous)
            end
        end
    end

    always_comb begin
        o_data = mem[i_addr];  // Read operation (asynchronous)
    end

endmodule