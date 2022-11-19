#include <iostream>
using namespace std;

struct test {
	string name;
	int age;
	struct test* next;
};

int main()
{
	test* head = nullptr, * tail = nullptr, * realtime = nullptr;
	realtime = new test({ "Hexrotor", 24, nullptr });//创建节点1
	head = tail = realtime;//设置头尾指针指向节点1

	realtime = new test({"TS", 16, nullptr});//创建节点2
	tail->next = realtime;//使节点1的next指针指向节点2
	tail = realtime;//调整尾指针到节点2

	realtime = new test({ "HexShell", 17, nullptr });
	tail->next = realtime;
	tail = realtime;//到此为止已经创建了3个节点

	//遍历节点
	realtime = head;
	while (realtime != nullptr) {//末尾节点的next指针指向nullptr
		cout << "Name: " << realtime->name << endl;
		cout << "Age: " << realtime->age << endl;
		realtime = realtime->next;//指向下一个节点
	}

	//删除链表。由于每一个节点只知道其后一节点的地址，所以只能从头节点开始删除
	//依次把头指针往后移动
	while (head != nullptr) {
		realtime = head;
		head = head->next;
		delete realtime;
	}
}