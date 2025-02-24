`include "ysyx_24090013_Reg.v"
module ysyx_24090013_pc(
	input clk,
	input rst,
	input ex_pc_pc_wen,
	input [31:0]ex_pc_pc_data,
	output ren,
	output [31:0]next_pc,
	output [31:0]pc_id_pc
);	
	wire [31:0]new_pc;
	assign new_pc = ex_pc_pc_wen ? ex_pc_pc_data:next_pc + 4;
	ysyx_24090013_Reg #(.WIDTH(32),.RESET_VAL(32'h8000_0000)) pc_id (.clk(clk),.rst(rst),.din(new_pc),.dout(pc_id_pc),.wen(ren));	
	ysyx_24090013_Reg #(.WIDTH(32),.RESET_VAL(32'h8000_0000)) pc (.clk(clk),.rst(rst),.din(new_pc),.dout(next_pc),.wen(ren));	
	ysyx_24090013_Reg #(.WIDTH(1),.RESET_VAL(1'b0)) en (.clk(clk),.rst(rst),.din(1'b1),.dout(ren),.wen(1'b1));	
endmodule
