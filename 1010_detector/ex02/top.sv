module top(
	input logic clk_i,
	input logic rstn,
	input logic w,
	output logic z
);
	design_4 dut(
		.clk_i (clk_i),
		.rstn (rstn),
		.w (w),
		.z (z)
	);
endmodule : top
