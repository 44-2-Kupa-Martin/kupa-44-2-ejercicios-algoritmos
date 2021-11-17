#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int lower, int upper) {
    srand(time(NULL));
    return ((rand() % (upper - lower + 1)) + lower);
}

int main(void)
{
    printf("%d\n", random(1, 3));
    return 0;
}
