#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>

long long unsigned int factorial(int n) {
    if (n <= 1)
    {
        return 1;
    }
    return n*factorial(n-1);
} 

int main(void)
{
    printf("%lld\n", factorial(5));
    return 0;
}
