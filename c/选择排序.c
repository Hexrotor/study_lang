//选择排序（升序）

#include <stdio.h>
int main()
{
    int i, j, minp;
    int tmp;
    int arr[10];

    printf("输入10个整数(空格分隔):\n");
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    //进入比对。先起一个数，然后在数组中进行比较
    for(i=0;i<9;i++){
        minp=i;

        for(j=i+1;j<10;j++){
            if(arr[j]<arr[minp]) minp=j;//如果有比这个数更小的数，记录下来并交换位置
        }
        if(minp != i){//此处是位置交换。如果检测到记录的index改变了，则进入
            tmp=arr[i];
            arr[i]=arr[minp];
            arr[minp]=tmp;
        }
    }
    //每次都将最小的数排过来，循环完成后则得到一份从小到大升序排列的数组
    printf("排序后结果为：\n");
    for(i=0;i<10;i++){
        printf("%d \n", arr[i]);
    }
    return 0;
}