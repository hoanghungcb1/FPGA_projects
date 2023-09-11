module top
	(
		/*verilator lint_off UNUSED*/
		input logic [31:0] operand_a_i, operand_b_i,
		input logic [3:0]  alu_op_i,
		input logic clk_i,
	
		output logic [31:0] alu_data_o
		/*verilator lint_off UNUSED*/
	);

	alu dut(
		.operand_a_i (operand_a_i),
		.operand_b_i (operand_b_i),
		.alu_op_i	 (alu_op_i),
		.alu_data_o  (alu_data_o)
	);
endmodule: top
