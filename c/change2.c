#include <stdio.h>

int main()
{
	//初始化变量
	double price = 0;
	double paid = 0;

	//交互
	printf("请输入价格：");
	scanf("%lf", &price);

	printf("请输入付款：");
	scanf("%lf", &paid);

	//运算与输出
	if (price > paid)
	{
		printf("付款金额不足，还差%f元",(price - paid));
	}
	else
	{
		printf("找您%f元",paid - price);
	}
	return 0;
}
