#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    bool r = a % b == 0 || b % a == 0;
    if (a < 0 || b < 0)
    {
        exit(0);
    }
    
    if (r == 1 ) {
        printf("Verdadero");
    }
    return 0;
}
