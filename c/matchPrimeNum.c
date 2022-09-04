#include <stdio.h>

int main()
{
    //此程序可以输出指定开头指定数量的质数
    int startRange, requireCount, count, i, num, isPrime; // startRange means the initial size of the number
    printf("Please enter the initial number size and total count you want: ");
    scanf("%d %d", &startRange, &requireCount);
    num = startRange;

    for (count = 0; count < requireCount; num++)
    {
        isPrime = 1;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            { // if ture, not prime number
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            count++;
            printf("%d\t", num);
            if (count % 10 == 0)
            {
                printf("\n");
            }
        }
    }

    return 0;
}