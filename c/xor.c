#include <stdio.h>

int main()
{
	int a, b;
	a = 0xa;
	b = 0xb;
	a ^= b;
	b ^= a;
	a ^= b;
	//b ^= a;
	printf("a = 0x%x b = 0x%x\n", a, b);
}
