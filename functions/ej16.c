#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int ispalindrome(char *string) {
    size_t length= strlen(string);
    int palindrome= 1;
    for (size_t i = 0; i < length; i++)
    {
        if (string[i] != string[(length-1)-i]) {
            palindrome= 0;
            break;
        }
    }
    return palindrome;
}

int main(void)
{
    printf("%d\n", ispalindrome("lolo"));
    return 0;
}
