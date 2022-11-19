#include <iostream>

using namespace std;

int main()
{
	long length;
	cout << "Please input the length of array: ";
	cin >> length;
	int *array = new (std::nothrow) int[length];
	
	if(array == nullptr){
		cout << "Failed to allocate" << endl;
	} else {
		array[length-1] = 114514;
		cout << "array[length - 1] == " << array[length - 1] << endl;
		cout << "*(array + length - 1) == " << *(array + length - 1) << endl;
		delete[] array;
	}
}
