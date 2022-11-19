#include <iostream>
using namespace std;

int cmpfun(const void* a1, const void* a2);
int search(int* p, int length, int target);

int main()
{
    int num;
    int target;
    cout << "请输入数字的个数：";
    cin >> num;
    int *arr = new int[num];
    cout << "请输入数字， 以空格分隔：";
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    //排序
    qsort(arr, num, sizeof(int), cmpfun);
    //查找
    cout << "请输入查找目标：";
    cin >> target;
    int localtion = search(arr, num, target);
    cout << "目标位于arr[" << localtion << "]处" << endl;
    delete [] arr;
}

int cmpfun(const void* a1, const void* a2)
{
    //如果返回值小于0， qsort使a1排在a2前面，这里用a1-a2使排序为升序
    return *(int*)a1 - *(int*)a2;
}

int search(int* p, int length, int target)
{
    //折半查找，返回查找值的下标
    int low = 0;
    int high = length - 1;
    int mid = (low + high) / 2;
    while (low < high)
    {
        if (p[mid] == target) return mid;
        else if (p[mid] > target) low = mid + 1;
        else high = mid - 1;
        mid = (low + high) / 2;
    }
    return -1;//Failed
}