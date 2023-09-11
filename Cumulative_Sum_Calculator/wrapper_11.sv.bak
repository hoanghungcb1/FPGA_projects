module wrapper_10 (
// input
input logic CLOCK_50,
input logic [16:0] SW,
// output
output logic LCD_EN, LCD_RS,LCD_ON,LCD_BLON,LCD_RW,LEDR[0],
output logic [7:0] LCD_DATA
);
design_10 dut (
.clk_i (CLOCK_50),
.done (LEDR[0]),
.A_i(SW[7:0]),
.B_i(SW[15:8]),
.go(SW[16]),
.lcd_e(LCD_EN),
.lcd_rs(LCD_RS),
.lcd_on(LCD_ON),
.lcd_blon(LCD_BLON),
.lcd_rw(LCD_RW),
.data_lcd(LCD_DATA),
);
endmodule
