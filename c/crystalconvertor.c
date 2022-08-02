#include <stdio.h>

int main()
{
	int crystal = 0;
	int xcrystal = 0;

	printf("Please enter your crystal and Xcrystal amount (like \"12000 190\"): ");
	scanf("%d %d", &crystal, &xcrystal);

	printf("You have crystal %d in total.\n", crystal + 50 * xcrystal);

	return 0;
}
