#include <stdio.h>
int main()
{
    int num, temp, length = 0, mod = 1;

    printf("Please enter a number: ");
    scanf("%d", &num);
    temp = num;
    
    do { //计算位数
        temp /= 10;
        mod *= 10;
    } while(temp > 9);

    do { //主输出
        printf("%d", num / mod);
        if(mod > 0) { //检测是否应该输出空格
            printf(" ");
        }
        num %= mod;
        mod /= 10;
    } while(mod > 0);
    
    return 0;
}