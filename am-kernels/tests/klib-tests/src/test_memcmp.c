#include "../include/klibtests.h"

#define N 32
uint8_t data[N];
uint8_t data_1[N];

// 初始化数据
void reset() {
    for (int i = 0; i < N; i++) {
        data[i] = i + 1;        // data数组填充为1, 2, 3, ..., N
        data_1[i] = i + 1;      // data_1数组也填充为1, 2, 3, ..., N
    }
}

// 检查memcmp的结果，返回值应为0表示相等，非0表示不相等
void check_memcmp_result(int l, int r, int expected_result) {
    int result = memcmp(data + l, data_1 + l, r - l);
    if (expected_result == 0) {
        assert(result == 0); // 期望两部分相等
    } else {
        assert(result != 0); // 期望两部分不相等
    }
}

// 比较数据是否相等
void check_eq(int l, int r, int val) {
    for (int i = l; i < r; i++) {
        assert(data[i] == val);
        assert(data_1[i] == val);
    }
}

// 比较数据是否不相等
void check_neq(int l, int r) {
    for (int i = l; i < r; i++) {
        assert(data[i] != data_1[i]); // 确保两个数组在此区间内不相同
    }
}

// 测试memcmp的行为
void test_memcmp() {
    for (int l = 0; l < N; l++) {
        for (int r = l + 1; r <= N; r++) {
            reset(); // 重置数据

            // 在部分区间修改data_1的内容来制造差异
            if ((l + r) % 2 == 0) {
                for (int i = l; i < r; i++) {
                    data_1[i] = data_1[i] + 1; // 将data_1中的部分值改变
                }
            }

            // 现在进行memcmp比较
            if ((l + r) % 2 == 0) {
                // 如果l + r为偶数，则认为data和data_1在该区间应不相等
                check_memcmp_result(l, r, 1); // 区间内容相同，期待memcmp返回0
            } else {
                // 否则认为数据不相等
                check_memcmp_result(l, r, 0); // 区间内容不同，期待memcmp返回非0
            }
        }
    }
}

int main() {
    test_memcmp(); // 执行测试
    return 0;
}
