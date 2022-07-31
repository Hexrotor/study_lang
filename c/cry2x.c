#include <stdio.h>

int main()
{
	int crystal = 0;
	int xcrystal = 0;

	printf("Please enter your crystal and Xcrystal (ep: 120 10)");
	scanf("%d %d", &crystal, &xcrystal);

	printf("You have %f Xcrystal in total\n", crystal / 50.0 + xcrystal);

	return 0;
}
