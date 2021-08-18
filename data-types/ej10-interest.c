#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double t = atof(argv[1]);
    double p = atof(argv[2]);
    double rpercent = atof(argv[3]);
    printf("%f", p*exp((rpercent/100)*t));
    return 0;
}
