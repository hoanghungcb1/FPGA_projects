module multi (
	input logic [7:0] M_i, N_i,
	output logic [15:0] P
);
	logic [8:0] N;
	logic [15:0] M, M0, M2, M4, M6;
	always_comb begin
		N = {N_i, 1'b0};
		if(M_i[7]) begin
			M = {8'b11111111, M_i};
		end
		else begin
			M = {8'b00000000, M_i};
		end

		case(N[2:0])
			3'b010: M0 = M;
			3'b100: M0 = (~M + 1) * 2;
			3'b110: M0 = ~M + 1;
			default: M0 = '0;
		endcase
		case(N[4:2])
			3'b000, 3'b111: M2 = '0;
			3'b001, 3'b010: M2 = M << 2;
			3'b011: M2 = (M << 2) * 2;
			3'b100: M2 = (~(M << 2) + 1) * 2;
			3'b101, 3'b110: M2 = (~(M << 2) + 1);
		endcase
		case(N[6:4])
			3'b000, 3'b111: M4 = '0;
			3'b001, 3'b010: M4 = M << 4;
			3'b011: M4 = (M << 4) * 2;
			3'b100: M4 = (~(M << 4) + 1) * 2;
			3'b101, 3'b110: M4 = (~(M << 4) + 1);
		endcase
		case(N[8:6])
			3'b000, 3'b111: M6 = '0;
			3'b001, 3'b010: M6 = M << 6;
			3'b011: M6 = (M << 6) * 2;
			3'b100: M6 = (~(M << 6) + 1) * 2;
			3'b101, 3'b110: M6 = (~(M << 6) + 1);
		endcase
		P = M0 + M2 + M4 + M6;
	end
endmodule