/*给定不超过6的正整数A，考虑从A开始的连续4个数字。请输入所有由它们组成的无重复数字的3位数。
输入格式：在一行输入数字A
输出格式：输出满足条件的3位数，要求从小到大，每行6个整数。整数间以空格分隔，但行末不能有多余空格。
输入样例：2
输出样例：
234 235 243 245 253 254
324 325 342 345 352 354
423 425 432 435 452 453
523 524 532 534 542 543
*/
#include <stdio.h>

int main()
{
	int a;
	int a1, a2, a3;
	printf("Please enter a number(1~6): ");
	scanf("%d", &a);
	int counter = 0;
	for(a1 = a; a1 <= a + 3; a1++) {
		for(a2 = a; a2 <= a+3; a2++) {
			for(a3 = a; a3 <= a + 3; a3++) {
				if(a1 != a2 && a1 != a3 && a2 != a3) {
					printf("%d%d%d", a1, a2, a3);
					counter++;
					if(counter % 6 == 0) {
						printf("\n");
					} else {
						printf(" ");
					}
				}
			}
		}
	}

	return 0;
}
