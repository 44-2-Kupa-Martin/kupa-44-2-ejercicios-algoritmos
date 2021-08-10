#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n = atoi(argv[1]);
    int count = 1;
    int rows = 0;
    for (int column = 0; column < n; column++)
    {
        while (rows < n)
        {
            printf("*");
            rows++;
            if (rows < n)
            {
                printf(" ");
                rows++;
            }
            
        }
        printf("\n");
        rows = 0;
        count++;
        if (count % 2 == 0)
        {
            printf(" ");
            rows++;
        }
    }
    
    return 0;
}
