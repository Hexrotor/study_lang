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

    return 0;
}