#include <stdio.h>
int main()
{
    int i = 0;
    int cnt[10]= {0, 1, 2, 3, 4};
    for(i = 0;i < 10;i++){
        printf("Times of %d: %d\n",i ,cnt[i]);
    }
}