#include <stdio.h>

void minmax(int a[], int length, int *min, int *max);

int main()
{
    int a[]={1,2,392,278,1682,39,19892,};
    int max, min;
    minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);
    printf("min=%d, max=%d",min ,max);
}

void minmax(int a[], int length, int *min, int *max)
{
    int i;
    *min=a[0];
    *max=a[0];
    for(i=0;i<length;i++){
        if(a[i]<*min){
            *min=a[i];
        }
        if(a[i]>*max){
            *max=a[i];
        }
    }
}
