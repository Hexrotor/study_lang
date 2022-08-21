#include <stdio.h>

int main()
{
    //Factorial calculation
    int userInput = 0;
    int result = 1;
    printf("Please enter a number: ");
    scanf("%d", &userInput);

    for (userInput == userInput; userInput > 0; userInput--){
        result *= userInput;
    }
    printf("%d",result);
    return 0;
}