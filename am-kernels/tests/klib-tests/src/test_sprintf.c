#include "../include/klibtests.h"
#include <limits.h>
#define NUM_TESTS 7
const char* expected_output[NUM_TESTS] = {
    "0",
    "126322567",
    "2147483647",
    "-2147483648",
    "-2147483647"
};
int data[NUM_TESTS] = {
    0,
    INT_MAX / 17,
    INT_MAX,
    INT_MIN,
    INT_MIN + 1
};
// 手动比较两个字符串是否相等，不使用 strcmp
// 如果不同则触发断言失败
void manual_str_compare(const char *s1, const char *s2) {
    int i = 0;
    // 逐字符比较直到遇到'\0'
    while (s1[i] != '\0' || s2[i] != '\0') {
        // 如果对应字符不同，则断言失败
        assert(s1[i] == s2[i]);
        i++;
    }
}

// 测试sprintf的行为
void test_sprintf() {
    char buffer[64];  // 足够大的缓冲区用于存储sprintf的输出

    for (int i = 0; i < NUM_TESTS-2; i++) {
        // 使用sprintf将整数格式化为字符串存储到buffer中
        int ret = sprintf(buffer, "%d", data[i]);
        // 可以选择验证sprintf返回值是否非负且合理
        assert(ret >= 0);
        
        // 手动比较buffer中的内容和预期输出
        manual_str_compare(buffer, expected_output[i]);
    }
}

int main() {
    test_sprintf(); // 执行测试
    return 0;
}
