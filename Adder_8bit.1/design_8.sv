module design_8 (
	input unsigned [7:0] M,N,
	input  logic clk_i,
	output logic lcd_e, lcd_rs,lcd_on,lcd_blon,lcd_rw,
	output logic [7:0] data_lcd
	
);
	logic [8:0] OUT;
	logic [7:0] OUT_LCD [2:0];
	
	adder adder0 (
		.M(M),
		.N(N),
		.OUT(OUT)
	);

	bin2dec bin2dec0 (
		.bin_i(OUT),
		.dec_o(OUT_LCD)
	);

	LCD LCD (
		.clk(clk_i),
		.lcd_e(lcd_e),
		.lcd_rs(lcd_rs),
		.lcd_on(lcd_on),
		.lcd_blon(lcd_blon),
		.lcd_rw(lcd_rw),
		.data_lcd(data_lcd),
		.data_i(OUT_LCD),
	);
endmodule
