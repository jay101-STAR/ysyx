#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <string.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) {
  panic("Not implemented");
}

int vsprintf(char *out, const char *fmt, va_list ap) {
  panic("Not implemented");
}

//just for positive int
char* int2str(int num){
  static char result[12];
    int i = 0;
    int one = num;
 if (one == -2147483648) { one = one + 1; }
    if(one < 0) one = -one;
    // 处理数字部分
    if (one == 0) {
        result[i++] = '0';  // 处理数字0
    } else {
        while (one > 0) {
            result[i++] = (one % 10) + '0';
            one /= 10;
        }
    }
    result[i] = '\0';

    // 反转字符串
    for (int j =  0; j < i / 2; j++) {
        char temp = result[j];
        result[j] = result[i - j - 1];
        result[i - j - 1] = temp;
    }
  if (num == -2147483648) result[i - 1] = '8';
    return result;
}
int sprintf(char *out, const char *fmt, ...) {
  va_list ap;
  va_start(ap,fmt);
  char *orgin_out = out;
  while(*fmt != '\0'){
	  if(*fmt == '%'){
		  fmt++;
		  if(*fmt == '%'){
			  *out = '%';
			  out++;
		  } else if(*fmt == 'd'){
			  int val = va_arg(ap,int);
			  if(val < 0){
				  *out = '-';
				  out++;
			  }
			  char* str=int2str(val);
			  strcpy(out,str);
			  out += strlen(str);
		  } else if(*fmt == 's'){
			  char *str = va_arg(ap,char*);
			  strcpy(out,str);
			  out += strlen(str);
		  }

	  } else {
		 *out=*fmt;
		 out++;
	  }
	  fmt++;
  }
  *out = '\0';
  va_end(ap);
  return out - orgin_out;
  /* panic("Not implemented"); */
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
