create_clock -name clock -period 480 [get_ports clk]
create_clock -name prog_clock -period 10 [get_ports prog_clk]

set_clock_groups -physically_exclusive -group clock -group prog_clock
