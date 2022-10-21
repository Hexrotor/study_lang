/*静态本地变量使用例
使用static在函数内定义一个变量，退出函数后值不会消失，且static行只运行一次
静态本地变量和全局变量的区别在于它不能被全局访问
尽量避免使用全局变量和静态本地变量
*/
#include <stdio.h>

int f(void);
int global;
int main(int argc, const char *argv[])
{
	f();
	f();
	f();
	return 0;
}

int f(void)
{
	static int i = 1;//只有第一次进函数的时候会运行此行
	int k;
	i++;
	printf("i=%d\n", i);
	
	printf("&i=%p\n", &i);
	printf("&global=%p\n", &global);
	printf("&k=%p\n", &k);//从地址可以看出全局变量和静态本地变量储存在一起
}
