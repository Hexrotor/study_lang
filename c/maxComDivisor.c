//使用欧几里得算法计算最大公约数
#include <stdio.h>

int max(int a, int b)
{
    if(a > b){
        return a;
    } else {
        return b;
    }
}

int main()
{
    int numberA, numberB, mod;
    printf("Please enter two numbers(like 11 121): ");
    scanf("%d %d", &numberA, &numberB);

    while(numberB) {
        mod = numberA % numberB;
        numberA = numberB;
        numberB = mod;
    }
    printf("The greatest common divisor is %d", numberA);

    return 0;
}