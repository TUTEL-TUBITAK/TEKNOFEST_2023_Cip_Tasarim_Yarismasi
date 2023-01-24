`timescale 1ns / 100ps 

module tb_Main;

    wire [9:0] RAM_ADDR;
    wire [31:0] RAM_READ_DATA;
    wire [31:0] RAM_WRITE_DATA;
    wire RAM_WRITE_ENABLE;

    wire [9:0] INSTRUCTION_ADDR;
    wire [31:0] INSTRUCTION;
    reg CLK = 1;
    
    Main dut(.CLK(CLK), .GPIO(GPIO));

    initial begin
        for(integer i=0; i<40; i=i+1) begin
            CLK=1; #20; CLK=0; #20;
        end
    end

    initial begin
        $dumpfile("vcd/main.vcd");
        $dumpvars(0, tb_Main);
    end
    
endmodule