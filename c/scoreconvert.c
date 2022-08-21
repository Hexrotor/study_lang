#include <stdio.h>

int main()
{
    float score;
    int type = 0;
    printf("Please enter the score: ");
    scanf("%f", &score);

    type = score / 10;
    switch (type) {
        case 10:
        case 9:
        printf("A");
        break;
        
        case 8:
        printf("B");
        break;

        case 7:
        printf("C");
        break;

        default:
        printf("D");
        printf("\n%d %f", type, score);
    }
}