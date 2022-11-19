#include <iostream>
using namespace std;
//引用与二级指针
void func1(int **p)//二级指针函数
{
	*p = new int(3);
	cout << "func1中*p=" << *p << "，值为**p=" << **p <<endl;
	delete *p;
}
void func2(int *&p)//将p作为main中p的引用
{
	p = new int(3);
	cout << "func2中p=" << p << "，值为*p=" << *p <<endl;
	delete p;
}

int &func3(int &tmp)//一个返回引用的函数
{
	cout << "tmp = " << tmp << endl;
	cout << "tmp + 1 = " << tmp+1 << endl;
	tmp++;
	return tmp;
}
int main()
{
	int *p = nullptr;
	int num = 3;
	func1(&p);//传进去的是指针的地址
	func2(p);//传进去指针
	int &refer = func3(num);
	cout << "refer = " << refer << endl;
}
