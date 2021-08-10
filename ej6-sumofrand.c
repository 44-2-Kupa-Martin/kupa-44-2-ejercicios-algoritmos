#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int reqnums = atoi(argv[1]);
    int i = 0;
    double sum = 0;
    int rng = 0;
    srand(time(NULL));
    while (i < reqnums)
    {
        rng = rand()%101;
        printf("%d\n", rng);
        sum = sum + rng;
        i++;
    }
    double avg = sum/reqnums;
    printf("Average= %f", avg);
    return 0;
}
