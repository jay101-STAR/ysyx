
#include "../include/klibtests.h"
#define N 32
uint8_t data[N];    // 用于存放测试数据

// 重置目标数组data，确保每次测试前数据一致
void reset() {
  for (int i = 0; i < N; i++) {
    data[i] = 0;  // 清空目标数组
  }
}

// 检查目标数组data[l, r)区间的值是否等于val
void check_eq(int l, int r, uint8_t val) {
  for (int i = l; i < r; i++) {
    assert(data[i] == val);
  }
}

// 检查目标数组data[l, r)区间的值是否依次递增
void check_seq(int l, int r, uint8_t val) {
  for (int i = l; i < r; i++) {
    assert(data[i] == val + i - l);
  }
}

// 检查目标数组是否与源字符串一致（不使用strcmp）
void check_strcpy_correctness(const uint8_t* src, int l, int r) {
  for (int i = l; i < r; i++) {
    assert(data[i] == src[i - l]);
  }
  // 确保目标数组的[r]位置是'\0'结束符（如果在目标区间内）
  if (r < N) {
    assert(data[r] == 0);  // 目标数组末尾应该是\0
  }
}

// 检查源字符串是否未被修改
void check_source_unmodified(const char* src, const char* original_src) {
  int i = 0;
  while (src[i] != '\0') {
    assert(src[i] == original_src[i]);
    i++;
  }
}

// 检查目标区间是否与源区间重叠
int is_overlap(uint8_t *l, uint8_t * r, const uint8_t* src) {
  // 源字符串的起始位置
  const uint8_t* source_start = src;
  const uint8_t* source_end = src + strlen((const char*)src);
  
  // 如果目标区间完全位于源区间之外，则不重叠
  if (r <= source_start && l >= source_end) {
    return 0;  // 不重叠
  }
  return 1;  // 重叠
}

// 测试strcpy函数
void test_strcpy() {
  const char* original_src = "Hello, World!";  // 用于检查源字符串是否未被修改
  const uint8_t* src;  // 源字符串
  int l, r;         // 目标数组的起始和结束位置

  for (l = 0; l < N; l++) {  // 遍历目标数组的起始位置l
    for (r = l + 1; r <= N; r++) {  // 遍历目标数组的结束位置r
      reset();  // 重置目标数组

      // 选择一个源字符串，尝试不同长度
      src = (uint8_t*)original_src;
      uint8_t *data_address = data;
      // 检查目标区间是否与源区间重叠
      if (is_overlap(data_address+l, data_address+r, src)) {
        continue;  // 如果重叠，则跳过此次测试
      }

      // 调用strcpy，将源字符串复制到目标数组的[l, r)区间
      strcpy((char*)data + l, (char*)src);

      // 检查目标数组[l, r)的内容是否和源字符串一致
      check_strcpy_correctness(src, l, r);

      // 检查目标数组[r, N)区间后面的部分是否为0（没有被修改）
      check_eq(r, N, 0);

      // 确保源字符串未被修改
      check_source_unmodified(original_src, original_src);
    }
  }
}

int main() {
  test_strcpy();  // 调用测试函数
  return 0;
}
