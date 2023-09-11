module bin2dec (
	input logic [7:0] bin_i,
	output logic [7:0] dec_o [2:0]
);
	logic [3:0] temp;
	logic [16:0] y;
	/* verilator lint_off WIDTH */
	always_comb begin 
	y = bin_i;
//hang tram
	temp = '0;
	if (y>99) begin
		for(int i=0;i<10;i++) begin
			y = y - 100;
			temp = temp+1;
			if (y<100) break;
		end
	dec_o[2] = temp;
	end
	else dec_o[2] = 0;
//hang chuc
	temp = '0;
	if (y>9) begin
		for(int i=0;i<10;i++) begin
			y = y - 10;
			temp = temp+1;
			if (y<10) break;
		end
	dec_o[1] = temp;
	dec_o[0] = y;
	end
	else begin
	dec_o[1] = 0;
	dec_o[0] = y;
	end

end
/* verilator lint_on WIDTH */
endmodule

