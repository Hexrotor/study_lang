//分别输入两个整数a n，运算S=a+aa+aaa+...+a...a(此处有n个a)
#include <stdio.h>
#include <math.h>
int main()
{
    int a, n, sum;
    printf("Please enter a and n(like 1 5): ");
    scanf("%d %d", &a, &n);
    int a_tmp = a;
    for(sum = 0;a_tmp < pow(10, n);a_tmp = a_tmp * 10 + a) {
        sum += a_tmp;
    }
    printf("S=%d", sum);
    
    return 0;
}