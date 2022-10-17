//Unfinished
#include <stdio.h>

int main()
{
	int n;//行列数
	printf("请输入行列数：");
	scanf("%d", &n);
	int x=1, y=0;//二维坐标
	int endNumber=n*n;//末尾数字为n^2
	int arr[10][10];
	int number=1;
	int dct=0;//方向 向右为0，向下为1，向左为2，向上为3
	
	int i,j;
	
	int rightEdge=n-1, downEdge=n-1, leftEdge=0, upEdge=0;

	do{
		switch(dct){
			case 0: //向右
				arr[x][++y]=number++;
				if(y==rightEdge){
					dct++;
					rightEdge--;
				}
				break;
			case 1: //向下
				arr[++x][y]=number++;
				if(x==downEdge)
				{
					dct++;
					downEdge--;
				}
				break;
			case 2: //向左
				arr[x][--y]=number++;
				if(y==leftEdge)
				{
					dct++;
					leftEdge++;
				}
				break;
			case 3: //向上
				arr[--x][y]=number++;
				if(x==upEdge)
				{
					dct=0;
					upEdge++;
				}
				break;
		}
	}while(number<=endNumber);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",arr[i][j]);
			if((j+1)%n==0){
				printf("\n");
			} else {
				printf(" ");
			}
		}
	}
}
