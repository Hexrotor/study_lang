#include <stdio.h>

int main()
{
	int a;
	printf("Please enter: ");
	scanf("%d",&a);
	printf("%s\n",((a & 1)?"奇":"偶"));
}
