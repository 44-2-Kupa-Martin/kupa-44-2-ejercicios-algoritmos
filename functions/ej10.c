#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>

void swap(int *a, int *b) {
    int temp= *a;
    *a= *b;
    *b= temp;
    return;
}

int main(void)
{
    int a= 5;
    int b= 6;
    swap(&a, &b);
    printf("%d, %d\n", a, b);
    return 0;
}
