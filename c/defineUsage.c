#include <stdio.h>
#define cube(x) ((x)*(x)*(x))//x会被替换成参数
//定义宏的原则：每一个参数要带括号，整个宏的值也要带括号
int main()
{
	int i = 2;
	printf("i^3=%d\n", cube(i));
}
