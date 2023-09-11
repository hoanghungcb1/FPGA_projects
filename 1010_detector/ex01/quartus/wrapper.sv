module wrapper (
	input logic KEY[0],
	input logic [1:0] SW,
	output logic LEDR[0]
);
	design_4 dut(
		.clk_i (KEY[0]),
		.rstn (SW[1]),
		.w (SW[0]),
		.z (LEDR[0])
	);
endmodule
