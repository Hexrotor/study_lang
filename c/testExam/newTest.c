#include <stdio.h>
int sum(int i, int k)
{
    int sum;
    for(sum=i++;i<=k;i++){
        sum+=i;
    }
    return sum;
}
int main()
{   
    int a, b;
    printf("Please enter numbers: ");
    scanf("%d %d", &a, &b);
    printf("%d",sum(a,b));
}
