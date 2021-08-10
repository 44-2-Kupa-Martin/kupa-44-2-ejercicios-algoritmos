#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    double d = sqrt(x * x + y * y);
    printf("%f", d);
    return 0;
}
