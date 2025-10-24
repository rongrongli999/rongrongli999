#include <stdio.h>

int main() {
    int a, b, c;
    // 读取三个整数（线段长度）
    scanf("%d %d %d", &a, &b, &c);

    // 三角形判定条件：任意两边之和 > 第三边，用&&连接三个条件
    if (a + b > c && a + c > b && b + c > a) {
        printf("可以组成三角形\n");
    } else {
        printf("不能组成三角形\n");
    }

    return 0;
}
