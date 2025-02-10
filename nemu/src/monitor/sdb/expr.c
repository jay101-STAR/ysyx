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

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>
#include <string.h>
#include "memory/vaddr.h"

enum {
  TK_NOTYPE = 256, TK_EQ = 257, TK_INEQ=258,
  TK_DEC = 259, TK_NEG=260,
  TK_DEREF = 261, TK_HEX = 262,TK_RNAME = 263,
  TK_AND = 264,

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"\\-", '-'},         // sub
  {"\\*", '*'},         // multiplication
  {"\\/", '/'},	        // div
  {"\\(", '('},	        // left paren
  {"!=", TK_INEQ},         // uneauql
  {"&&", TK_AND},         // and
  {"\\)", ')'},		// right paren
  {"0x[0-9A-Fa-f]+",TK_HEX},	// hex
  {"[0-9]+",TK_DEC},	// decimal
  {"==", TK_EQ},        // equal
  {"\\$[$a-z0-9]+",TK_RNAME},	// reg name 
};

#define NR_REGEX ARRLEN(rules)
#define Is_op(type)  (((type) == '+')     || ((type) == '-')   || \
                      ((type) == '*')     || ((type) == '/')   || \
                      ((type) == TK_AND)  || ((type) == TK_EQ) || \
                      ((type) == TK_INEQ) || ((type) == TK_NEG))
static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[1000] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type) {
	  case TK_NOTYPE :break;
          default: 
		     tokens[nr_token].type = rules[i].token_type;
		     strncpy(tokens[nr_token].str,substr_start,substr_len);
		     tokens[nr_token].str[substr_len] = '\0'; 
		     nr_token = nr_token + 1;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }
  for(i = 0; i < nr_token;i++){
	  if(tokens[i].type == '-' && 
			  ((i == 0) || (tokens[i-1].type != TK_DEC && tokens[i-1].type != ')' && tokens[i-1].type != TK_HEX && tokens[i-1].type != TK_RNAME) )) 
	  {
		  tokens[i].type = TK_NEG;
	  }
  }

  for(i=0;i < nr_token;i++){
	  if(tokens[i].type == '*' &&
			  ((i == 0) || Is_op(tokens[i-1].type))){
	  tokens[i].type = TK_DEREF;
	  }
 
  }
  printf("tokens.type:\n");
  for(i = 0; i < nr_token ;i ++){
	  printf("%d\t",tokens[i].type);
  }
  printf("\n");
  
  return true;
}

static bool check_parentheses(int start,int end){
	int left_paren = 1;
	if((strcmp(tokens[start].str,"(") != 0) || (strcmp(tokens[end].str,")") != 0)) {
		return false;
	}
	for(int i = start + 1 ;i <= end ;i ++){
		if((strcmp(tokens[i].str,"(") == 0))
		{
			left_paren ++;
		} else if((strcmp(tokens[i].str,")")) == 0){
			if(left_paren > 1){
                        left_paren--;}
			else if((left_paren == 1) && (i == end)){
				return true;
			} else return false;
		}
	}
	return false;
}

static int dominant_operator(int p,int q){
	int left_paren = 0;
	int ret = -1;
	int op_type = 0;
	int tmp_type = 0;
	for(int i=p;i<=q;i++){
		if(tokens[i].type == TK_DEC){
			continue;
		}
		if(tokens[i].type == TK_HEX){
			continue;
		}
		if(tokens[i].type == TK_RNAME){
			continue;
		}
		if(tokens[i].type == '('){
			left_paren = left_paren + 1;
		} else if(tokens[i].type == ')'){
                        if(left_paren == 0){
				return -1;
			}
			left_paren = left_paren - 1;
		} else if(left_paren > 0) {
			continue;
		} else {
                        switch (tokens[i].type) {
			case TK_NEG : tmp_type = 0; break;
		        case TK_DEREF: tmp_type = 0;break;
                        case '*': tmp_type = 1; break;
			case '/': tmp_type = 1; break;
                        case '+': tmp_type = 2; break;
			case '-': tmp_type = 2; break;
                        case TK_EQ:tmp_type = 7;break;
			case TK_INEQ:tmp_type = 7;break;
			case TK_AND:tmp_type = 11; break;
                        default: assert(0);
			}
		        if(tmp_type >= op_type){
				op_type = tmp_type;
				ret = i;
			}
		}

		}
	if(op_type == 0) {
		for(int i = q; i >= p; i --){
               	    if(tokens[i].type == TK_DEC){
			continue;
		}
		    if(tokens[i].type == TK_HEX){
			continue;
		}
		    if(tokens[i].type == TK_RNAME){
			    continue;
		    }
	            if(tokens[i].type == '('){
			left_paren = left_paren + 1;
		} else if(tokens[i].type == ')'){
                        if(left_paren == 0){
				return -1;
			}
			left_paren = left_paren - 1;
		} else if(left_paren > 0) {
			continue;
		} else{ 
			switch(tokens[i].type){
				case TK_NEG: tmp_type = 0;break;
			        case TK_DEREF: tmp_type = 0;break;
				default:assert(0);
			}
			if(tmp_type == 0){
				ret = i;
			}
		}
	  }
	}
	
        if(left_paren != 0){
		return -1;
	}
      return ret;
}

static word_t eval(int p,int q,bool *ok){
	  *ok = true;
          if(p > q){
		  *ok = false;
		  return 0;
	  }
	  else if( p == q ){
		  if(tokens[p].type != TK_DEC && tokens[p].type != TK_HEX && tokens[p].type != TK_RNAME) {
                          *ok = false;
			  return 0;
		  }
		  if(tokens[p].type == TK_DEC){
		  word_t ret = strtol(tokens[p].str,NULL,10);
		  return ret;
		  }  else if((tokens[p].type == TK_HEX) && (strncmp("0x", tokens[p].str, 2) == 0)) {
                  return strtol(tokens[p].str, NULL, 16); 
	  } else if(tokens[p].type == TK_RNAME){
		  bool success = true;
		  uint32_t reg_val = isa_reg_str2val(tokens[p].str+1,&success);
		  assert(success == true);
		  return reg_val;
	  }
		  *ok = false;
		  return 0;

		  } else if(check_parentheses(p,q)){
		  return eval(p+1,q-1,ok);
	  } else if( (p+1 == q) && (tokens[p].type == TK_NEG) && tokens[q].type == TK_DEC){
		 word_t ret = strtol(tokens[q].str,NULL,10);
		 return -ret; 
	  } else if( (p+1 == q) && (tokens[p].type == TK_NEG) && (tokens[q].type == TK_HEX)){
		 word_t ret = strtol(tokens[q].str,NULL,16);
		 return -ret; 
	  }else if( (p+1 == q) && (tokens[p].type == TK_DEREF)) {
		  vaddr_t ret;
		  sscanf(tokens[q].str,"%x",&ret);
		  return vaddr_read(ret,4);
	  } else {
		  int major = dominant_operator(p,q);
		  if(major < 0){
			  *ok = false;
		  return 0;
	  }
	  if(tokens[major].type != TK_DEREF && tokens[major].type != TK_NEG){
	  word_t val1 = eval(p,major-1,ok);
	  if(!*ok) return 0;
	  word_t val2 = eval(major+1,q,ok);
	  if(!*ok) return 0;

	  switch(tokens[major].type){
              case  '+':return val1 + val2;
	      case  '-':return val1 - val2;
	      case '*':return val1 * val2;
	      case '/':if(val2 == 0) {
			       *ok = false;
			       return 0;
		       }
	      return (sword_t)val1 / (sword_t)val2;
	      case TK_AND:return val1 && val2;
	      case TK_EQ: return val1 == val2;
	      case TK_INEQ:return val1 != val2;
	      default :assert(0);
	  }
	}else {
		word_t val1 = eval(major+1,q,ok);
		if(tokens[major].type == TK_NEG){
                   return -val1;
		} else if(tokens[major].type == TK_DEREF){
                   return vaddr_read(val1,4);
		}
	}
  }
	  return 0;
	  *ok = false;
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  return eval(0, nr_token-1, success);
}
