#include <stdio.h>

int main()
{
    int n, i;
    double sum = 0.0;
    printf("此程序计算数列1/n的前n项和。现在请输入n值: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        sum += 1.0/i;
    }
    printf("数列1/n的前%d项和为%f", n, sum);
}