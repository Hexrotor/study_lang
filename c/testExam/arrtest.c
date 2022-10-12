//数组的第一个使用例
#include <stdio.h>

 int main()
 {
    double ave = 0;
    int cnt , sum = 0;
    int num[100];
    //可以同时输入多个数字
    printf("Please enter numbers: ");
    //批量记录数字到数组并求和
    for(cnt = 0; cnt < 100; cnt++) {
        scanf("%d", &num[cnt]);
        //检测到输入了-1就停止，最大输入100个数字
        if(num[cnt]<0){
            cnt--;
            break;
        }
        sum += num[cnt];
    }
    //求平均
    ave = 1.0 * sum / (cnt + 1);
    //求比平均数大的数
    printf("Average number: %f\nSum:%d\n", ave, sum);
    for(;cnt >= 0;cnt--){
        if(num[cnt] > ave) {
            printf("%d ", num[cnt]);
        }
    }
 }