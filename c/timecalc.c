#include <stdio.h>

int main()
{
	int hour1 = 0;
	int hour2 = 0;
	int minute1 = 0;
	int minute2 = 0;

	printf("Please enter the time(like 1 30 means 1 hour 30 min): ");
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	
	int time1 = hour1 * 60 + minute1;
	int time2 = hour2 * 60 + minute2;

	printf("时间差: %d:%d\n", (time1 - time2) / 60, (time1 - time2) % 60);

	return 0;
}
