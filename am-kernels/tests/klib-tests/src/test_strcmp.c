#include "../include/klibtests.h"

#define N 32
char data[N+1];
char data_1[N+1];

// 初始化数据
void reset() {
for (int i = 0; i < N; i++) {
    data[i] = 'a' + (i % 26);        // data数组填充字符'a', 'b', ..., 'z'
    data_1[i] = 'a' + (i % 26);      // data_1数组也填充字符
}
}

// 检查strcmp的结果
void check_strcmp_result(int l, int r, int expected_result) {
    // 将两个数组转换为以'\0'结束的字符串
    data[N] = '\0'; // 确保比较的字符串终止符正确
    data_1[N] = '\0';

    int result = strcmp((char*)(data + l), (char*)(data_1 + l));
      if (expected_result == 0) {
        assert(result == 0); // 期望两部分相等
      } else {
        assert(result != 0); // 期望两部分不相等
     }
}

// 比较数据是否相等
// 测试strcmp的行为
void test_strcmp() {
    for (int l = 0; l < N; l++) {
        for (int r = l + 1; r <= N; r++) {
            reset(); // 重置数据

            // 在部分区间修改data_1的内容来制造差异
            if ((l + r) % 2 == 0) {
                for (int i = l; i < r; i++) {
                    data_1[i] = data_1[i] + 1; // 将data_1中的部分值改变
                }
            }

            // 现在进行strcmp比较
            if ((l + r) % 2 == 0) {
                // 如果l + r为偶数，则认为data和data_1在该区间应相等
                check_strcmp_result(l, r, 1); // 区间内容相同，期待strcmp返回0
            } else {
                // 否则认为数据不相等
                check_strcmp_result(l, r, 0); // 区间内容不同，期待strcmp返回非0
            }
        }
    }
}

int main() {
    test_strcmp(); // 执行测试
    return 0;
}
