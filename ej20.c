#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int n = 2;
    while (n <= 64)
    {
        printf("%f\t%d\t%f\t%d\t%d\t%f\n", log(n), n, n*log(n), n*n, n*n*n, pow(2.0, (double) n));
        n = n*2;
    }
    
    return 0;
}
