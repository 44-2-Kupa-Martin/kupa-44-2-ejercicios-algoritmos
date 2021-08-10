#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double xi = atof(argv[1]);
    double vi = atof(argv[2]);
    double t = atof(argv[3]);
    double r = xi + vi*t + (9.807*(t*t)) / 2;
    printf("%f", r);
    return 0;
}
