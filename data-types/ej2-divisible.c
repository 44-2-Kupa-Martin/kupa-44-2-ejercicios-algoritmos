#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    long long unsigned int a = (unsigned)atoi(argv[1]);
    long long unsigned int b = (unsigned)atoi(argv[2]);
    printf("This program only takes positive integers!\n");
    printf("%zd %zd\n", a, b);
    if (a%b == 0 || b%a == 0) {
        printf("True");
    }
    return 0;
}

