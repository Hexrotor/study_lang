#include <iostream>
using namespace std;
int main()
{
	string str1 = "Hello World!";
	string str2 = "I love coding!";
	cout << str1 + str2 << endl;//拼接字符串
	string result = "YES" " I DO";//拼接常量字符串时，不用+号
	cout << result << endl;
	string result2 = str2 + " so do you!" + " yee";//有变量字符串就用+
	cout << result2 << endl;
}
