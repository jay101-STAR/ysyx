
#include <stdarg.h>
#include <string.h>
#include <stdio.h>
char* int2str(int num){
  static char result[12];
    int i = 0;
    int one = num;

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
    for (int j = (num < 0) ? 1 : 0; j < i / 2; j++) {
        char temp = result[j];
        result[j] = result[i - j - 1];
        result[i - j - 1] = temp;
    }

    return result;
}
int my_sprintf(char *out, const char *fmt, ...) {
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
				  val = -val;
			  }
			  char* str=int2str(val);
			  strcpy(out,str);
			  out += strlen(str);
		  }

	  } else {
		 *out++=*fmt;
	  }
	  fmt++;
  }
  *out = '\0';
  va_end(ap);
  return out - orgin_out;
  /* panic("Not implemented"); */
}
int main() {
char buf[128];
	/* sprintf(buf, "%s", "Hello world!\n"); */
	/* check(strcmp(buf, "Hello world!\n") == 0); */

	my_sprintf(buf, "%d + %d = %d\n", 1, 1, 2);
printf("buf: %s", buf);  // 打印 buf 看看实际输出

	return 0;
}

