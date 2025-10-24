//202510125217
//ljr2007102@qq.com
//李佳蓉
#include <stdio.h>

int main() {
    // 定义float类型变量存储摄氏温度和华氏温度
    float celsius, fahrenheit;
    
    // 获取用户输入的摄氏温度
    scanf("%f", &celsius);
    
    // 按公式计算华氏温度
    fahrenheit = celsius * 9 / 5 + 32;
    
    // 输出结果，保留1位小数
    printf("%.1f\\n", fahrenheit);
    
    return 0;
}
