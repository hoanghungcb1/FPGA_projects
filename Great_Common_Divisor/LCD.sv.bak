module LCD (clk,lcd_e,lcd_rs,lcd_on,lcd_blon,data_lcd,data_i,lcd_rw);
/* verilator lint_off BLKSEQ */
input clk;
input [7:0] data_i [2:0];
output reg lcd_e, lcd_rs,lcd_on,lcd_blon,lcd_rw;
output reg [7:0] data_lcd;
integer i = 0;
integer j = 1;

reg [7:0] Datas [1:23];

always @(posedge clk) begin
lcd_blon = '1;
lcd_on = '1;
lcd_rw = '0;
Datas[1]   =  8'h38;   	//-- control instruction : configure - 2 lines
Datas[2]   =  8'h0C;   	//-- control instruction : Display on, cursor off --
Datas[3]   =  8'h06;   	//-- control instruction : Increment cursor : shift cursor to right --
Datas[4]   =  8'h01;   	//-- control instruction : clear display screen --
Datas[5]   =  8'h80;   	//-- control instruction : force cursor to begin at first line --

Datas[6]   =  8'h4D;   	//-- M --
Datas[7]   =  8'h20;   	//--   --
Datas[8]   =  8'h2B;   	//-- + --
Datas[9]   =  8'h20;   	//--   --
Datas[10]  =  8'h4E;   	//-- N --
Datas[11]  =  8'h20;   	//--   --
Datas[12]  =  8'h3D;   	//-- = --
Datas[13]  =  8'h20;   	//--   --
Datas[14]  =  8'h20;	   //--   --
Datas[15]  =  8'h20; 	//--   --
Datas[16]  =  8'h20;	   //--   --
Datas[17]  =  8'h20;		//--   --
Datas[18]  =  8'h20;		//--   --
Datas[19]  =  8'h20;   	//--   --
Datas[20]  =  8'hC0;   	//-- control instruction : force cursor to move to 2nd Line --
Datas[21]  =  data_i[2] + 8'h30;	
Datas[22]  =  data_i[1] + 8'h30;
Datas[23]  =  data_i[0] + 8'h30;
end		
		
always @(posedge clk) begin

//-- Delay for writing data
	
  if (i <= 1000000) begin
  i = i + 1; lcd_e = 1;
  data_lcd = Datas[j];
  end
  
  else if (i > 1000000 & i < 2000000) begin
  i = i + 1; lcd_e = 0;
  end
  
  else if (i == 2000000) begin
  j = j + 1; i = 0;
  end
  else i = 0;
  
 //-- LCD_RS signal should be set to 0 for writing commands and to 1 for writing data

  if (j <= 5 ) lcd_rs = 0;  
  else if (j > 5 & j < 20) lcd_rs = 1;   
  else if (j == 20) lcd_rs = 0;
  else if (j > 20 & j < 24) lcd_rs = 1;
  else j=5;
  
end
/* verilator lint_on BLKSEQ */
endmodule
