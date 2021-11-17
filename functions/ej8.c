#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>

size_t strlen(char *string) {
    size_t length= 0;
    while (*string != '\0')
    {
        length++;
        string++;
    }
    return length;
}

int main(void)
{
    printf("%zu", strlen("hello world"));
    return 0;
}
