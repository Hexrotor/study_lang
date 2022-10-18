#include <stdio.h>

struct date {//定义一个类型叫date的结构
	int day;
	int month;
	int year;
};

int main(int argc, char const *argv[])
{
	struct date today;//以date为结构创建该结构的一个变量

	today.year = 2022;//以此方式可以给某结构的变量赋值
	today.month = 10;
	today.day = 18;

	printf("Today is %d-%d-%d\n", today.year, today.month, today.day);
	
	struct date day;
	day = (struct date){19,10,2022};//另一种赋值方式，值的顺序必须和先前定义的结构顺序对应
	today = day;//用同类的struct赋值，然后两者对应的值会相等
	printf("Day is %d-%d-%d\n", day.year, day.month, day.day);
	printf("Modified Today is %d-%d-%d\n", today.year, today.month, today.day);

	return 0;
}
