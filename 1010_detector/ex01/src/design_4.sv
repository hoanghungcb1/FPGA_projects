module design_4 (
input logic clk_i, rstn, w,
output logic z);
typedef enum logic [2:0]{
	S0 = 3'b000,
	S1 = 3'b001,
	S2 = 3'b010,
	S3 = 3'b011,
	S4 = 3'b100
} state;

state y,ctn_y;

// Define the next state combinational circuit
always_comb begin
	case (y)
	S0: if (w) ctn_y = S1;
		else ctn_y = S0;
	S1: if (w) ctn_y = S1;
		else ctn_y = S2;
	S2: if (w) ctn_y = S3;
		else ctn_y = S0;
	S3: if (w) ctn_y = S1;
		else ctn_y = S4;
	S4: if (w) ctn_y = S3;
		else ctn_y = S0;
default: ctn_y = S0;
endcase
// Define output
z = (y == S4);
end
// Define the sequential block
always_ff @(negedge rstn or posedge clk_i)
if (rstn == 0) y <= S0;
else y <= ctn_y;

`ifdef VERILATOR
/*verilator lint_off UNUSED*/
always @(posedge clk_i) begin
assert(z <= (y == S4));
end
/*verilator lint_on UNUSED*/
`endif

endmodule
