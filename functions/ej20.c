#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>

size_t findint(int query, int *array, size_t length) {
    for (size_t i = 0; i < length; i++)
    {
        if (array[i]==query)
        {
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int array[]= {5,2,6,4,8,3,1,1,9};
    printf("%d", array[findint(2, array, sizeof array / sizeof array[0])]);
    return 0;
}
