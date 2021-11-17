#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int maxarr(int *array, size_t length) {
    long long int max= INT_MIN;
    for (size_t i = 0; i < length; i++)
    {
        if (*array > max)
        {
            max= *array;
        }
        array++;
    }
    return max;
}

int main(void)
{
    int array[]= {1, 2, 3, 4, 2};
    printf("%d\n", maxarr(array, 5));
    return 0;
}
