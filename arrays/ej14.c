#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *type[4]= {"copas", "basto", "espada", "oro"};
    char *number[10]= {"Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Diez", "Once", "Doce"};
    char *deck[40];
    for (size_t i = 0; i < 40; i++)
    {
        deck[i]= {'\0'};
    }
    int deckIndex= 0;
    int typeIndex= 0;
    for (size_t i = 0; i < 10; i++)
    {
        strcat(deck[deckIndex], number[i]);
        strcat(deck[deckIndex], " de ");
        strcat(deck[deckIndex], type[typeIndex]);
        strcat(deck[deckIndex], "\n");
        deckIndex++;
        if (i==9 && typeIndex != 3) {
            i= 0;
            typeIndex++;
        }
    }
    for (size_t i = 0; i < 40; i++)
    {
        printf(deck[i]);
    }
    
    
    return 0;
}
