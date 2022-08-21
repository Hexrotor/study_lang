#include <stdio.h>

int main()
{
    int number = 0;
    int temp = 0; //个位
    int result = 0; //构建新数
    printf("Please enter a number: ");
    scanf("%d",&number);

    while (number > 0){
        temp = number % 10;
        result = result * 10 + temp;
        number /= 10;
    }
    printf("%d", result);
    return 0;
}