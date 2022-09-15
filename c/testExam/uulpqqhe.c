/*给定一个数列，求其前n项和
2/1+3/2+5/3+8/5……该序列从第二项起，每一项的分子是前一项的分子分母之和，分母是前一项的分子
输入格式：在一行中给出正整数n
例：
输入：20
输出：32.66
*/
#include <stdio.h>
int main()
{
    int n;
    int cnt;//循环的项
    double numerator = 2;//分子
    int denominator = 1;//分母
    double sum = 0;//前n项和
    double tmp;
    printf("前n项求和：请输入求和的项数n: ");
    scanf("%d", &n);
    for(cnt = 1; cnt <= n; cnt++) {
        sum += numerator/denominator;
        tmp = numerator;
        numerator = numerator + denominator;
        denominator = tmp;
    }
    printf("%lf", sum);
    return 0;
}