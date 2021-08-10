#include <stdio.h>

int main (void) {
    printf("Enter the length of the sequence\n");
    int length, a= 1, b= 0, i= 0;
    scanf("%d", &length);
    while (i < length) {
        b= b + a;
        printf("%d ", b);
        i++;
        if (i < length)
        {
            a= a + b;
            printf("%d ", a);
            i++;
        }
    }
    return 0;
}