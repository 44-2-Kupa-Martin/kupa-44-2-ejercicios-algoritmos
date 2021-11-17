#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>

double expof2(int n) {
    int absn= abs(n);
    double result= 1;
    for (size_t i = 0; i < absn; i++)
    {
        result*=2;
    }
    if (n<0)
    {
        return 1/result;
    }
    return result;
} 
int main(void)
{
    printf("%f\n", expof2(-2));
    return 0;
}
