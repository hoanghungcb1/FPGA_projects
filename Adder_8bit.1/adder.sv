module adder (
input unsigned [7:0] M,N,
output unsigned [8:0] OUT);

reg unsigned [7:0] C,S;
reg unsigned [2:0] j;
always_comb	begin 
			C[0] = 0;
			for (j=0; j<7;j++)
				begin 
					S[j] = M[j] ^ N[j] ^ C[j];
					C[j+1] = ((M[j] ^ N[j]) & C[j]) | (M[j] & N[j]);
				end
			S[7] =  M[7] ^ N[7] ^ C[7];
			OUT[8] = ((M[7] ^ N[7]) & C[7]) | (M[7] & N[7]);
			OUT[7:0] = S;
	end

endmodule 