#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int minarr(int *array, size_t length) {
    long long int min= INT_MAX;
    for (size_t i = 0; i < length; i++)
    {
        if (*array < min)
        {
            min= *array;
        }
        array++;
    }
    return min;
}

int main(void)
{
    int array[]= {1, 2, 3, 4, 2};
    printf("%d\n", minarr(array, 5));
    return 0;
}
