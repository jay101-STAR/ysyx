#include <elf.h>
#include <common.h>
// for itrace
#define MAX_IRINGBUF 16

typedef struct {
  word_t pc;
  uint32_t inst;
} ItraceNode;

ItraceNode iringbuf[MAX_IRINGBUF];
int p_cur = 0;
bool full = false;

void trace_inst(word_t pc, uint32_t inst) {
  iringbuf[p_cur].pc = pc;
  iringbuf[p_cur].inst = inst;
  p_cur = (p_cur + 1) % MAX_IRINGBUF;
  full = full || p_cur == 0;
}

void display_inst() {
  if (!full && !p_cur) return;

  int end = p_cur;
  int i = full?p_cur:0;

  void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
  char buf[128]; // 128 should be enough!
  char *p;
  puts(ANSI_FG_YELLOW);
  printf("Most recently executed instructions");
  puts(ANSI_NONE);
  FILE *fp;
  int a=0;
  do {
    p = buf;
    p += sprintf(buf, "%s" FMT_WORD ": %08x ", (i+1)%MAX_IRINGBUF==end?" --> ":"     ", iringbuf[i].pc, iringbuf[i].inst);
    disassemble(p, buf+sizeof(buf)-p, iringbuf[i].pc, (uint8_t *)&iringbuf[i].inst, 4);

    if ((i+1)%MAX_IRINGBUF==end) printf(ANSI_FG_RED);
    puts(buf);
   if( a== 0) {
           fp = fopen("/home/jay/Desktop/ics2024/ysyx-workbench/am-kernels/tests/cpu-tests/ringbuf.txt","w");
	   fprintf(fp,"%s",buf);
           fclose(fp);
	   a = 1;
   } else {
           fp = fopen("/home/jay/Desktop/ics2024/ysyx-workbench/am-kernels/tests/cpu-tests/ringbuf.txt","a");
	   fprintf(fp,"\n%s",buf);
           fclose(fp);
	   a++;
   }
  } while ((i = (i+1)%MAX_IRINGBUF) != end);
  puts(ANSI_NONE);
}

//for mtrace
void display_pread(paddr_t addr, int len) {
  printf("pread at " FMT_PADDR " len=%d\n", addr, len);
}

void display_pwrite(paddr_t addr, int len, word_t data) {
  printf("pwrite at " FMT_PADDR " len=%d, data=" FMT_WORD "\n", addr, len, data);
}


//for ftrace
typedef struct{
		char name[64];
		paddr_t addr;
		Elf32_Xword size;
	}Symbol;
Symbol *symbol = NULL;          //设为全局变量，方便函数调用
int func_num = 0;               //符号表中type为func的数量

//解析elf文件并找到符号表和字符窜表
void parse_elf(const char *elf_file){
	if(elf_file == NULL) {
		printf("can not find elf_file\n");
		return ;
	}

	FILE* fp;
	fp = fopen(elf_file,"rb");

	if(fp == NULL){
		printf("can not open elf_file\n");
		exit(0);
	}

	Elf32_Ehdr ehdr;
	if(fread(&ehdr,sizeof(ehdr),1,fp) <= 0){
		printf("can not read elf_file\n");
		exit(0);
	}

	if(ehdr.e_ident[0] != 0x7f || ehdr.e_ident[1] != 'E' || ehdr.e_ident[2] != 'L' || ehdr.e_ident[3] != 'F'){
		printf("the file is not elf_file\n");
		exit(0);
	}

	//find section header table
	fseek(fp,ehdr.e_shoff,SEEK_SET);

	//find string table
	Elf32_Shdr shdr;
	char *string_table = NULL;
	for(int i = 0; i < ehdr.e_shnum ; i ++){
	if(fread(&shdr,sizeof(shdr),1,fp) <= 0){
		printf("can not find section header table\n");
		exit(0);
	}
	
	if(shdr.sh_type  == SHT_STRTAB){
		fseek(fp,shdr.sh_offset,SEEK_SET);
                string_table = (char *)malloc(shdr.sh_size);
		if(fread(string_table,shdr.sh_size,1,fp) <= 0){
			printf("can not read string table\n");
			exit(0);
		}
	 }
	}


        //find symbol table
        Elf32_Sym sym;
	fseek(fp,ehdr.e_shoff,SEEK_SET);
	for(int i = 0; i < ehdr.e_shnum ; i ++){
	if(fread(&shdr,sizeof(shdr),1,fp) <= 0){
		printf("can not find section header table\n");
		exit(0);
	}
	if(shdr.sh_type == SHT_SYMTAB){
		fseek(fp,shdr.sh_offset,SEEK_SET);
		size_t sym_num = shdr.sh_size / shdr.sh_entsize;
		symbol = (Symbol *)malloc(sizeof(Symbol) * sym_num);
		for( size_t i = 0; i < sym_num ; i++){
			if(fread(&sym,sizeof(Elf32_Sym),1,fp) <= 0){
				printf("can not read symbol table \n");
				exit(0);
			}

			if(ELF32_ST_TYPE(sym.st_info) == STT_FUNC){
				char *func_name = string_table + sym.st_name;
				strncpy(symbol[func_num].name, func_name, sizeof(symbol[func_num].name) - 1);
				symbol[func_num].addr = sym.st_value;
				symbol[func_num].size = sym.st_size;
				func_num++;
			}
		}

              	
	}

	}
	fclose(fp);
	free(string_table);

}

//该函数用于在调用函数时输出调研函数的名字和地址,is_tail表示是否为尾调用
int call_depth = 0;
void ftrace_call(paddr_t pc,paddr_t func_addr,bool is_tail){
	if(symbol == NULL){
		printf("ftrace_call can not find symbol\n");
		return;
	}
	//输出调用函数的指令所在的地址
	/* for(int t = 0; t < func_num ; t ++){ */
	/* if(pc > symbol[t].addr && pc <= (symbol[t].addr + symbol[t].size)) { */
	/*      printf("0x%08x:(%s)\t",pc,symbol[t].name); */
	/*      break; */
	/*   } */
	/* } */
	     printf("0x%08x:\t",pc);

	//输出空格
	for(int j=0; j < call_depth; j ++) printf("  ");
	call_depth++;

	//输出函数名和函数地址
	int k = 0;
	for(k = 0; k < func_num ; k ++){
	if(func_addr == symbol[k].addr ) {
	     if( is_tail == true){
	     printf("call_tail  [%s@0x%08x]\n",symbol[k].name,symbol[k].addr);
	     call_depth--;
	     break;
	     } else if(is_tail == false){
	     printf("call  [%s@0x%08x]\n",symbol[k].name,symbol[k].addr);
	     break;
	     }
	  }
	}

	//如果找不到对应函数就输出？？？
	if(k == (func_num)){
	     printf("call  [%s@0x%08x]\n","???",symbol[k].addr);
	}
}


//该函数用于在函数返回时输出调研函数的名字和地址,is_tail表示是否是尾调用
void ftrace_ret(paddr_t pc,bool is_tail){
	if(symbol == NULL){
		printf("ftrace_call can not find symbol\n");
		return;
	}
	//输出调用函数的指令所在的地址
	/* for(int t = 0; t < func_num ; t ++){ */
	/* if(pc > symbol[t].addr && pc <= (symbol[t].addr + symbol[t].size)) { */
	/*      printf("0x%08x:(%s)\t",pc,symbol[t].name); */
	/*      break; */
	/*   } */
	/* } */
	     printf("0x%08x:\t",pc);
	//输出空格
	call_depth--;
	for(int j=0; j < call_depth; j ++) printf("  ");

	//输出函数名和函数地址
	int k = 0;
	for(k = 0; k < func_num ; k ++){
	if(pc > symbol[k].addr && pc <= (symbol[k].addr + symbol[k].size)) {
	     printf("ret  [%s]\n",symbol[k].name);
	     break;
	  }
	}

	//如果找不到对应函数就输出？？？
	if(k == (func_num)){
	     printf("ret  [%s]\n","???");
	}
}
