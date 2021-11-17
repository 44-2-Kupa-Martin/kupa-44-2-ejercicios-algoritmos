#define __USE_MINGW_ANSI_STDIO 1
#include <stdlib.h>
#include <stdio.h>

double *vectorproduct(double *v1, double *v2, size_t dimensions) {
    double *result= (double *)malloc(dimensions*sizeof(double));
    for (size_t i = 0; i < dimensions; i++)
    {
        result[i]= v1[i] * v2[i];
    }
    return result;
}

int main(void)
{
    double v1[]= {1, 2, 3};
    double v2[]= {4, 5, 6};
    double *result= vectorproduct(v1, v2, 3);
    for (size_t i = 0; i < 3; i++)
    {
        printf("%f ", result[i]);
    }
    printf("\n");
    free(result);
    return 0;
}
