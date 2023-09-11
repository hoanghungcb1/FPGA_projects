module wrapper_11 (
// input
input logic CLOCK_50,
input logic [16:0] SW,
input logic KEY [0],
// output
output logic LCD_EN, LCD_RS,LCD_ON,LCD_BLON,LCD_RW,LEDR[0],
output logic [7:0] LCD_DATA
);
design_11 dut (
.clk_data(KEY[0]),
.clk_i (CLOCK_50),
.done (LEDR[0]),
.N_i(SW[7:0]),
.data_i(SW[15:8]),
.start(SW[16]),
.lcd_e(LCD_EN),
.lcd_rs(LCD_RS),
.lcd_on(LCD_ON),
.lcd_blon(LCD_BLON),
.lcd_rw(LCD_RW),
.data_lcd(LCD_DATA),
);
endmodule
