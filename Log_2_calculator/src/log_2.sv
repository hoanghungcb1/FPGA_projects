module log_2(
    input logic [15:0] data,
    output logic [7:0] result [3:0]
);
logic [3:0] y;
logic [3:0] temp;
logic [6:0] y_tp;
logic [15:0] x,t;

always_comb begin
//ket qua so nguyen
	 x=data;
	 y=14;
  if(x<16'h0080) begin
  x= x<< 8;              
  y = y - 4'd8; end
  if(x<16'h0800) begin
  x= x<< 4;              
  y = y - 4'd4; end
  if(x<16'h2000) begin 
  x= x<< 2;
  y = y - 4'd2; end
  if(x<16'h4000) begin 
  x= x<< 1;
  y = y - 4'd1; end
// ket qua thap phan
  y_tp = 7'd100;
  t=x+(x>>1); 
  if((t&16'h8000)==0) begin
  x=t;
  y_tp = y_tp - 7'd58; end
  t=x+(x>>2); 
  if((t&16'h8000)==0) begin
  x=t;
  y_tp = y_tp - 7'd32; end
  t=x+(x>>3); 
  if((t&16'h8000)==0) begin
  x=t;
  y_tp = y_tp - 7'd17; end
  t=x+(x>>4); 
  if((t&16'h8000)==0) begin
  x=t;
  y_tp = y_tp - 7'd9; end
  t=x+(x>>5);
  if((t&16'h8000)==0) begin
  x=t;
  y_tp = y_tp - 7'd4; end
  t=x+(x>>6); 
  if((t&16'h8000)==0) begin 
  x=t;
  y_tp = y_tp - 7'd2; end
  t=x+(x>>7); 
  if((t&16'h8000)==0) begin
  x=t;
  y_tp = y_tp - 7'd1; end
  
y_tp = y_tp-1; 

if (data == '0) begin 
y = '0;
y_tp = '0;
end
if (data >= 16'h8000) begin 
y = 4'd15;
y_tp = '0; end
//xu ly ket qua
temp = 4'bxxxx;
	/* verilator lint_off WIDTH */
	temp = '0;
	if (y>9) begin
		for(int i=0;i<10;i++) begin
			y = y - 10;
			temp = temp+1;
			if (y<9) break;
		end
	result[0] = temp;
	result[1] = y;
	end
	else begin
	result[0] = 0;
	result[1] = y;
	end
	
	temp = '0;
	if (y_tp>9) begin
		for(int i=0;i<10;i++) begin
			y_tp = y_tp - 10;
			temp = temp+1;
			if (y_tp<9) break;
		end
	result[2] = temp;
	result[3] = y_tp;
	end
	else begin
	result[2] = 0;
	result[3] = y_tp;
	end
	/* verilator lint_off WIDTH */
	
end
endmodule
