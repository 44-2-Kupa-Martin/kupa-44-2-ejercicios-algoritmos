#include <stdio.h>
#include <stdlib.h>

int main (void) {
  printf("This program only takes numbers!\n");
  double x1, y1;
  double x2, y2;
  double xr, yr;
  printf("Enter 1st vector's coordinates (x, y)\n");
  scanf("%lf %lf", &x1, &y1);
  printf("Enter 2nd vector's coordinates (x, y)\n");
  scanf("%lf %lf", &x2, &y2);
  xr= x1+x2;
  yr= y1+y2;
  printf("Result= %f %f\n", xr, yr);
  return 0;
}
