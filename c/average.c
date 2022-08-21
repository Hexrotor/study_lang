#include <stdio.h>

int main()
{
    int userInput = 0;
    int numberCount = 0;
    int total = 0;
    printf("Please enter a number: ");
    scanf("%d",&userInput);
    while (userInput != -1){
        numberCount++;
        total += userInput;
        printf("Please enter a number: ");
        scanf("%d", &userInput);
    }
    if (numberCount != 0){
        printf("Average number of input: %f", (float)total/numberCount);
        } else {
        printf("Error: Arithmetic exception");
        }
    return 0;
}