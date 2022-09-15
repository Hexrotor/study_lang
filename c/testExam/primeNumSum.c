/*在一行中给出两个1~500范围内的整数N M，整数之间以空格分隔
输出这两个整数范围内的质数的个数和它们的和
例：
输入10 31
输出7 143
*/
#include <stdio.h>

int main()
{
    int startRange, endRange, num, i, cnt = 0, sum = 0;//num是需要检查的数字，i是取余数，cnt是质数的个数统计，sum是质数总和
    printf("Please enter two numbers(1~500, eg 1 5): ");
    scanf("%d %d", &startRange, &endRange);
    // int isPrime;

    for (num = startRange; num <= endRange; num++)
    {
        // isPrime = 1;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                // isPrime = 0;
                break;
            }
        }
        if (i == num)// If true, the break didn't work.
        {
            sum += num;
            cnt++;
        }
    }
    printf("%d %d", cnt, sum);
    return 0;
}