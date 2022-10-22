//计算字母的序号
#include <stdio.h>

int main()
{
	char a;
	printf("Please enter: ");
	scanf("%s",&a);
	printf("%d\n",a-'a'+1);
}
