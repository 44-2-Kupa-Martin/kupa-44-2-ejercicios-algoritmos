#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int a = rand() % 6 + 1;
    clock_t starttimer = clock();
    while (clock() < starttimer + 1001){}
    int b = rand() % 6 + 1;
    printf("%d\n", a + b);
    return 0;
}
