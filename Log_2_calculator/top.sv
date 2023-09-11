module top(
	input logic clk_i,
	input logic [15:0] data_log,
	output logic lcd_e,lcd_rs,lcd_on,lcd_blon,lcd_rw,
	output logic [7:0] data
);
design_6 dut(
	.clk_i(clk_i),
	.lcd_e(lcd_e),
	.lcd_rs(lcd_rs),
	.lcd_on(lcd_on),
	.lcd_blon(lcd_blon),
	.lcd_rw(lcd_rw),
	.data_log(data_log),
	.data(data)
);

endmodule
