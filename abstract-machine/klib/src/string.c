#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t a=0;
  if( s == NULL) {
	  return a;
  } else{
  while((*s) != '\0'){
	  a ++;
	  s ++;
	  }
  }
  /* panic("Not implemented"); */

  return a;
}

char *strcpy(char *dst, const char *src) {
  /* assert(dst != NULL); */
  /* assert(src != NULL); */
  char *orgin_dst = dst;
  while(  (*src) != '\0'){
	  *dst = *src;
	  dst ++;
	  src ++;
  }
	  *dst = '\0';
  /* panic("Not implemented"); */
  return orgin_dst;
}

char *strncpy(char *dst, const char *src, size_t n) {
  panic("Not implemented");
}

char *strcat(char *dst, const char *src) {
  /* assert(dst != NULL); */
  /* assert(src != NULL); */
  char* dret = dst;
  const char* sret = src;
  while (*dst++);
  char* midp = dst - 1;
  src++;
  while ((*dst++ = *src++));
  *midp = *sret;
  return dret;


 /* /1* char* dret = dst; *1/ */
 /* /1*    // 找到 dst 字符串的末尾 *1/ */
 /* /1*    while (*dst) { *1/ */
 /* /1*        dst++; *1/ */
 /* /1*    } *1/ */
 /* /1*    // 连接 src 到 dst *1/ */
 /* /1*    while ((*dst++ = *src++)); *1/ */
 /* /1*    // 确保连接后的字符串以 '\0' 结束 *1/ */
 /* /1*    *dst = '\0'; *1/ */
 /* char *ret = dst; */
	/* while (*dst != '\0') */
		/* dst++; */
	/* while ((*dst++ = *src++) != '\0') */
 /*  { */
 /*    ; */
 /*  } */
	/* return ret;/1*    return dret; /2* return dret; *2/ *1/ */
}

int strcmp(const char *s1, const char *s2) {
  /* assert (s1 != NULL); */
  /* assert (s2 != NULL); */
 while (*s1 && *s2) { // 当两者都没有到达字符串结束
        if (*s1 != *s2) {
            return (*s1 > *s2) ? 1 : -1; // 返回比较结果
        }
        s1++;
        s2++;
    }
  /* panic("Not implemented"); */
    return (*s1 == *s2) ? 0 : (*s1 > *s2 ? 1 : -1);
}

int strncmp(const char *s1, const char *s2, size_t n) {
  /* assert (s1 != NULL); */
  /* assert (s2 != NULL); */
  size_t i = 0;
    while ( i < n && (*s1 && *s2)) { 
        if (*s1 != *s2) {
            return (*s1 > *s2) ? 1 : -1;      
     	}
        s1++;
        s2++;
        i++;
    }
    if (i == n) {
        return 0;     
    }
  /* panic("Not implemented"); */
    return (*s1 == *s2) ? 0 : (*s1 > *s2 ? 1 : -1); 
}

void *memset(void *s, int c, size_t n) {
  /* assert(s!= NULL); */
unsigned char *str = (unsigned char *)s;
  unsigned long long val = (unsigned char)c;  // 将 c 扩展到更大字节
  val |= val << 8;
  val |= val << 16;
  val |= val << 32; // 填充 val 为 8 字节，所有字节都设置为 c
		    
  while ((uintptr_t)str % sizeof(unsigned long long) != 0 && n >= 1) {
    *str++ = (unsigned char)c;
    n--;
  }
  // 4 字节或 8 字节块的优化
  /* while (n >= 8) { */
  /*   *(unsigned long long *)str = val;  // 8 字节填充 */
  /*   str += 8; */
  /*   n -= 8; */
  /* } */

  // 如果剩下少于 8 字节，使用 4 字节优化
  while (n >= 4) {
    *(unsigned int *)str = (unsigned int)val;  // 4 字节填充
    str += 4;
    n -= 4;
  }

  // 填充剩余的字节
  while (n--) {
    *str++ = (unsigned char)c;
  }
  /* panic("Not implemented"); */
/* unsigned char * str = (unsigned char *) s; */
/*   while(n--){ */
/* 	  *str++ = (unsigned char) c; */
/*   } */
/*   /1* panic("Not implemented"); *1/ */
/*   return s; */
  return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  
  //void*类型指针无法进行指针自增操作，因此先转为以一个字节为单位的unsigned char*型指针
  unsigned char *output = (unsigned char*)out;
  const unsigned char *input  = (const unsigned char*)in;
  //大于四个字节时一次，复制四个字节
while (n >= 4) {
    *(unsigned int*)output = *(unsigned int*)input;  // 复制4字节
    output += 4;
    input += 4;
    n -= 4;
  }

  while(n--){
	  *output++ = *input++;
  }
  return out;

  /* panic("Not implemented"); */
}

int memcmp(const void *s1, const void *s2, size_t n) {
  /* assert(s1 != NULL); */
  /* assert(s2 != NULL); */
  unsigned char* str1 = (unsigned char *)s1;
  unsigned char* str2 = (unsigned char *)s2;
  while(n--){
	  if(*str1 > *str2){
		  return 1;
	  } else if(*str2 > *str1){
		  return -1;
	  }
	  str2++;
	  str1++;
  }
  /* panic("Not implemented"); */
  return 0;
}

#endif
