#include <stdio.h>
#include <stdlib.h>

struct date {
	int year;
	int month;
	int day;
} rawdata;

int isRun(struct date *data);

int numberOfDays(struct date *data);
int check(struct date *data);

int main(int argc, char *argv[])
{
	struct date *data = &rawdata;

	if(argc == 1){
		printf("Usage: Type yyyy mm dd following the command\n");
		goto END;
	} else {
		data->year = atof(argv[1]);
		data->month = atof(argv[2]);
		data->day = atof(argv[3]);
	}
	//printf("Please enter the date(yyyy mm dd): ");
	//scanf("%d %d %d",&data.year, &data.month, &data.day);

	printf("Your input: %s %s %s\n", argv[1], argv[2], argv[3]);
	if(check(data)){
		printf("Please check your input!\n");
		goto END;
	}
	if(data->day == numberOfDays(data)){//If true, turn to next month
		if(data->month == 12){//If true, turn to next year
			data->year++;
			data->day = 1;
			data->month = 1;
		} else {
			data->month++;
			data->day = 1;
		}
	} else {
		data->day++;
	}
	printf("Tomorrow's date is %d %d %d\n", data->year, data->month, data->day);
END:
	//system("pause");

	return 0;
}	

int numberOfDays(struct date *data)
{
	int days;
	const int daysOfMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(data->month == 2 && isRun(data)){
		days = 29;
	} else {
		days = daysOfMonth[data->month-1];
	}
	return days;
}

int isRun(struct date *data)
{
	if(data->year%100){
		if(!(data->year%4)){
			return 1;
		} else {
			return 0;
		}
	} else if(data->year%400){
		return 0;
	} else {
		return 1;
	}
}

int check(struct date *data)
{
	if(data->month > 12 || data->day > numberOfDays(data)) {
		return 1;
	} else {
		return 0;
	}
	
}

