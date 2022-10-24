#include <stdio.h>
#include "fun.h"
double f(double a, double b)
{
	printf("It works.\n");
	return a>b?a:b;//If true return a
}
