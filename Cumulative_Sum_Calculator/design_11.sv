module design_11 (
	input logic [7:0] N_i,data_i,
	input  logic clk_i,start,clk_data,
	output logic lcd_e, lcd_rs,lcd_on,lcd_blon,lcd_rw,done,
	output logic [7:0] data_lcd
);
	logic [7:0] N_out;
	logic [15:0] OUT;
	logic [7:0] OUT_LCD [4:0];
	logic [7:0] N_LCD [2:0];
	
	test11 test11 (
		.start(start),
		.clk_data(clk_data),
		.N_in(N_i),
		.data_in(data_i),
		.sum_out(OUT),
		.N_out(N_out),
		.done(done)
	);

	bin2dec_5d bin2dec_5d (
		.bin_i(OUT),
		.dec_o(OUT_LCD)
	);
	
	bin2dec bin2dec (
		.bin_i(N_out),
		.dec_o(N_LCD)
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
		.data_N_i(N_LCD),
	);
endmodule
