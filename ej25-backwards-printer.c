#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char strnum[65535];
    printf("enter number\n");
    scanf("%s", strnum);
    size_t length = strlen(strnum);
    for (size_t i = length - 1; i >= 0; i--)
    {
        printf("%c", strnum[i]);
    }
    
    return 0;
}
