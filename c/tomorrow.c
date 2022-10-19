#include <stdio.h>

struct date 
{
	int year;
	int month;
	int day;
};
int isRun(struct date data);
int numberOfDays(struct date data)//计算输入的月份有多少天的函数
{
	int days;//函数返回变量
	const int daysOfMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31};//记录每个月有多少天

	if(data.month == 2 && isRun(data)){
		days = 29;
	} else {
		days = daysOfMonth[data.month - 1];
	}
	return days;
}

int isRun(struct date data)/*1、普通年能被4整除且不能被100整除的为闰年
			     2、世纪年能被400整除的是闰年
			     */
{
	if(data.year % 100){//判断是否是世纪年
		//不是世纪年（不能被100整除）：
		if(data.year % 4) {//判断能否被4整除
			return 0;
		} else {
			return 1;
		}
	} else {//是世纪年
		if(!(data.year % 400)){//判断能否被400整除
			return 1;
		} else {
			return 0;
		}
	}
}

int main()
{
	struct date data, tomorrow;
	printf("请输入日期(yyyy mm dd): ");
	scanf("%d %d %d", &data.year, &data.month, &data.day);

	tomorrow = data;
	if(data.day >= numberOfDays(data)){//是否是该月的最后一天
		tomorrow.day = 1;
		if(data.month == 12){
			tomorrow.month = 1;
			tomorrow.year++;
		} else {
			tomorrow.month++;
		}
	} else {
		tomorrow.day++;
	}

	printf("明天是%d年%d月%d日\n", tomorrow.year, tomorrow.month, tomorrow.day);

}
