`include "ysyx_24090013_define.v"
`include "ysyx_24090013_muxwithdefault.v"
module ysyx_24090013_ex(
	input [3:0] id_ex_aluc,
	input [7:0] id_ex_alucex,
	input [4:0] id_ex_rd_addr,
        input id_ex_rd_wen,
	input [31:0]id_ex_rs1_data,id_ex_rs2_data,
	input [31:0] id_ex_pc,
	output [31:0] ex_reg_rd_data,
	output [4:0] ex_reg_rd_addr,
	output ex_reg_rd_wen,
	output ex_pc_pc_wen,
	output [31:0]ex_pc_pc_data
	
);
	wire [31:0]ex_reg_rd_data1;
	wire [31:0]result_add = id_ex_rs1_data + id_ex_rs2_data ;
	wire [31:0]pc_plus_4 = id_ex_pc + 4;
	//得到修改的pc的值
	ysyx_24090013_muxwithdefault #(2,4,1) i0 (ex_pc_pc_wen, id_ex_aluc, 1'b0,{
	        `YSYX_24090013_J_TYPE,1'b1,
	        `YSYX_24090013_JALR_TYPE,1'b1
	});
	ysyx_24090013_muxwithdefault #(2,4,32) i00 (ex_pc_pc_data, id_ex_aluc, pc_plus_4,{
	        `YSYX_24090013_J_TYPE,result_add,
	        `YSYX_24090013_JALR_TYPE,{result_add[31:1],1'b0}
	});
	//得出rd_data的值
	ysyx_24090013_muxwithdefault #(5,8,32) i1 (ex_reg_rd_data1, id_ex_alucex, 32'b0,{
		`YSYX_24090013_ADD_TYPE,result_add,
		`YSYX_24090013_AUIPCC_TYPE,result_add,
		`YSYX_24090013_LUII_TYPE,id_ex_rs1_data, //immU
	        `YSYX_24090013_JAL_TYPE,pc_plus_4,
	        `YSYX_24090013_JALRR_TYPE,pc_plus_4
	});
	ysyx_24090013_muxwithdefault #(6,4,32) i2 (ex_reg_rd_data, id_ex_aluc, 32'b0,{
		`YSYX_24090013_R_TYPE,ex_reg_rd_data1,
		`YSYX_24090013_I_TYPE,ex_reg_rd_data1,
		`YSYX_24090013_LUI_TYPE,ex_reg_rd_data1,
		`YSYX_24090013_AUIPC_TYPE,ex_reg_rd_data1,
		`YSYX_24090013_J_TYPE,ex_reg_rd_data1,
		`YSYX_24090013_JALR_TYPE,ex_reg_rd_data1
	});
	//将wen,addr的值传递给regfile
	ysyx_24090013_muxwithdefault #(6,4,1) i3 (ex_reg_rd_wen, id_ex_aluc, 1'b0,{
		`YSYX_24090013_R_TYPE,id_ex_rd_wen,
		`YSYX_24090013_I_TYPE,id_ex_rd_wen,
	        `YSYX_24090013_J_TYPE,id_ex_rd_wen,
	        `YSYX_24090013_JALR_TYPE,id_ex_rd_wen,
		`YSYX_24090013_LUI_TYPE,id_ex_rd_wen,
		`YSYX_24090013_AUIPC_TYPE,id_ex_rd_wen
	});
	ysyx_24090013_muxwithdefault #(6,4,5) i4 (ex_reg_rd_addr, id_ex_aluc, 5'b0,{
		`YSYX_24090013_R_TYPE,id_ex_rd_addr,
		`YSYX_24090013_I_TYPE,id_ex_rd_addr,
	        `YSYX_24090013_J_TYPE,id_ex_rd_addr,
	        `YSYX_24090013_JALR_TYPE,id_ex_rd_addr,
		`YSYX_24090013_LUI_TYPE,id_ex_rd_addr,
		`YSYX_24090013_AUIPC_TYPE,id_ex_rd_addr
	});
	
endmodule
