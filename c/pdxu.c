#include <stdio.h>

int main()
{
	int i, j, minp;
	int tmp;//Using for swapping value
	int arr[10];

	printf("Please enter 10 numbers: ");

	for(i = 0;i < 10;i++) {
		scanf("%d", &arr[i]);
	}

	for(i = 0;i < 10;i++){
		minp = i;//先选一个元素，在循环中比较大小

		for(j=i+1;j<10;j++){
			if(arr[j]<arr[minp]){
				minp=j;
			}
		}
		if(minp != i){
			tmp = arr[i];
			arr[i] = arr[minp];
			arr[minp] = tmp;
		}
	}
	for(i = 0;i < 10;i++){
		printf("%d ", arr[i]);
	}
}
