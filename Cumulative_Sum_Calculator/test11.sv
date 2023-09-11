module test11 (
  input logic clk_data,      // clock input
  input logic start,      // reset input
  output logic done,    // done signal output
  input logic [7:0] data_in,N_in,  // data input
  output logic [7:0] N_out,  // accumulated sum output
  output logic [15:0] sum_out
);

  logic [7:0] data_N;
  logic [15:0] sum;
  logic enable;

always_ff @(negedge clk_data or posedge start) begin
		if (start) begin   // start
			data_N = N_in;
			done = 0;
			enable = 1;
			sum = '0;
		end
		else if (enable) begin   // accumulate
			sum = sum + data_in;
			data_N = data_N - 8'b1;
			if (data_N == 0) begin
				done = 1;
				enable = 0;
			end
		end
			sum_out = sum;
			N_out = data_N;
		
end

endmodule
