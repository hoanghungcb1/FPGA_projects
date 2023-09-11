module top(
	input  logic [15:0] data_i,
	input  logic clk_i,data_clk_A,data_clk_B,rstn,
	output logic lcd_e, lcd_rs,lcd_on,lcd_blon,lcd_rw,
	output logic [7:0] data_lcd
);
	design_7 dut(
		.clk_i(clk_i),
		.lcd_e(lcd_e),
		.lcd_rs(lcd_rs),
		.lcd_on(lcd_on),
		.lcd_blon(lcd_blon),
		.lcd_rw(lcd_rw),
		.data_i(data_i),
		.data_lcd(data_lcd),
		.data_clk_A(data_clk_A),
		.data_clk_B(data_clk_B),
		.rstn(rstn)
	);
	
endmodule
