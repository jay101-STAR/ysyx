`include "ysyx_24090013_define.v"
`include "ysyx_24090013_muxwithdefault.v"
module ysyx_24090013_id(
	/* input reset, */
	input [31:0] id_inst         ,
	input [31:0] reg_id_rs1_data , reg_id_rs2_data ,
	output id_reg_rs1_ren        , id_reg_rs2_ren  ,
	output [4:0] id_reg_rs1_addr , id_reg_rs2_addr ,
	output [31:0] id_ex_rs1_data , id_ex_rs2_data  ,
	output id_ex_rd_wen,
	output [4:0] id_ex_rd_addr,
	output [3:0]  id_ex_aluc,
	output [7:0]  id_ex_alucex
);
	//DPI-C
	 import "DPI-C" function void ebreak(input int station, input int inst);

	wire [2:0] func3       = id_inst[14:12] ;
	wire [6:0] op7         = id_inst[6:0]   ;
	wire [6:0] func7       = id_inst[31:25] ;
	wire [3:0] inst_type                    ;

	//12位立即数扩展
	wire [11:0] immI       = id_inst[31:20] ;
	wire [31:0] sign_extended_immI = {{20{immI[11]}},immI[11:0]};
	/* wire [6:0] id_ex_aluc1                  ; */
	wire [7:0] id_ex_alucex1,id_ex_alucex2  ;
	assign id_reg_rs1_addr = id_inst[19:15] ;
	assign id_reg_rs2_addr = id_inst[24:20] ;
	assign id_ex_rd_addr   = id_inst[11:7];
	ysyx_24090013_muxwithdefault #(3,7,4) i1 (inst_type,    op7,     `YSYX_24090013_NO_TYPE,{
		7'b0110011,`YSYX_24090013_R_TYPE,
		7'b0010011,`YSYX_24090013_I_TYPE,
		7'b1110011,`YSYX_24090013_I_TYPE_E_TYPE
	});
	assign id_ex_aluc = inst_type;
       ysyx_24090013_muxwithdefault #(2,4,1) i2 (id_reg_rs1_ren,inst_type,1'b0,{
	       `YSYX_24090013_R_TYPE,1'b1,
	       `YSYX_24090013_I_TYPE,1'b1
       }); 	
       ysyx_24090013_muxwithdefault #(2,4,1) i3 (id_reg_rs2_ren,inst_type,1'b0,{
	       `YSYX_24090013_R_TYPE,1'b1,
	       `YSYX_24090013_I_TYPE,1'b0
       }); 	
       ysyx_24090013_muxwithdefault #(2,4,32) i4 (id_ex_rs1_data,inst_type,32'b0,{
	       `YSYX_24090013_R_TYPE,reg_id_rs1_data,
	       `YSYX_24090013_I_TYPE,reg_id_rs1_data
       }); 	
       ysyx_24090013_muxwithdefault #(2,4,32) i5 (id_ex_rs2_data,inst_type,32'b0,{
	       `YSYX_24090013_R_TYPE,reg_id_rs2_data,
	       `YSYX_24090013_I_TYPE,sign_extended_immI
       }); 	
	//判断一个R_TYPE指令是属于ASA还是SUA
       /* ysyx_24090013_muxwithdefault #(2,7,7)  i6 (id_ex_aluc1,func7,7'b0,{ */
	       /* `R_ASA_INST,`R_ASA_TYPE, */
	       /* `R_SUA_INST,`R_SUA_TYPE */
       /* }); */
       /* ysyx_24090013_muxwithdefault #(1,3,7) i7 (id_ex_aluc,inst_type,7'b0,{ */
	        /* `YSYX_24090013_R_TYPE,id_ex_aluc1 */
       /* }); */
	//判断R_TYPE,I_TYPE指令具体属于哪一个指令如，ADD，ADDI等 
	//如果所R-TYPE,需要判断三次，即要判断到alucex2，如果所I-TYPE只需要判断两次，即判断到alucex1
       ysyx_24090013_muxwithdefault #(1,3,8)  i8 (id_ex_alucex1,func3,8'b0,{
      `YSYX_24090013_ADD_INST,`YSYX_24090013_ADD_TYPE   //include ADD,ADDI
       });
       ysyx_24090013_muxwithdefault #(1,7,8)  i9 (id_ex_alucex2,func7,8'b0,{
	       `YSYX_24090013_R_ASA_INST,id_ex_alucex1
       });
       ysyx_24090013_muxwithdefault #(2,4,8)  i10 (id_ex_alucex,inst_type,8'b0,{
	       `YSYX_24090013_R_TYPE,id_ex_alucex2,
	       `YSYX_24090013_I_TYPE,id_ex_alucex1
       });
       ysyx_24090013_muxwithdefault #(2,4,1)  i11 (id_ex_rd_wen,inst_type,1'b0,{
	       `YSYX_24090013_R_TYPE,1'b1,
	       `YSYX_24090013_I_TYPE,1'b1
       });

	always@(*) begin
		if((inst_type==`YSYX_24090013_I_TYPE_E_TYPE)) begin
			if(func3==3'b000) begin
				ebreak(`HIT_GOOD_TRAP,id_inst);
			end else begin
				ebreak(`HIT_BAD_TRAP,id_inst);
                        end
		end
	end

      


endmodule

