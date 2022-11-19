#include <iostream>
using namespace std;

void dataswap(string &str1, string &str2)
{
	string tmp;
	tmp = str1;
	str1 = str2;
	str2 = tmp;
}
void dataswap(int &num1, int &num2)
{
	int tmp;
	tmp = num1;
	num1 = num2;
	num2 = tmp;
}
int main()
{
	string str1 = "Hex";
	string str2 = "rotor";
	int num1 = 1;
	int num2 = 2;
	dataswap(str1, str2);
	cout << "str1 = " << str1 << ", str2 = " << str2 << endl;
	dataswap(num1, num2);
	cout << "num1 = " << num1 << ", num2 = " <<  num2 << endl;
}
