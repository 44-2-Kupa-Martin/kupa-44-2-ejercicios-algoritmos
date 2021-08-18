#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{   
    srand(time(NULL));
    int rng= (rand()%80)+ 1;
    if (rng <= 10)
    {
        printf("1");
    }
    
    if (rng <= 20 && rng > 10)
    {
        printf("2");
    }

    if (rng <= 30 && rng > 20)
    {
        printf("3");
    }

    if (rng <= 40 && rng > 30)
    {
        printf("4");
    }

    if (rng <= 50 && rng > 40)
    {
        printf("5");
    }

    if (rng > 50 && rng <= 80)
    {
        printf("6");
    }
    return 0;
}
