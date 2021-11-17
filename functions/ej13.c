#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <stdlib.h>

long long unsigned int factorial(int n) {
    long long unsigned int nfactorial= 1;
    for (size_t i = 1; i <= n; i++)
    {
        nfactorial*=i;
    }
    
    return nfactorial;
}

int main(void)
{
    printf("%lld", factorial(10));
    return 0;
}
