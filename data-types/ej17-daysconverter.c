#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int ndays, years, months, weeks, days;
  printf("Enter number of days\n");
  scanf("%d", &ndays);
  years= (int)(ndays/365);
  ndays= ndays%365;
  months= (int)(ndays/30);
  ndays= ndays%30;
  weeks= (int)(ndays/7);
  ndays= ndays%7;
  days= ndays;
  printf("years: %d\t months %d\t weeks %d\t days: %d\n", years, months, weeks, days);
  return 0;
}
