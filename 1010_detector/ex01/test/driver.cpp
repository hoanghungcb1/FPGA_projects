#define MAX_SIM 30

void set_random(Vtop *dut, vluint64_t sim_unit) {
	dut -> w = rand()%2;
	dut -> rstn = (sim_unit > 4) && (rand()%30 != 0);
}
