#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    if (a < 0 || b < 0 || c < 0) {
        printf("This program only takes positive integers!\n");
        return 0;
    }
    (a >= (b + c)) || (b >= (a + c)) || (c >= (a + c)) ? printf("False") : printf("True");
    return 0;
}
