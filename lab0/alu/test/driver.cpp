#define MAX_SIM 10000

void set_random(Vtop *dut, vluint64_t sim_unit) {
	dut -> operand_a_i = 0x0000FFFF;
	dut -> operand_b_i = 0x000000FF;
	dut -> alu_op_i = rand() % 16;
}
