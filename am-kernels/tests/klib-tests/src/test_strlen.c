#include "../include/klibtests.h"
char data[100];

void reset(int N) {
  int i;
  for (i = 0; i < N; i ++) {
    data[i] = i + 1;
  }
  data[N] = '\0';
}

void check_seq(int l, int r, int val) {
  int i;
  for (i = l; i < r; i ++) {
    assert(data[i] == val + i - l);
  }
}

// 检查[l,r)区间中的值是否均为val
void check_eq(int l, int r, int val) {
  int i;
  for (i = l; i < r; i ++) {
    assert(data[i] == val);
  }
}

void test_strlen() {
  int l, r;
  for (l = 0; l < 50; l ++) {
      reset(l);
      r = strlen(data);
      assert (r == data[l-1]); 
  }
}


int main(){
	test_strlen();
	return 0;
}
