#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int d= atoi(argv[1]);
    double r= 0;
    double v1[d], v2[d], r[d];
    for (int i = 0; i < d; i++)
    {
        printf("Enter %d coordinate of the 1st vector\n", i+1);
        scanf("%lf", &v1[i]);
    }
    for (int i = 0; i < d; i++)
    {
        printf("Enter %d coordinate of the 2st vector\n", i+1);
        scanf("%lf", &v2[i]);
    }
    for (int i = 0; i < d; i++)
    {
        r= r + v1[i] + v2[i];
    }
    printf("%f", r);
    return 0;
}
