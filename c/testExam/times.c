//����[0,9]��Χ�ڲ�ȷ����������Ȼ��ͳ��ÿ�������ֵĴ���������-1ʱ�˳�
#include <stdio.h>

int main()
{
    int i, num, cnt[10] = {0};
    while(1){
        scanf("%d", &num);
        if(num < 0){
            break;
        }
        cnt[num]++;
    }
    for(i = 0;i < 10;i++){
        printf("Times of %d: %d\n",i ,cnt[i]);
    }
}