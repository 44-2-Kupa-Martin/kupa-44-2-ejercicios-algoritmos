#include <stdio.h>
#include <stdlib.h>

int main (void) {
  printf("This program only takes numbers!\n");
  double hourlywage, hours;
  printf("Enter hourly wage\n");
  scanf("%lf", &hourlywage);
  printf("Enter worked hours\n");
  scanf("%lf", &hours);
  printf("Your salary is %lf\n", hourlywage * hours);
  return 0;
}
