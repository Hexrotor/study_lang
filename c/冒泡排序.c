//冒泡排序 https://www.runoob.com/w3cnote/bubble-sort.html
#include <stdio.h>

int main()
{
	int i,j;
	int tmp;
	int arr[10];

	printf("输入10个整数(空格分隔):\n");
	
	for(i=0;i<10;i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0;i<10;i++){
		for(j=0;j<9;j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	}
	printf("排序后结果为: \n");
	for(i=0;i<10;i++){
		printf("%d \n",arr[i]);
	}
	return 0;
}
