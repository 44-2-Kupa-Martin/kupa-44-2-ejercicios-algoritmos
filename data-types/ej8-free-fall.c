#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("This program only takes numbers!\n");
    double xi = atof(argv[1]);
    double vi = atof(argv[2]);
    double t = atof(argv[3]);
    printf("%f", xi + vi*t + (9.807*(t*t)) / 2);
    return 0;
}
