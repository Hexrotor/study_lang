#include <stdio.h>
int main()
{
    int a=0;
    int b=0, a_tmp;
    while(++a>0);
    a--;
    a_tmp=a;
    do {
        b++;
    } while((a/=10)!=0);
    printf("int能表示的最大数是: %d, 最大位数是%d",a_tmp ,b);
}