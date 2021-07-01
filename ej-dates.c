#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int dd = atoi(argv[1]);
    int mm = atoi(argv[2]);
    if (dd == 0 || mm == 0) return 0;
    if (dd > 31)
    {
        return 0;
    }
    if (mm == 2)
    {
        if (dd > 29)
        {
            return 0;
        }
        
    }
    if (mm == 9)
    {
        if (dd > 30)
        {
            return 0;
        }
        
    }
    if (mm == 11)
    {
        if (dd > 30)
        {
            return 0;
        }
        
    }
    
    if (3 <= mm && mm <= 6)
    {
        if (3 == mm)
        {
            if (20 > dd)
            {
                printf("falso");
                return 0;
            }
            printf("verdadero");
            return 0;
        }
        if (mm == 4)
        {
            if (dd > 30)
            {
                return 0;
            }
            
        }
        
        if (6 == mm)
        {
            if (dd > 30)
            {
                return 0;
            }
            
            if (20 < dd)
            {
                printf("falso");
                return 0;
            }
            printf("verdadero");
            return 0;
        }
        printf("verdadero");
        return 0;
    }
    printf("falso");
    return 0;
}
