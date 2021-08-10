#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double t = atof(argv[1]);
    double p = atof(argv[2]);
    double rpercent = atof(argv[3]);
    double r = rpercent/100;
    double result = p*exp(r*t);
    printf("%f", result);
    return 0;
}
