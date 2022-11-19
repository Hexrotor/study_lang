#include <iostream>
using namespace std;

struct test {
	int age = 0;
	string name = "\0";
};

int main()
{
	test student1;
	memset(&student1, 0, sizeof(int));
	student1.age = 18;
	student1.name = "Hex";
	cout << student1.age << endl;
	cout << student1.name << endl;
	test* p = &student1;//结构体指针
	cout << p->age << endl;//两种方式均可
	cout << (*p).name << endl;
	test* p2 = new test({24, "Hexrotor"});//用动态分配内存创建结构体指针，且赋初值
	//memset(p2, 0, sizeof(test));//清空内存
	cout << "Age = " << p2->age << endl << "Name = " << p2->name << endl;

}