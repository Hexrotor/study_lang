//ѡ����������

#include <stdio.h>
int main()
{
    int i, j, minp;
    int tmp;
    int arr[10];

    printf("����10������(�ո�ָ�):\n");
    for(i=0;i<10;i++){
        scanf("%d", &arr[i]);
    }
    //����ȶԡ�����һ������Ȼ���������н��бȽ�
    for(i=0;i<9;i++){
        minp=i;

        for(j=i+1;j<10;j++){
            if(arr[j]<arr[minp]) minp=j;//����б��������С��������¼����������λ��
        }
        if(minp != i){//�˴���λ�ý����������⵽��¼��index�ı��ˣ������
            tmp=arr[i];
            arr[i]=arr[minp];
            arr[minp]=tmp;
        }
    }
    //ÿ�ζ�����С�����Ź�����ѭ����ɺ���õ�һ�ݴ�С�����������е�����
    printf("�������Ϊ��\n");
    for(i=0;i<10;i++){
        printf("%d \n", arr[i]);
    }
    return 0;
}