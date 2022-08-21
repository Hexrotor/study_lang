#include <stdio.h>

int main()
{
    int num = 0;
    int n = 0; //位数记录变量
    printf("Please enter a number: ");
    scanf("%d", &num);

    n++;
    num /= 10;

    while (num > 0) {
        n++;
        num /= 10;
    }
    printf("%d\n",n);
}