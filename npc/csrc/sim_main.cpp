#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include "../include/common.h"
#include<Vysyx_24090013_top.h>
#include<verilated.h>
#include"verilated_vcd_c.h"
#include"svdpi.h"
#include"Vysyx_24090013_top__Dpi.h"


#define HIT_TRAP      0
#define HIT_GOOD_TRAP 1
#define HIT_BAD_TRAP  2
#define ABORT         3


//导出VCD波形需要加这一句
 VerilatedVcdC* tfp = new VerilatedVcdC();
 vluint64_t main_time = 0;  //initial 仿真时间
 Vysyx_24090013_top* ysyx_24090013_top = new Vysyx_24090013_top("ysyx_24090013_top");


void init_monitor(int,char *[]); 

void single_cycle(Vysyx_24090013_top* ysyx_24090013_top){
	ysyx_24090013_top->clk = 0; ysyx_24090013_top->eval();tfp->dump(main_time);  main_time++;
	ysyx_24090013_top->clk = 1; ysyx_24090013_top->eval();tfp->dump(main_time);  main_time++;
}

void reset(int n,Vysyx_24090013_top* ysyx_24090013_top){
	ysyx_24090013_top->rst = 1;
	while(n -- >0) single_cycle(ysyx_24090013_top);
	ysyx_24090013_top->rst = 0;
} 

int target_value[32];
extern "C" void initialize_target_value() {
    for (int i = 0; i < 32; ++i) {
        target_value[i] = 1;
    }
}
extern "C" void get_register_value(int reg_num,int source_value){
	if( reg_num >=0 && reg_num <=31) {
		target_value[reg_num] = source_value;
	}
	else  {
        printf("Error: Invalid register number %d\n", reg_num);
    }
}

extern "C" void ebreak(int situation,int inst) {
   static int call_count = 0;
    printf("ebreak called %d times\n", ++call_count);  // 打印调用次数
	switch(situation){
	    case HIT_GOOD_TRAP:
	      printf("\33[1;32m HIT GOOD TRAP \33[0m at inst = 0x%08x\n   ", inst);
	      break;
	    
	    case HIT_BAD_TRAP:
	      printf("\33[1;31m HIT BAD TRAP \33[0m at inst = 0x%08x   ", inst);
	      break;

	    case ABORT:
	    
	    default:
	      printf("\33[1;32m HIT GOOD TRAP \33[0m at inst = 0x%08x   ", inst);
	      break;
	    /* case HIT_TRAP: */
		    /* if(target_value[10] == 0) { */
	    /*            printf("\33[1;32m HIT GOOD TRAP \33[0m at inst = 0x%08x   \n", inst); */
		    /* } else { */
	    /*            printf("\33[1;31m HIT BAD TRAP \33[0m at inst = 0x%08x   \n", inst); */
		    /* } */
		    /* break; */
	    /* case HIT_BAD_TRAP: */
	    /*   printf("\33[1;31m HIT BAD TRAP \33[0m at inst = 0x%08x   \n", inst); */
	    /*   break; */

	    /* case ABORT: */
	    
	    /* default: */
	    /*   printf("\33[1;31m ABORT \33[0m at inst = 0x%08x   \n", inst); */
	    /*   break; */
	}
	Verilated::gotFinish(true);

}



static void init_verilator(){

 Verilated::traceEverOn(true);
 ysyx_24090013_top->trace(tfp,99);
 tfp->open("wave.vcd");
 reset(10,ysyx_24090013_top);

}
int main(int argc,char** argv){

  init_verilator();

  init_monitor(argc,argv);

  initialize_target_value();

while(!Verilated::gotFinish()){
	/* contextp->timeInc(1); */
	ysyx_24090013_top->eval();
	single_cycle(ysyx_24090013_top);
 }
single_cycle(ysyx_24090013_top);
ysyx_24090013_top->final();
tfp->close();
/* delete contextp; */
delete tfp;
return 0;
}



/* #include<stdio.h> */
/* #include<stdlib.h> */
/* #include<assert.h> */
/* #include<Vysyx_24090013_top.h> */
/* #include<verilated.h> */
/* #include"verilated_fst_c.h" */
/* #include"svdpi.h" */
/* #include"Vysyx_24090013_top__Dpi.h" */



/* #define HIT_GOOD_TRAP 1 */
/* #define HIT_BAD_TRAP  2 */
/* #define ABORT         3 */



/*  VerilatedFstC* tfp = new VerilatedFstC(); */
/*  vluint64_t main_time = 0;  //initial 仿真时间 */
/* void single_cycle(Vysyx_24090013_top* ysyx_24090013_top){ */
/* 	ysyx_24090013_top->clk = 0; ysyx_24090013_top->eval();tfp->dump(main_time);  main_time++; */
/* 	ysyx_24090013_top->clk = 1; ysyx_24090013_top->eval();tfp->dump(main_time);  main_time++; */
/* } */

/* void reset(int n,Vysyx_24090013_top* ysyx_24090013_top){ */
/* 	ysyx_24090013_top->rst = 1; */
/* 	while(n -- >0) single_cycle(ysyx_24090013_top); */
/* 	ysyx_24090013_top->rst = 0; */
/* } */ 
/* extern void ebreak(int situation,int inst) { */
/* 	switch(situation){ */
/* 	    case HIT_GOOD_TRAP: */
/* 	      printf("\33[1;32m HIT GOOD TRAP \33[0m at inst = 0x%08x   ", inst); */
/* 	      break; */
	    
/* 	    case HIT_BAD_TRAP: */
/* 	      printf("\33[1;32m HIT GOOD TRAP \33[0m at inst = 0x%08x   ", inst); */
/* 	      break; */

/* 	    case ABORT: */
	    
/* 	    default: */
/* 	      printf("\33[1;32m HIT GOOD TRAP \33[0m at inst = 0x%08x   ", inst); */
/* 	      break; */
/* 	} */
/* 	Verilated::gotFinish(true); */

/* } */
/* int main(int argc,char** argv){ */
/*  VerilatedContext* contextp = new VerilatedContext; */
/*  contextp->commandArgs(argc,argv); */
/*  Vysyx_24090013_top* ysyx_24090013_top = new Vysyx_24090013_top{contextp}; */
/*  Verilated::traceEverOn(true); */
/*  ysyx_24090013_top->trace(tfp,99); */
/*  tfp->open("wave.fst"); */
/*  reset(10,ysyx_24090013_top); */
/*  /1* contextp->debug(0); *1/ */
/* while(!Verilated::gotFinish()){ */
/* 	/1* contextp->timeInc(1); *1/ */
/* 	ysyx_24090013_top->eval(); */
/* 	single_cycle(ysyx_24090013_top); */

/*  } */
/* single_cycle(ysyx_24090013_top); */
/* tfp->close(); */
/* delete contextp; */
/* delete tfp; */
/* return 0; */
/* } */
