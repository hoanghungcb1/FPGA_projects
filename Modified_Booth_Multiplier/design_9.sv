module design_9 (
	input logic [7:0] M_i,N_i,
	input  logic clk_i,
	output logic lcd_e, lcd_rs,lcd_on,lcd_blon,lcd_rw,
	output logic [7:0] data_lcd
	
);
	logic [15:0] P;
	logic [7:0] P_LCD [4:0];
	logic [7:0] sign;
	
	multi multi0 (
		.M_i(M_i),
		.N_i(N_i),
		.P(P)
	);

	bin2dec bin2dec0 (
		.bin_i(P),
		.dec_o(P_LCD),
		.sign(sign)
	);

	LCD LCD (
		.sign(sign),
		.clk(clk_i),
		.lcd_e(lcd_e),
		.lcd_rs(lcd_rs),
		.lcd_on(lcd_on),
		.lcd_blon(lcd_blon),
		.lcd_rw(lcd_rw),
		.data_lcd(data_lcd),
		.data_i(P_LCD),
	);
endmodule
