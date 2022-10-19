#include <stdio.h>
enum DAY {ONE, TWO, THRE};
enum DAY day = ONE;
int main()
{
	printf("sizeof day=%ld\n", sizeof(day));
	printf("%d\n", day);
}
