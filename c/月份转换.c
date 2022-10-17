#include <stdio.h>

int main()
{
	char month[12][15]={"January", "February", "March", "April", "May",\
"June", "July", "August", "September", "October", "November", "December"};
	int num;
	
	printf("请输入月份号: ");
	scanf("%d", &num);
	if(num < 1 || num > 12){
		printf("Wrong input!\n");
	} else {
		printf("%s\n",month[num-1]);
	}
}
