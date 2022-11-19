#include <iostream>
using namespace std;
int main()
{
    bool sex;;
    int age;
    bool hasgf;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your sex(0 or 1): ";
    cin >> sex;
    cout << "Enter your age: ";
    cin >> age;
    cout << "My name is " << name << ", " << sex << "，age："<<age << endl;
    cout << "Is adult: " << (age >= 18)<< endl;
    cout << "(age=18)=" << (age = 18) << endl;//赋值表达式的值是其右边的值
    
}