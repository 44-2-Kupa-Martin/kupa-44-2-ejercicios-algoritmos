#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>

int main(void) {
    size_t n, a= 1;
    printf("Enter a number\n");
    scanf("%zu", &n);
    printf("1 ");
    for (size_t i = 1; i <= n; i++)
    {
        a = a*i;
        printf("%zu ", a);
    }
    return 0;
}