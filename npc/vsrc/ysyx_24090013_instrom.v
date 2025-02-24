`include "ysyx_24090013_muxwithdefault.v"
`include "ysyx_24090013_define.v"
module ysyx_24090013_instrom(
	input openmips_instrom_ren,
	input  [31:0]openmips_instrom_addr,
	input  [639:0] inst_rom_1, //32 *1024
	output [31:0]instrom_openmips_data
);	
	/* initial $readmemh("/home/jay/Desktop/ics2024/ysyx-workbench/npc/vsrc/ysyx_24090013_instrom.data",inst_rom); */
	wire [31:0] inst_rom [0:19];
	`UNPACK_ARRAY(32,20,inst_rom,inst_rom_1)
        initial begin
   	 if (openmips_instrom_addr[1:0] != 2'b00) begin
        	$display("PC is not 4-byte aligned");
    	  end
	end
	ysyx_24090013_muxwithdefault #(2,1,32) i0 (instrom_openmips_data,openmips_instrom_ren,32'b0,{
		1'b0, 32'b0,
		1'b1, inst_rom[(openmips_instrom_addr-`YSYX_24090013_PC_BASE_ADDR)>>2]
	});




endmodule
