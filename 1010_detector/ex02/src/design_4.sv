module design_4 (
input logic clk_i, rstn, w,
output logic z);
typedef enum logic [1:0]{
	S0 = 2'b00,
	S1 = 2'b01,
	S2 = 2'b10,
	S3 = 2'b11
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
		else ctn_y = S2;
default: ctn_y = S0;
endcase
// Define output
z = ((y == S3)&(w==0));
end
// Define the sequential block
always_ff @(negedge rstn or posedge clk_i)
if (rstn == 0) y <= S0;
else y <= ctn_y;

`ifdef VERILATOR
/*verilator lint_off UNUSED*/
always @(posedge clk_i) begin
assert(z <= ((y == S3)&(w==0)));
end
/*verilator lint_on UNUSED*/
`endif

endmodule
