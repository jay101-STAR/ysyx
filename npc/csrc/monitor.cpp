#include "../include/paddr.h"
#include "../include/common.h"
#include "../include/debug.h"
#include "../include/macro.h"
#include "../include/utils.h"
#include <getopt.h>
#include<Vysyx_24090013_top.h>
#include<verilated.h>


/* void init_rand(); */
/* void init_log(const char *log_file); */
/* void parse_elf(const char *elf_file); */
/* void init_mem(); */
/* void init_difftest(char *ref_so_file, long img_size, int port); */
/* void init_device(); */
/* void init_sdb(); */
/* void init_disasm(const char *triple); */
void sdb_set_batch_mode();

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  IFDEF(CONFIG_TRACE, Log("If trace is enabled, a log file will be generated "
        "to record the trace. This may lead to a large log file. "
        "If it is not necessary, you can disable it in menuconfig"));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NPC!\n", ANSI_FMT(str(__GUEST_ISA__), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
  Log("Exercise: Please remove me in the source code and compile NEMU again.");
}


extern Vysyx_24090013_top* ysyx_24090013_top;

static char *log_file = NULL;
static char *diff_so_file = NULL;
static char *img_file = NULL;
static char *elf_file = NULL;
static int difftest_port = 1234;


static long load_img() {
  if (img_file == NULL) {
    Log("no image is given. use the default build-in image.");
    static const uint32_t img [] = {
  /* 0x00000297,  // auipc t0,0 */
  /* 0x00028823,  // sb  zero,16(t0) */
  /* 0x0102c503,  // lbu a0,16(t0) */
  0x00100073,  // ebreak (used as nemu_trap)
  /* 0xdeadbeef,  // some data */
};
   for (int i = 0; i < sizeof(img)/sizeof(img[0]); i++) {
	   ysyx_24090013_top->inst_rom_1[i] = img[i];
   }
    return 4096; // built-in image size
  }

  FILE *fp = fopen(img_file, "rb");
  Assert(fp, "can not open '%s'", img_file);

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("the image is %s, size = %ld", img_file, size);

  fseek(fp, 0, SEEK_SET);
 unsigned char buffer[size];
  int ret = fread(buffer, 1, size, fp);
  assert(ret == size);

  // assuming 'top' is the verilog instance
  for (long i = 0; i < size; i += 4) {
    // assuming each instruction is 4 bytes (32 bits)
    unsigned int instruction = (buffer[i+3] << 24) | (buffer[i + 2] << 16) |
                               (buffer[i + 1] << 8) | buffer[i];
    ysyx_24090013_top->inst_rom_1[i / 4] = instruction; // load instruction into verilog memory
  }

  fclose(fp);
  return size;
}



static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch"    , no_argument      , NULL, 'b'},
    {"log"      , required_argument, NULL, 'l'},
    {"diff"     , required_argument, NULL, 'd'},
    {"port"     , required_argument, NULL, 'p'},
    {"help"     , no_argument      , NULL, 'h'},
    {"elf"      , required_argument, NULL, 'e'},
    {0          , 0                , NULL,  0 },
  };
  int o;
  while ( (o = getopt_long(argc, argv, "-bhl:d:p:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'p': sscanf(optarg, "%d", &difftest_port); break;
      case 'l': log_file = optarg; break;
      case 'd': diff_so_file = optarg; break;
      case 'e': elf_file = optarg; break;
      case 1: img_file = optarg; return 0;
      default:
        printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
        printf("\t-b,--batch              run with batch mode\n");
        printf("\t-l,--log=FILE           output log to FILE\n");
        printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
        printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
	printf("\t-e,--elf=FILE           parse elf file\n");
        printf("\n");
        exit(0);
    }
  }
  return 0;
}

void init_monitor(int argc, char *argv[]) {
  /* perform some global initialization. */

  /* parse arguments. */
  parse_args(argc, argv);

  /* set random seed. */
  /* init_rand(); */

  /* /1* open the log file. *1/ */
  /* init_log(log_file); */

  /* initialize the elf file. */
  /* parse_elf(elf_file); */

  /* initialize memory. */
  /* init_mem(); */

  /* initialize devices. */
  /* ifdef(config_device, init_device()); */

  /* perform isa dependent initialization. */
  /* init_isa(); */

  /* load the image to memory. this will overwrite the built-in image. */
  long img_size = load_img();

  /* initialize differential testing. */
  /* init_difftest(diff_so_file, img_size, difftest_port); */

  /* initialize the simple debugger. */
  /* init_sdb(); */

/* #ifndef config_isa_loongarch32r */
/*   ifdef(config_itrace, init_disasm( */
/*     muxdef(config_isa_x86,     "i686", */
/*     muxdef(config_isa_mips32,  "mipsel", */
/*     muxdef(config_isa_riscv, */
/*       muxdef(config_rv64,      "riscv64", */
/*                                "riscv32"), */
/*                                "bad"))) "-pc-linux-gnu" */
/*   )); */
/* #endif */

  /* display welcome message. */
  welcome();
}
