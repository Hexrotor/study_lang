/*给定一个分数，将其约分为最简分数
在一行中输入分数，带斜杠，让scanf处理该斜杠
例：
输入：60/120
输出：1/2
*/
#include <stdio.h>
int main()
{
    int numerator;//分子
    int denominator;//分母
    printf("Please enter number(eg 60/120): ");
    scanf("%d/%d", &numerator, &denominator);
    int tmpA = numerator, tmpB = denominator, tmpC;//求最大公因数用

    do {//求最大公因数
        tmpC = tmpA % tmpB;
        tmpA = tmpB;
        tmpB = tmpC;
    } while(tmpB > 0);
    printf("%d/%d", numerator / tmpA, denominator / tmpA);
    return 0;
}
/*较low写法：
int main()
{
    int numerator; //分子
    int denominator;  //分母
    int tmpNumerator;
    int tmpDenominator;
    printf("Please enter fraction(eg 60/120): ");
    scanf("%d/%d", &numerator, &denominator);
    for (tmpDenominator = 1; tmpDenominator <= denominator; tmpDenominator++)
    {
        for (tmpNumerator = 0; tmpNumerator <= numerator; tmpNumerator++)
        {
            if (1.0*tmpNumerator / tmpDenominator == 1.0*numerator / denominator)
            {
                printf("%d/%d", tmpNumerator, tmpDenominator);
                goto END;
            }
        }
    }
END:
    return 0;
}
*/