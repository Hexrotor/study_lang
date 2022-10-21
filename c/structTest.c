#include <stdio.h>

struct time
{
	int sec;
	int min;
	int hour;
} now;

struct time timeUpdate(struct time now);

int main()
{
	now.sec = 1;
	now = timeUpdate(now);
	printf("%d", now.sec);
}

struct time timeUpdate(struct time now)
{
	printf("Please enter the seconds of now: ");
	scanf("%d", &now.sec);
	now.sec=0;
	now.min=0;
	now.hour=0;
	return now;
}
