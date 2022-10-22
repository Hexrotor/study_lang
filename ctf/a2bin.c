//打印输入的字符的binary
//且每6个数字就换行
//用于base64查码
#include <stdio.h>
int cnt = 0;
void print_bin(char num)
{
	char bin[8] = {0};
	int i;
	for(i = 0;i < 8;i++) {
		bin[i] = num % 2;
		num /= 2;
	}
	for(i = 7;i >= 0;i--){
		printf("%d",bin[i]);
		cnt++;
		if(!(cnt%6)) printf(" %d\n",cnt/6);
	}
}

int main()
{
	char s[10] = {0};
	printf("Please enter(10 char max):");
	scanf("%s", s);
	for(int i = 0;i<10;i++){
		print_bin(s[i]);
	}
	printf("\n");
}
