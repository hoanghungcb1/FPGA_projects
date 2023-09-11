module LCD(clk_i,lcd_e,lcd_rs,lcd_on,lcd_blon,data,data_i,lcd_rw);

input clk_i;
input [7:0] data_i [3:0];
output reg lcd_e, lcd_rs,lcd_on,lcd_blon,lcd_rw;
output reg [7:0] data;
integer i = 0;
integer j = 1;

reg [7:0] Datas [1:25];

always @(posedge clk_i) begin
lcd_blon <= '1;
lcd_on <= '1;
lcd_rw <= '0;
Datas[1]   <=  8'h38;   	//-- control instruction : configure - 2 lines
Datas[2]   <=  8'h0C;   	//-- control instruction : Display on, cursor off --
Datas[3]   <=  8'h06;   	//-- control instruction : Increment cursor : shift cursor to right --
Datas[4]   <=  8'h01;   	//-- control instruction : clear display screen --
Datas[5]   <=  8'h80;   	//-- control instruction : force cursor to begin at first line --

Datas[6]   <=  8'h4C;   	//-- L --
Datas[7]   <=  8'h6F;   	//-- o --
Datas[8]   <=  8'h67;   	//-- g --
Datas[9]   <=  8'h32;   	//-- 2 --
Datas[10]  <=  8'h28;   	//-- ( --
Datas[11]  <=  8'h58;   	//-- X --
Datas[12]  <=  8'h29;   	//-- ) --
Datas[13]  <=  8'h3D;   	//-- = --

Datas[14]  <=  data_i[0] + 8'h30;   	
Datas[15]  <=  data_i[1] + 8'h30;   	
Datas[16]  <=  8'h2E;   	//-- . --
Datas[17]  <=  data_i[2] + 8'h30;
Datas[18]  <=  data_i[3] + 8'h30;

Datas[19]  <=  8'h21;   	//-- ! --
Datas[20]  <=  8'h21;   	//-- ! --
Datas[21]  <=  8'h21;   	//-- ! --
Datas[22]  <=  8'hC0;   	//-- control instruction : force cursor to move to 2nd Line --
end		
		
always @(posedge clk_i) begin

//-- Delay for writing data
	
  if (i <= 1000000) begin
  i <= i + 1; lcd_e <= 1;
  data <= Datas[j];
  end
  
  else if (i > 1000000 & i < 2000000) begin
  i <= i + 1; lcd_e <= 0;
  end
  
  else if (i == 2000000) begin
  j <= j + 1; i <= 0;
  end
  else i <= 0;
  
 //-- LCD_RS signal should be set to 0 for writing commands and to 1 for writing data

  if (j <= 5 ) lcd_rs <= 0;  
  else if (j > 5 & j< 22) lcd_rs <= 1;   
  else if (j == 22) lcd_rs <= 0;
  else if (j > 22) begin 
  lcd_rs <= 1; j <= 5;
  end
 
 end
endmodule
