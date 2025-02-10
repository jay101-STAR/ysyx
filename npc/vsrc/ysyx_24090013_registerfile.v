module ysyx_24090013_registerfile(
	input clk,
	input [31:0]wdata,
	input [4:0] waddr,
	input wen,
	input rs1_ren,
	input [4:0] rs1_raddr,
	output [31:0] rs1_rdata,
	input rs2_ren,
	input [4:0] rs2_raddr,
	output [31:0] rs2_rdata
);
	registerfile #(5,32) i0 (.clk(clk), .wdata(wdata), .waddr(waddr), .wen(wen), .rs1_ren(rs1_ren), .rs1_raddr(rs1_raddr), .rs1_rdata(rs1_rdata),
	                                                                             .rs2_ren(rs2_ren), .rs2_raddr(rs2_raddr), .rs2_rdata(rs2_rdata));

endmodule


module registerfile #(parameter ADDR_WIDTH = 1,parameter DATA_WIDTH = 1) (
  input clk,
  input [DATA_WIDTH-1:0] wdata,
  input [ADDR_WIDTH-1:0] waddr,
  input wen,
  input rs1_ren,
  input [4:0] rs1_raddr,
  output [31:0] rs1_rdata,
  input rs2_ren,
  input [4:0] rs2_raddr,
  output [31:0] rs2_rdata
);
  reg [DATA_WIDTH-1:0] rf [2**ADDR_WIDTH-1:0];
  always @(posedge clk) begin
    if (wen) rf[waddr] <= wdata;
  end
  assign rs1_rdata = rs1_ren? rf[rs1_raddr] : 32'b0;
  assign rs2_rdata = rs2_ren? rf[rs2_raddr] : 32'b0;
endmodule
