#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int c = atoi(argv[3]);
    if (a < 0 || b < 0 || c < 0) {
        exit(0);
    }
    bool r = a >= b + c || b >= a + c || c >= a + c;
    if (r == 1 ) {
        printf("Falso");
        exit(0);
    }
    printf("Verdadero");
    return 0;
}
