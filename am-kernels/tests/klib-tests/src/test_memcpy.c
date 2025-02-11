#include "../include/klibtests.h"
#define N 32
//data存放的是32位数字各不相同的数值,data_1存放的是32位数字相同的数值
uint8_t data[N];

void reset() {
  int i;
  for (i = 0; i < N; i ++) {
    data[i] = i + 1;
  }
}

uint8_t data_1[N];

void reset_data_1(uint8_t value) {
  int i;
  for(i = 0; i < N ; i++){
     data_1[i] =  value;
  }
}

void check_seq(int l, int r, int val) {
  int i;
  for (i = l; i < r; i ++) {
    assert(data_1[i] == val + i - l);
  }
}

// 检查[l,r)区间中的值是否均为val
void check_eq(int l, int r, int val) {
  int i;
  for (i = l; i < r; i ++) {
    assert(data_1[i] == val);
  }
}

void test_memcpy() {
  int l, r;
  for (l = 0; l < N; l ++) {
    for (r = l + 1; r <= N; r ++) {
      uint8_t val = (l + r) / 2;
      reset();
      reset_data_1(val);
      memcpy(data_1+l,data+l,r-l);
      /* memset(data + l, val, r - l); */
      check_eq(0, l, val);
      check_seq(l, r, l+1);
      check_eq(r, N, val);
    }
  }
}

int main(){
	test_memcpy();
	return 0;
}
