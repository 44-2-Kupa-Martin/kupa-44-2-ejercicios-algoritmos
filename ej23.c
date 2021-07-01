#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main(int argc, char const *argv[])
{
    int max = INT_MIN;
    int min = INT_MAX;
    int sum = 0;
    int current = 0;
    for (int i = 1; i < argc; i++)
    {
        current = atoi(argv[i]);
        sum= sum + current;
        if (max < current)
        {
            max = current;
        }
        if (current < min)
        {
            min = current;
        }
    }
    printf("Average = %f\n", sum / (double)(argc -1));
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);
    return 0;
}