#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float theta = atof(argv[1]);
    float thetarad = (theta * M_PI) / 180;
    float r = cos(thetarad) * cos(thetarad) + sin(thetarad) * sin(thetarad);
    printf("%f rad", r);
    return 0;
}