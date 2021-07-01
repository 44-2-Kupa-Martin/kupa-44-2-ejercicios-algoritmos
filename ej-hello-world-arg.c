#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int quanta = atoi(argv[1]);
    int counter = 0;
    while (counter < quanta)
    {
        printf("Hola Mundo\n");
        counter++;
    }
    

    return 0;
}
