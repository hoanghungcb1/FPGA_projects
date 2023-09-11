module sqrt(
	input logic [32:0] data_i,
	output logic [16:0] result_o,result_o_tp
);
	
	logic [16:0] frac [4:0];
	integer i;
	logic [90:0] Y;
	logic [42:0] P, X_i;
	/* verilator lint_off WIDTH */
	always_comb begin
		P = 43'd0;
		X_i = data_i << 10;
		for(i = 42; i >= 0; i--) begin
			Y = (P << (i + 1)) + (43'd1 << (i + i));
			if(Y <= X_i) begin
				P[i] = 1;
				X_i = X_i - Y;
			end
			else P[i] = 0;
		end
	frac[4] = {17{P[4]}}&17'd50000; 
	frac[3] = {17{P[3]}}&17'd25000;
	frac[2] = {17{P[2]}}&17'd12500;
	frac[1] = {17{P[1]}}&17'd6250;
	frac[0] = {17{P[0]}}&17'd3125;
	result_o_tp = frac[0] + frac[1] + frac[2] + frac[3] + frac[4];
	result_o = P >> 5;
	end
	/* verilator lint_on WIDTH */
endmodule
