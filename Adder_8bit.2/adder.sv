module adder(
input logic clk_i,
input unsigned [7:0] M,N,
output unsigned [8:0] OUT);
reg unsigned [7:0] S;
reg C;
reg unsigned [3:0] i;
always @(posedge clk_i)
		begin 
			if (i < 8)
				begin
				/* verilator lint_off WIDTH */
				S[i] <= M[i] ^ N[i] ^ C;
				C <= ((M[i] ^ N[i]) & C) | (M[i] & N[i]);
				i <= i + 1;
				end
			else
				begin
				OUT[7:0] <= S;
				OUT[8] <= C;
				C <= 0;
				S <= 0;
				i <= 0;
				end
		end
endmodule
