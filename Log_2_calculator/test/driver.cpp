#define MAX_SIM 20

void set_random(Vtop *dut, vluint64_t sim_unit) {
	dut -> data_log = rand()%16;
}
