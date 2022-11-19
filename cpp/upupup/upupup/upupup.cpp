#include <iostream>
using namespace std;
int isLeap(int year);
int main()
{
    int year;
    cout << "Please enter year: ";
    cin >> year;
    cout << "Year " << year << " is leap: " << isLeap(year);
}
int isLeap(int year)
{
    if (year % 100 == 0)
    {
        //是世纪年
        if (year % 400 == 0) return 1;//是闰年
        else return 0;
    }
    else
    {
        //是普通年
        if (year % 4 == 0) return 1;
        else return 0;
    }
}
