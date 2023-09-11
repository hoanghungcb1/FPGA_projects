module wrapper_7 (
// input
input logic CLOCK_50,
input logic [16:0] SW,
input logic [1:0] KEY,
// output
output logic LCD_EN, LCD_RS,LCD_ON,LCD_BLON,LCD_RW,
output logic [7:0] LCD_DATA
);
design_7 dut (
.clk_i (CLOCK_50),
.data_i(SW[15:0]),
.lcd_e(LCD_EN),
.lcd_rs(LCD_RS),
.lcd_on(LCD_ON),
.lcd_blon(LCD_BLON),
.lcd_rw(LCD_RW),
.data_lcd(LCD_DATA),
.data_clk_A(KEY[0]),
.data_clk_B(KEY[1]),
.rstn(SW[16])
);
endmodule
