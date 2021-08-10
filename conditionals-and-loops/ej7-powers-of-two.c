#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    double n = 1;
    while (n <= 64)
    {
        printf("%lf\t%.0lf\t%lf\t%.0lf\t%.0lf\t%.0lf\n", log(n), n, n*log(n), n*n, n*n*n, pow(2.0, n));
        n = n*2;
    }
    return 0;
}
