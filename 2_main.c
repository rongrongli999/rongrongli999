#include <stdio.h>

int main() {
    int score;  // 成绩是整数，用int类型存储
    printf("请输入学生成绩（0-100）：");
    scanf("%d", &score);  // 读取整数成绩

    // 从高分到低分判断等级，逻辑更简洁
    if (score >= 90 && score <= 100) {
        printf("A\n");
    } else if (score >= 80 && score <= 89) {
        printf("B\n");
    } else if (score >= 70 && score <= 79) {
        printf("C\n");
    } else if (score >= 60 && score <= 69) {
        printf("D\n");
    } else if (score >= 0 && score < 60) {
        printf("E\n");
    } else {
        printf("输入成绩无效！请输入0-100之间的整数。\n");  // 处理非法输入
    }

    return 0;
}
