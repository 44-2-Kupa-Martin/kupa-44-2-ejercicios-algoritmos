#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int idays, years, months, weeks, days;
  printf("Enter number of days\n");
  scanf("%d", &idays);
  years= (int)(idays/365);
  idays= idays%365;
  months= (int)(idays/30);
  idays= idays%30;
  weeks= (int)(idays/7);
  idays= idays%7;
  days= idays;
  printf("years: %d\t months %d\t weeks %d\t days: %d\n", years, months, weeks, days);
  return 0;
}
