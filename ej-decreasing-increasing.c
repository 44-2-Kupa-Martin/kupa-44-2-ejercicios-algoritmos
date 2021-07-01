#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int z = atoi(argv[3]);

    if ((x < y && y < z) || (z < y && y < x))
    {
        printf("True");
        return 0;
    }
    printf("False");
    return 0;
}
