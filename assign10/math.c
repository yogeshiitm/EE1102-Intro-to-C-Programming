#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    double result;
    x = 2.3;
    result = sin(x);
    printf("sin(%.2lf) = %.2lf\n", x, result);
    x = -2.3;
    result = sin(x);
    printf("sin(%.2lf) = %.2lf\n", x, result);
    x = 0;
    result = sin(x);
    printf("sin(%.2lf) = %.2lf\n", x, result);
    return 0;
}

//note in compiler cc math.c -lm
