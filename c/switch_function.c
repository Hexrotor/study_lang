#include <stdio.h>

int main()
{
    double x = 0;
    int type = 0;
    printf("Please enter x: ");
    scanf("%lf", &x);
    printf("%lf\n", x); //确认输入数字
    
    if (x < 0) {
        type = 1;
    } else if (x == 0) {
        type = 2;
    } else {
        type = 3;
    } //判断x类型
    
    printf("type = %d\n", type); //输出类型
    
    switch (type)  {
        case 1:
        printf("f(%lf) = -1",x);
        break;

        case 2:
        printf("f(0) = 0");
        break;

        case 3:
        printf("f(%lf) = %lf", x, 2*x);
    }
}