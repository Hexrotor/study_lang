#include <stdio.h>

int main ()
{
    int startRange, endRange, num, i;
    printf("Let me know the range you want, eg 1 100 means 1-100: ");
    scanf("%d %d",&startRange, &endRange);
    //int isPrime;

    for (num=startRange;num <= endRange;num++){
        //isPrime = 1;
        for (i=2;i<num;i++){
            if (num % i == 0){
                //isPrime = 0;
                break;
            }
        }
        if(i == num){ //If true, the break didn't work.
            printf("%d ",num);
        }
    }
    return 0;
}