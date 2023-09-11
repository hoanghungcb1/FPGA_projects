module design_10 (
	input logic [7:0] A_i,B_i,
	input  logic clk_i,go,
	output logic lcd_e, lcd_rs,lcd_on,lcd_blon,lcd_rw,done,
	output logic [7:0] data_lcd
);
	logic [7:0] OUT;
	logic [7:0] OUT_LCD [2:0];
	logic [7:0] A_LCD [2:0];
	logic [7:0] B_LCD [2:0];
	
	test10 test10 (
		.go(go),
		.clk_i(clk_i),
		.a_in(A_i),
		.b_in(B_i),
		.r_o(OUT),
		.done(done)
	);

	bin2dec bin2dec0 (
		.bin_i(OUT),
		.dec_o(OUT_LCD)
	);
	
	bin2dec bin2dec1 (
		.bin_i(A_i),
		.dec_o(A_LCD)
	);
	
	bin2dec bin2dec2 (
		.bin_i(B_i),
		.dec_o(B_LCD)
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
		.data_a_i(A_LCD),
		.data_b_i(B_LCD)
	);
endmodule
