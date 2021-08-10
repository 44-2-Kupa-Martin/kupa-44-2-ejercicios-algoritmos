#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int z = atoi(argv[3]);
    if (x == y && y == z)
    {
        printf("Equals");
        exit(0);
    }
    printf("Not equals");
    return 0;
}
