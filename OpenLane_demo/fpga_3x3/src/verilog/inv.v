// ----- Verilog module for INVTX1 -----
module INVTX1(in, out);
  input [0:0] in;
  output [0:0] out;

  assign out = ~in;

endmodule

