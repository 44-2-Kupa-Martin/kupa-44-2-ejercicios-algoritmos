#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double theta= atof(argv[1]);
    double thetarad= (theta * M_PI) / 180; //passing deg to rad
    double r = cos(thetarad) * cos(thetarad) + sin(thetarad) * sin(thetarad);
    double thetadeg= (r * 180) / M_PI; // passing rad to deg
    printf("%f deg", r);
    return 0;
}