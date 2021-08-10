#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int max = INT_MIN;
    int current = 0;
    for (int i = 1; i < argc; i++)
    {
        current = atoi(argv[i]);
        if (max < current)
        {
            max = current;
        }
    }
    printf("%d\n", max);
    return 0;
}