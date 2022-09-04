#include <stdio.h>
//此程序简单找出将角值组合成元值的方式
int main()
{
    int one, two, five; //1角2角5角
    int yuan; //元

    printf("Yuan: ");
    scanf("%d", &yuan);

    for(one = 1; one < yuan*10; one++) {
        for(two = 1; two < yuan*5; two++) {
            for(five = 1; five < yuan*2; five++) {
                if(one + two*2 + five*5 == yuan*10) {
                    printf("可以用%d个一角与%d个两角与%d个五角组合成%d元。\n", one, two, five, yuan);
                    goto exit;
                }
            }
        }
    }
    exit:
    return 0;
}