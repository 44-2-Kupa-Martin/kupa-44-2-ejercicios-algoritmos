#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    if (a<0 || b<0)
    {
        printf("This program only takes positive integers!\n");
        return 0;
    }
    printf("%d %d\n", a, b);
    if (a%b == 0 || b%a == 0) {
        printf("True");
    }
    return 0;
}

