#include <stdio.h>
#include <stdlib.h>
#include "fun.h"//fun.h记录了函数fun的原型，使编译时能够进行代码检查

double f(double a, double b);

int main(int argc, const char *argv[])
{
	int a = 1;
	int b = 2;//此处整型传给double会自动转换类型
	printf("%f\n",f(a, b));
	return 0;
}
