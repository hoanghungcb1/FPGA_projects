module test10(
	input logic [7:0] a_in,
	input logic [7:0] b_in,
	input logic clk_i,go,
	output logic done,
	output logic [7:0] r_o
);
	logic [7:0] a;
	logic [7:0] b;

always_ff @(posedge clk_i) begin
	if (!go) begin
	a = a_in;
	b = b_in;
	done = '0;
	r_o = 0;
	end 
	if (go) begin
		if (a == b) begin
			done = 1'b1;
			r_o = a;
			end 
		else if (a < b) begin
			b = b - a;
			done = '0;
      end 
		else begin
			a = a - b;
			done  = '0;
		end
	end
end
endmodule 
