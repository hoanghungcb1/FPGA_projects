module design_6 (
	input logic clk_i,
	input logic [15:0] data_log,
	output logic lcd_e,lcd_rs,lcd_on,lcd_blon,lcd_rw,
	output logic [7:0] data
);
	logic [7:0] data_i [3:0];
	
	log_2 log_2(
	.data(data_log),
   .result(data_i)
   );
	LCD LCD (
	.clk_i(clk_i),
	.lcd_e(lcd_e),
	.lcd_rs(lcd_rs),
	.lcd_on(lcd_on),
	.lcd_blon(lcd_blon),
	.lcd_rw(lcd_rw),
	.data(data),
	.data_i(data_i)
	);
endmodule
