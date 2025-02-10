/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "sdb.h"
#include "stdbool.h"

#define NR_WP 32

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;


  /* TODO: Add more members if necessary */
  char expr[50];
  uint32_t old_val,new_val;
} WP;

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

static WP *head;

static WP* new_up(){
     assert(free_);
     WP* ret;
     ret = free_;
     free_= free_->next;
     ret->next = head;
     head = ret;
     return ret;
}

void wp_display(){
	WP* h=head;
	if(!h){
		puts("no watchpoints");
		return;
	} 
	printf("%-8s%-8s\n", "Num", "What");
	while(h){
		printf("%-8d%-8s\n", h->NO, h->expr);
                h = h->next;
	}
}
static void free_wp(WP *wp){
	WP* h = head;
	if(h == wp) {
		head = NULL;
	} else {
		while( h && h->next != wp ){
			h = h->next;
		}
		assert(h);
		h->next = wp->next;
	}
	wp->next = free_;
	free_ = wp;
}
void wp_watch(char *expr,word_t res){
	WP* wp=new_up();
	strcpy(wp->expr,expr);
	wp->old_val = res;
	printf("watchpoint %d: %s\n",wp->NO,wp->expr);
}
void wp_remove(int no){
	assert(no < NR_WP);
	WP* wp = &wp_pool[no];
	free_wp(wp);
	printf("delete watchpoint %d: %s\n",wp->NO,wp->expr);
}
bool wp_difftest(void){
	WP* h =head;
	bool change = false;
	while(h){
		bool test;
		h->old_val = h->new_val;
		h->new_val = expr(h->expr, &test);
		if(h->old_val != h->new_val){
                printf("Watchpoint %d: %s\n"
                "Old value = 0x%X\n"
                "New value = 0x%X\n" , h->NO, h->expr, h->old_val, h->new_val);
		change = true;
		h = h->next;
    }

		}
	return change;
	}
void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */

