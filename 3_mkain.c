//202510125217
//ljr2007102@qq.com
//李佳蓉
#include <stdio.h>
int main()
{
    int a, b, result;
    char op;  // 存储运算符（+、-、*、/）

    // 读取输入：两个整数 + 一个运算符（输入格式如 "3 5 +"）
    scanf("%d %d %c", &a, &b, &op);

    // 根据运算符判断并计算
    if (op == '+') {
        result = a + b;
        printf("%d\n", result);
    } else if (op == '-') {
        result = a - b;
        printf("%d\n", result);
    } else if (op == '*') {
        result = a * b;
        printf("%d\n", result);
    } else if (op == '/') {
        // 先判断除数是否为0
        if (b != 0) {
            result = a / b;  // 整数除法（如5/2结果为2，非2.5）
            printf("%d\n", result);
        } else {
            printf("除数不能为0！\n");
        }
    } else {
        // 处理非法运算符（如输入x、%等）
        printf("运算符无效！请输入+、-、*、/中的一个。\n");
    }

    return 0;
}
