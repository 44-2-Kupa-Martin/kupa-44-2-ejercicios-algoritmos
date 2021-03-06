#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
    if (a == 0)
    {
        printf("Cant divide by zero");
        return 0;
    }
    
    double discriminante = (b*b)+(-4*a*c);
    if (discriminante < 0)
    {
        printf("The equation has no real solution");
        return 0;
    }
    
    printf("Root 1 = %f\n", ((b*-1) / (2*a)) + (sqrt(discriminante) / (2*a)));
    printf("Root 2 = %f\n", ((b*-1) / (2*a)) - (sqrt(discriminante) / (2*a)));
    return 0;
}
