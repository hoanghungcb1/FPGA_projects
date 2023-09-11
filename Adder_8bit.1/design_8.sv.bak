module design_7 (
	input  logic [15:0] data_i,
	input  logic clk_i,data_clk_A,data_clk_B,rstn,
	output logic lcd_e, lcd_rs,lcd_on,lcd_blon,lcd_rw,
	output logic [7:0] data_lcd
	
);
	logic [7:0] sqrt_lcd [4:0];
	logic [7:0] sqrt_lcd_tp [4:0];
	logic [16:0] sqrt_o,sqrt_o_tp;
	logic [32:0] Sum;
	logic [15:0] A,B;
	logic [31:0] A_2,B_2;

	always_ff @(negedge data_clk_A or negedge rstn or negedge data_clk_B) begin
	if (!data_clk_A) A <= data_i;
	if (!data_clk_B) B <= data_i;
	if (!rstn) begin
	A <= 0;
	B <= 0;
	end 
	end 
	
	binh_phuong binh_phuong_A (
		.num_i (A),
		.num_2_o(A_2)
	);
	binh_phuong binh_phuong_B (
		.num_i (B),
		.num_2_o(B_2)
	);
	assign Sum = A_2 + B_2;
	
	sqrt sqrt0 (
		.data_i(Sum),
		.result_o(sqrt_o),
		.result_o_tp(sqrt_o_tp)
	);

	bin2dec bin2dec0 (
		.bin_i(sqrt_o),
		.dec_o(sqrt_lcd)
	);

	bin2dec bin2dec1 (
		.bin_i(sqrt_o_tp),
		.dec_o(sqrt_lcd_tp)
	);

	LCD LCD (
		.clk(clk_i),
		.lcd_e(lcd_e),
		.lcd_rs(lcd_rs),
		.lcd_on(lcd_on),
		.lcd_blon(lcd_blon),
		.lcd_rw(lcd_rw),
		.data_lcd(data_lcd),
		.data_i(sqrt_lcd),
		.data_i_tp(sqrt_lcd_tp)
	);
endmodule
