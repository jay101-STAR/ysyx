#include "../include/klibtests.h"

#define N 32
char dest[N];
char src[N];

// 初始化数据
void reset() {
    // 手动填充字符串数组
    dest[0] = '1';
    dest[1] = '2';
    dest[2] = '3';
    dest[3] = '\0';  // 目标字符串结束符

    src[0] = 'A';
    src[1] = 'B';
    src[2] = 'C';
    src[3] = '\0';  // 源字符串结束符
}

// 检查strcat的结果，返回值应为连接后的字符串
void check_strcat_result(const char *expected_result) {
    int i = 0;
    while (expected_result[i] != '\0') {
        assert(dest[i] == expected_result[i]);  // 比较每个字符
        i++;
    }
    assert(dest[i] == '\0');  // 确保以null结束
}

// 测试strcat的行为
void test_strcat() {
    for (int i = 0; i < N; i++) {
        reset(); // 重置数据

        // 使用strcat连接字符串
        /* int dest_len = 0; */
        /* while (dest[dest_len] != '\0') { */
        /*     dest_len++; */
        /* } */

        /* // 将src字符串连接到dest的末尾 */
        /* int i = 0; */
        /* while (src[i] != '\0') { */
        /*     dest[dest_len + i] = src[i]; */
        /*     i++; */
        /* } */
        strcat(dest, src);       /* dest[dest_len + i] = '\0';  // 确保拼接后以null结束 */

        // 预期的连接结果
        char expected_result[N];
        int j = 0;
        for (int k = 0; k < 3; k++) {
            expected_result[j++] = dest[k];  // 预期目标字符串部分
        }
        for (int k = 0; k < 3; k++) {
            expected_result[j++] = src[k];  // 预期源字符串部分
        }
        expected_result[j] = '\0';  // 确保结束符

        // 检查连接结果是否正确
        check_strcat_result(expected_result);
    }
}

int main() {
    test_strcat(); // 执行测试
    return 0;
}
