#define MAX_SIM 20

void set_random(Vtop *dut, vluint64_t sim_unit) {
	dut -> data_i = rand()%16;
	dut -> data_clk_A = rand()%1;
	dut -> data_clk_B = rand()%1;
	dut->rstn = (sim_unit > 4) && (rand()%30 != 0);
}
