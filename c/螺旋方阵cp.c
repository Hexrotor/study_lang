#include <stdio.h>
int main()
{
	int i,j,n,a[10][10],k=0,c=1,l;
	printf("请输入行列数");
	scanf("%d",&n);
	l=n-1;
	while(k<=l)
	{					//一次循环 
		for(j=k;j<=l;j++)//向左 
			a[k][j]=c++;
		for(i=k+1;i<=l;i++)//向下 
			a[i][l]=c++;
		for(j=l-1;j>=k;j--)//向右 
			a[l][j]=c++;
		for(i=l-1;i>k;i--)	//向上 
			a[i][k]=c++;
		k++;l--;
	}	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%3d",a[i][j]);
		printf("\n");
	}
	return 0;
}
