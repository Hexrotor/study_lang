//����ĵ�һ��ʹ����
#include <stdio.h>

 int main()
 {
    double ave = 0;
    int cnt , sum = 0;
    int num[100];
    //����ͬʱ����������
    printf("Please enter numbers: ");
    //������¼���ֵ����鲢���
    for(cnt = 0; cnt < 100; cnt++) {
        scanf("%d", &num[cnt]);
        //��⵽������-1��ֹͣ���������100������
        if(num[cnt]<0){
            cnt--;
            break;
        }
        sum += num[cnt];
    }
    //��ƽ��
    ave = 1.0 * sum / (cnt + 1);
    //���ƽ���������
    printf("Average number: %f\nSum:%d\n", ave, sum);
    for(;cnt >= 0;cnt--){
        if(num[cnt] > ave) {
            printf("%d ", num[cnt]);
        }
    }
 }