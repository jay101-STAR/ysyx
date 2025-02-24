`include "ysyx_24090013_pc.v"
module ysyx_24090013_openmips(
	input clk,
	input rst,

	input [31:0]instrom_openmips_data,
	output [31:0]openmips_instrom_addr,
	output openmips_instrom_ren
);
	//connect pc to id
	wire [31:0] pc_id_pc;

	//connect id to regsterfile
	wire [31:0] reg_id_rs1_data,reg_id_rs2_data;

	//connect regsterfile to id
	wire        id_reg_rs1_ren ,id_reg_rs2_ren ;
	wire [4 :0] id_reg_rs1_addr,id_reg_rs2_addr;

	//connect id to ex
	wire [31:0] id_ex_rs1_data ,id_ex_rs2_data ;
	wire        id_ex_rd_wen   ;
	wire [4 :0] id_ex_rd_addr  ;
	wire [3 :0] id_ex_aluc     ;
	wire [7 :0] id_ex_alucex   ;
	wire [31:0] id_ex_pc;

	//connect ex to regsterfile
	wire [31:0] ex_reg_rd_data;
	wire [4 :0] ex_reg_rd_addr;
	wire        ex_reg_rd_wen ;

	//connect ex to pc
	wire ex_pc_pc_wen;
	wire [31:0]ex_pc_pc_data;


	ysyx_24090013_pc ysyx_24090013_pc0(
		.clk(clk),
		.rst(rst),
		.ren(openmips_instrom_ren),
		.ex_pc_pc_wen(ex_pc_pc_wen),
		.ex_pc_pc_data(ex_pc_pc_data),
		.next_pc(openmips_instrom_addr),
		.pc_id_pc(pc_id_pc)
	);

	ysyx_24090013_id ysyx_24090013_id0(
		.id_inst(instrom_openmips_data)   ,
		.pc_id_pc(pc_id_pc),
		.reg_id_rs1_data(reg_id_rs1_data) , .reg_id_rs2_data(reg_id_rs2_data) ,
		.id_reg_rs1_ren(id_reg_rs1_ren)   , .id_reg_rs2_ren(id_reg_rs2_ren)   ,
		.id_reg_rs1_addr(id_reg_rs1_addr) , .id_reg_rs2_addr(id_reg_rs2_addr) ,
		.id_ex_rs1_data(id_ex_rs1_data)   , .id_ex_rs2_data(id_ex_rs2_data)   ,
		.id_ex_rd_wen(id_ex_rd_wen)       ,
		.id_ex_rd_addr(id_ex_rd_addr)     ,
		.id_ex_aluc(id_ex_aluc)           ,
		.id_ex_alucex(id_ex_alucex)       ,
		.id_ex_pc(id_ex_pc)
	);

	ysyx_24090013_ex ysyx_24090013_ex0(
		.id_ex_aluc(id_ex_aluc), 
		.id_ex_alucex(id_ex_alucex),
		.id_ex_rd_addr(id_ex_rd_addr),
		.id_ex_rd_wen(id_ex_rd_wen),
		.id_ex_rs1_data(id_ex_rs1_data), .id_ex_rs2_data(id_ex_rs2_data),
		.id_ex_pc(id_ex_pc),
		.ex_reg_rd_wen(ex_reg_rd_wen),
		.ex_reg_rd_data(ex_reg_rd_data),
		.ex_reg_rd_addr(ex_reg_rd_addr),
		.ex_pc_pc_wen(ex_pc_pc_wen),
		.ex_pc_pc_data(ex_pc_pc_data)
	);

	ysyx_24090013_registerfile ysyx_24090013_registerfile0(
		.clk(clk)                   ,
		.wdata(ex_reg_rd_data)      ,
		.waddr(ex_reg_rd_addr)      ,
		.wen(ex_reg_rd_wen)         ,
		.rs1_ren(id_reg_rs1_ren)    , .rs1_raddr(id_reg_rs1_addr) ,
		.rs2_ren(id_reg_rs2_ren)    , .rs2_raddr(id_reg_rs2_addr) ,
		.rs1_rdata(reg_id_rs1_data) , .rs2_rdata(reg_id_rs2_data)
	);


endmodule

