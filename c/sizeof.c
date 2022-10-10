/*
The number one's size is 4
The size of int is 4
The size of short int is 2
The size of long int is 4
The size of long long int is 8
The size of word C is 1
The size of char is 1
The size of data 3.14 is 4
The size of float is 4
The size of double is 8
The size of long double is 16
The sizeof _Bool is 1
*/
#include <stdio.h>

int main()
{
    int i = 1;
    char word = 'C';
    float pi = 3.14;
    
    printf("The number one's size is %d\n", sizeof(i));
    printf("The size of int is %d\n", sizeof(int));
    printf("The size of short int is %d\n", sizeof(short));
    printf("The size of long int is %d\n", sizeof(long));
    printf("The size of long long int is %d\n", sizeof(long long));
    printf("The size of word C is %d\n", sizeof(word));
    printf("The size of char is %d\n", sizeof(char));
    printf("The size of data 3.14 is %d\n", sizeof(pi));
    printf("The size of float is %d\n", sizeof(float));
    printf("The size of double is %d\n", sizeof(double));
    printf("The size of long double is %d\n", sizeof(long double));
    printf("The sizeof _Bool is %d\n", sizeof(_Bool));

    return 0;
}