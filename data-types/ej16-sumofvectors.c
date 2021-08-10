#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int x1, y1;
  int x2, y2;
  int xr, yr;
  printf("Enter 1st vector's coordinates (x, y)\n");
  scanf("%d %d", &x1, &y1);
  printf("Enter 2nd vector's coordinates (x, y)\n");
  scanf("%d %d", &x2, &y2);
  xr= x1+x2;
  yr= y1+y2;
  printf("Result= %d %d\n", xr, yr);
  return 0;
}
