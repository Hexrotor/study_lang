//输入[0,9]范围内不确定的整数，然后统计每个数出现的次数。输入-1时退出
#include <stdio.h>

int main()
{
    int i, num, cnt[10] = {0};
    while(1){
        scanf("%d", &num);
        if(num < 0){
            break;
        }
        cnt[num]++;
    }
    for(i = 0;i < 10;i++){
        printf("Times of %d: %d\n",i ,cnt[i]);
    }
}