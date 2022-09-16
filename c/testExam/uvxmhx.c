/*本程序输出水仙花数
水仙花数指一个N位正整数(N>=3)，它的每个位上的数字的N次幂之和等于它本身。例如：153 = 1^3 + 5^3 + 3^3
本题按要求编写程序，计算所有N位水仙花数。
输入格式：输入在一行中给出一个正整数N
输出格式：按递增顺序输出所有N位水仙花数，每个数字占一行。
输入样例：3
输出样例：
153
370
371

n=3
cnt=0~9 每一位的数
tmp临时位数
153->1^3 + 5^3 + 3^3 ?= 1*10^2 + 5*10^1 + 3*10^0 
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, result = 0, check, tmp , sResult = 0;//num:位数 tmp:临时数 check: 被检查的数
    printf("Please enter a number(3~7): ");
    scanf("%d", &num);
    int min = pow(10, num - 1);//最小值
    int max = pow(10, num) - 1;//最大值
    for(check = min; check >= min && check <= max; check++) {
        tmp = check;
        result = 0;
        while(tmp) { //拆分乘方计算
            result += pow(tmp % 10, num);
            tmp /= 10;
        }
        if(check == result) {
            printf("%d\n", check);
        }
    }

    return 0;
}