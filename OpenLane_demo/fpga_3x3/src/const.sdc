create_clock -name clock -period 20 [get_ports clk]
create_clock -name prog_clock -period 10 [get_ports prog_clk]

set_false_path -from [get_clocks {clock}] -to [get_clocks {prog_clock}]