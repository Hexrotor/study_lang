#include <stdio.h>

int main()
{
    int input = 0;
    printf("Please enter a normal number: ");
    scanf("%d", &input);

    printf("The BCD number of %d is %d", input, (input / 16) * 10 + input % 16);

    return 0;
}