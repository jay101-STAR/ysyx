`define YSYX_24090013_PC_BASE_ADDR 32'h8000_0000

`define YSYX_24090013_R_TYPE 4'b0001
`define YSYX_24090013_I_TYPE 4'b0010  
`define YSYX_24090013_S_TYPE 4'b0011
`define YSYX_24090013_B_TYPE 4'b0100 
`define YSYX_24090013_J_TYPE 4'b0101
`define YSYX_24090013_LUI_TYPE 4'b0110 
`define YSYX_24090013_AUIPC_TYPE 4'b0111
`define YSYX_24090013_JALR_TYPE  4'b1000
`define YSYX_24090013_I_TYPE_E_TYPE  4'b1001
`define YSYX_24090013_NO_TYPE 4'b0000 

`define YSYX_24090013_R_ASA_TYPE 7'b0000000
`define YSYX_24090013_R_SUA_TYPE 7'b0100000

`define YSYX_24090013_ADD_TYPE   8'b00000000  //include ADD,ADDI
`define YSYX_24090013_LUII_TYPE  8'b00000001  //delegate LUI
`define YSYX_24090013_AUIPCC_TYPE 8'b00000010 //delegate AUIPC
`define YSYX_24090013_JALRR_TYPE  8'b00000011 //delegate JALR
`define YSYX_24090013_JAL_TYPE    8'b00000100 //delegate JAL
//func7
`define YSYX_24090013_R_ASA_INST 7'b0000000 //R_TYPE except SUB and SRA
`define YSYX_24090013_R_SUA_INST 7'b0100000 //SUB and SUA's func7

//func3
`define YSYX_24090013_ADD_INST 3'b000
`define YSYX_24090013_ADDI_INST 3'b000
`define YSYX_24090013_EBREAK_INST 3'b000

`define HIT_GOOD_TRAP 1
`define HIT_BAD_TRAP  2
`define HIT_TRAP      0
`define ABORT         3


//二维数组打包为一维数组
`define PACK_ARRAY(PK_WIDTH,PK_LEN,PK_SRC,PK_DEST) \
                generate \
                genvar pk_idx; \
                for (pk_idx=0; pk_idx<(PK_LEN); pk_idx=pk_idx+1) \
                begin \
                        assign PK_DEST[((PK_WIDTH)*pk_idx+((PK_WIDTH)-1)):((PK_WIDTH)*pk_idx)] = PK_SRC[pk_idx][((PK_WIDTH)-1):0]; \
                end \
                endgenerate

//一维数组展开为二维数组
`define UNPACK_ARRAY(PK_WIDTH,PK_LEN,PK_DEST,PK_SRC) \
                generate \
                genvar unpk_idx; \
                for (unpk_idx=0; unpk_idx<(PK_LEN); unpk_idx=unpk_idx+1) \
                begin \
                        assign PK_DEST[unpk_idx][((PK_WIDTH)-1):0] = PK_SRC[((PK_WIDTH)*unpk_idx+(PK_WIDTH-1)):((PK_WIDTH)*unpk_idx)]; \
                end \
                endgenerate
