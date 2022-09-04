#include <stdio.h>

int main()
{
    int userInput = 0;
    printf("Please enter a number: ");
    scanf("%d",&userInput);

    int i = 2;
    for (;i<userInput;i++) {
        if(userInput % i == 0){
            //i = userInput; //To end the ForLoop.
            printf("%d is not a prime number.", userInput);
            break;
        }
    }
    if (i == userInput){ //If true, the break didn't work
        printf("%d is a prime number.", userInput);
    }
    
    return 0;
}