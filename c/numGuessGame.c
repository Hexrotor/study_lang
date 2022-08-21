#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int num = rand() % 100 + 1;
    int guess = 0;
    int count = 0;

    printf("I have generated a random number between 1~100, guess it!\n");

    while (guess != num) {
        printf("Please enter a number: ");
        scanf("%d", &guess);
        count++;
        if (guess > num){
            printf("Your input is greater than the number!\n");
        }
        if (guess < num){
            printf("Your input is less than the number!\n");
        }
    }

    switch (count) {
        case 1:
        printf("Cool, you got it in the 1st time.");
        break;

        case 2:
        printf("Cool, you got it in the 2nd time.");
        break;

        case 3:
        printf("Cool, you got it in the 3rd time.");
        break;
        
        default:
        printf("Cool, you got it in the %dth time.", count);
    }
    

    return 0;
}