onerror {quit -f}
vlib work
vlog -work work wrapper_9.vo
vlog -work work wrapper_9.vt
vsim -novopt -c -t 1ps -L cycloneii_ver -L altera_ver -L altera_mf_ver -L 220model_ver -L sgate work.wrapper_9_vlg_vec_tst
vcd file -direction wrapper_9.msim.vcd
vcd add -internal wrapper_9_vlg_vec_tst/*
vcd add -internal wrapper_9_vlg_vec_tst/i1/*
add wave /*
run -all
