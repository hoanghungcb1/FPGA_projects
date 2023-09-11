module alu
	import mypkg::*;
	(
		input logic [31:0] operand_a_i, operand_b_i,
		input logic [3:0]  alu_op_i,

		output logic [31:0] alu_data_o
	);
	alu_op_e alu_op;
	always_comb
	case (alu_op_i)
		4'h0: alu_op = A_ADD;
		4'h1: alu_op = A_SLL;
		4'h2: alu_op = A_SLT;
		4'h3: alu_op = A_SLTU;
		4'h4: alu_op = A_XOR;
		4'h5: alu_op = A_SRL;
		4'h6: alu_op = A_OR;
		4'h7: alu_op = A_AND;
		4'h8: alu_op = A_SUB;
		4'hD: alu_op = A_SRA;
		default: alu_op = A_ADD;
	endcase
	/*verilator lint_off UNUSED*/
	logic [31:0] temp;
	logic [32:0] temp_a, temp_b, temp_result;
	assign temp_a = {1'b0, operand_a_i};
	assign temp_b = {1'b0, operand_b_i};
	assign temp = operand_a_i + ~operand_b_i + 1'b1;
	assign temp_result = temp_a + ~temp_b + 1'b1;
	/*verilator lint_off UNUSED*/
	always_comb
	case(alu_op)
	A_ADD:	alu_data_o = operand_a_i + operand_b_i;
	A_SUB: 	alu_data_o = temp;
	A_SLT:	alu_data_o = temp[31] ? 1 : 0;
	A_SLTU: alu_data_o = temp_result[32] ? 1 : 0;
	A_XOR: 	alu_data_o = operand_a_i ^ operand_b_i;
	A_OR: 	alu_data_o = operand_a_i | operand_b_i;
	A_AND: 	alu_data_o = operand_a_i & operand_b_i;
	A_SLL: 	alu_data_o = operand_a_i << operand_b_i[4:0];
	A_SRL: 	alu_data_o = operand_a_i >> operand_b_i[4:0];
	A_SRA: 	alu_data_o = operand_a_i >>> operand_b_i[4:0];
	default: alu_data_o = operand_a_i +	operand_b_i;
	endcase

endmodule: alu
