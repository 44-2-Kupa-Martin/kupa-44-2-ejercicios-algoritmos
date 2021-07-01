#include <stdio.h>
#include <stdlib.h>

int main (void) {
  double x1, y1, z1;
  double x2, y2, z2;
  double xr, yr, zr;
  printf("Enter 1st vector's coordinates (x, y, z)\n");
  scanf("%lf %lf %lf", &x1, &y1, &z1);
  printf("Enter 2nd vector's coordinates (x, y, z)\n");
  scanf("%lf %lf %lf", &x2, &y2, &z2);
  xr= (y1*z2) - (z1*y2);
  yr= (z1*x2) - (x1*z2);
  zr= (x1*y2) - (y1*x2);
  printf("Result= %f %f %f\n", xr, yr, zr);
  return 0;
}
