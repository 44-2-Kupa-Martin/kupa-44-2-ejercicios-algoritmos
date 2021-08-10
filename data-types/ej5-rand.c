#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int lower = atoi(argv[1]);
    int upper = atoi(argv[2]);
    if (lower > upper)
    {
        upper = atoi(argv[1]);
        lower = atoi(argv[2]);
    }
    int rng = ((rand() % (upper - lower + 1)) + lower);
    printf("%d\n", rng);
    return 0;
}
