#include <stdio.h>

int main(void)
{
    int line1 = 996;
    int line2 = 997;
    int line3 = 998;
    int line4 = 999;
    int line5 = 1000;
    while (line5 < 1995)
    {
        line1 = line1 + 5;
        line2 = line2 + 5;
        line3 = line3 + 5;
        line4 = line4 + 5;
        line5 = line5 + 5;
        printf("%d\t%d\t%d\t%d\t%d\n", line1, line2, line3, line4, line5);
    }
    printf("1996\t1997\t1998\n");
    return 0;
}
