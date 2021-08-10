#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y;
    printf("Enter x and y\n");
    scanf("%i %i", &x, &y);
    printf("Angle is %f", atan2(x, y));
    return 0;
}
