module wrapper_8 (
// input
input logic CLOCK_50,
input logic [15:0] SW,
// output
output logic LCD_EN, LCD_RS,LCD_ON,LCD_BLON,LCD_RW,
output logic [7:0] LCD_DATA
);
design_8 dut (
.clk_i (CLOCK_50),
.M(SW[7:0]),
.N(SW[15:8]),
.lcd_e(LCD_EN),
.lcd_rs(LCD_RS),
.lcd_on(LCD_ON),
.lcd_blon(LCD_BLON),
.lcd_rw(LCD_RW),
.data_lcd(LCD_DATA),
);
endmodule
