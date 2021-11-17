#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>

void _fibonacci(long long unsigned int *a, long long unsigned int *b, int *count) {
    if (*count == 0)
    {
        return;
    }
    long long unsigned int temp= *b;
    *b+= *a;
    *a= temp; 
    *count= *count - 1;
    _fibonacci(a, b, count);
    return;
}

long long unsigned int fibonacci(int count) {
    if (count < 0) return -1;
    count -= 2;
    long long unsigned int a= 0, b= 1;
    _fibonacci(&a, &b, &count);
    return b;
}

int main(void)
{
    printf("%lld\n", fibonacci(6));
    return 0;
}
