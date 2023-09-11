module LCD (clk,lcd_e,lcd_rs,lcd_on,lcd_blon,data_lcd,data_i,data_a_i,data_b_i,lcd_rw);
/* verilator lint_off BLKSEQ */
input clk;
input [7:0] data_i [2:0];
input [7:0] data_a_i [2:0];
input [7:0] data_b_i [2:0];
output reg lcd_e, lcd_rs,lcd_on,lcd_blon,lcd_rw;
output reg [7:0] data_lcd;
integer i = 0;
integer j = 1;

reg [7:0] Datas [1:24];

always @(posedge clk) begin
lcd_blon = '1;
lcd_on = '1;
lcd_rw = '0;
Datas[1]   =  8'h38;   	//-- control instruction : configure - 2 lines
Datas[2]   =  8'h0C;   	//-- control instruction : Display on, cursor off --
Datas[3]   =  8'h06;   	//-- control instruction : Increment cursor : shift cursor to right --
Datas[4]   =  8'h01;   	//-- control instruction : clear display screen --
Datas[5]   =  8'h80;   	//-- control instruction : force cursor to begin at first line --

Datas[6]   =  8'h41;   	//-- A --
Datas[7]   =  8'h3D;   	//-- = --
Datas[8]   =  data_a_i[2] + 8'h30;	
Datas[9]   =  data_a_i[1] + 8'h30;
Datas[10]  =  data_a_i[0] + 8'h30;
Datas[11]  =  8'h3B;   	//-- ; --
Datas[12]  =  8'h42;   	//-- B --
Datas[13]  =  8'h3D;   	//-- = --
Datas[14]  =  data_b_i[2] + 8'h30;	
Datas[15]  =  data_b_i[1] + 8'h30;
Datas[16]  =  data_b_i[0] + 8'h30;
Datas[17]  =  8'hC0;   	//-- control instruction : force cursor to move to 2nd Line --
Datas[18]  =  8'h47;	   //-- G --
Datas[19]  =  8'h43;		//-- C --
Datas[20]  =  8'h44;		//-- D --
Datas[21]  =  8'h3D;   	//-- = --
Datas[22]  =  data_i[2] + 8'h30;	
Datas[23]  =  data_i[1] + 8'h30;
Datas[24]  =  data_i[0] + 8'h30;
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
  else if (j > 5 & j < 17) lcd_rs = 1;   
  else if (j == 17) lcd_rs = 0;
  else if (j > 17 & j < 25) lcd_rs = 1;
  else j=5;
  
end
/* verilator lint_on BLKSEQ */
endmodule
