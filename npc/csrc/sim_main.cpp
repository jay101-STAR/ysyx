#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<Vysyx_24090013_top.h>
#include<verilated.h>
#include"verilated_fst_c.h"
#include"svdpi.h"
#include"Vysyx_24090013_top__Dpi.h"



#define HIT_GOOD_TRAP 1
#define HIT_BAD_TRAP  2
#define ABORT         3



 VerilatedFstC* tfp = new VerilatedFstC();
 vluint64_t main_time = 0;  //initial 仿真时间
void single_cycle(Vysyx_24090013_top* ysyx_24090013_top){
	ysyx_24090013_top->clk = 0; ysyx_24090013_top->eval();tfp->dump(main_time);  main_time++;
	ysyx_24090013_top->clk = 1; ysyx_24090013_top->eval();tfp->dump(main_time);  main_time++;
}

void reset(int n,Vysyx_24090013_top* ysyx_24090013_top){
	ysyx_24090013_top->rst = 1;
	while(n -- >0) single_cycle(ysyx_24090013_top);
	ysyx_24090013_top->rst = 0;
} 
extern void ebreak(int situation,int inst) {
	switch(situation){
	    case HIT_GOOD_TRAP:
	      printf("\33[1;32m HIT GOOD TRAP \33[0m at inst = 0x%08x   ", inst);
	      break;
	    
	    case HIT_BAD_TRAP:
	      printf("\33[1;32m HIT GOOD TRAP \33[0m at inst = 0x%08x   ", inst);
	      break;

	    case ABORT:
	    
	    default:
	      printf("\33[1;32m HIT GOOD TRAP \33[0m at inst = 0x%08x   ", inst);
	      break;
	}
	Verilated::gotFinish(true);

}
int main(int argc,char** argv){
 VerilatedContext* contextp = new VerilatedContext;
 contextp->commandArgs(argc,argv);
 Vysyx_24090013_top* ysyx_24090013_top = new Vysyx_24090013_top{contextp};
 Verilated::traceEverOn(true);
 ysyx_24090013_top->trace(tfp,99);
 tfp->open("wave.fst");
 reset(10,ysyx_24090013_top);
 /* contextp->debug(0); */
while(!Verilated::gotFinish()){
	/* contextp->timeInc(1); */
	ysyx_24090013_top->eval();
	single_cycle(ysyx_24090013_top);

 }
single_cycle(ysyx_24090013_top);
tfp->close();
delete contextp;
delete tfp;
return 0;
}
