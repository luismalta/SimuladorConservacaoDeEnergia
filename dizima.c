#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double x;
    x = (float)20/9;
    printf("%lf", x);
    x = ((int)(x*100));

    x= x/100;
    printf("\nnovo x: %lf", x);
}
