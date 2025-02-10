module ysyx_24090013_Reg #(parameter WIDTH = 1, parameter RESET_VAL = 0) (
  input clk,
  input rst,
  input [WIDTH-1:0] din,
  input wen,
  output reg [WIDTH-1:0] dout
);
  always @(posedge clk) begin
    if (rst) dout <= RESET_VAL;
    else if (wen) dout <= din;
  end
endmodule

