#include <stdio.h>

int main()
{
    int type = 0;
    printf("Please enter a number (1-4): ");
    scanf("%d", &type);
    
    switch (type) {
        case 1:
            printf("Hello");
            break;
        case 2:
            printf("Good morning");
            break;
        case 3:
            printf("Good night");
            break;
        case 4:
            printf("Goodbye");
            break;
        default:
            printf("What did you input?");
    }
}