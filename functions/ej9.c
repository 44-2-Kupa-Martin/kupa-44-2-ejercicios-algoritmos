#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>

void swaparr(int *array) {
    int temp= array[0];
    array[0]= array[1];
    array[1]= temp;
    return;
}

int main(void)
{
    int array[]= {0, 1, 2, 3, 4, 5};
    swaparr(array);
    for (size_t i = 0; i < 6; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
