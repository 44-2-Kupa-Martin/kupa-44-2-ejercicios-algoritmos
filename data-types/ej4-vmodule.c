#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    printf("This program only takes integers!\n");
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    double d = sqrt(x * x + y * y);
    printf("%f", d);
    return 0;
}
