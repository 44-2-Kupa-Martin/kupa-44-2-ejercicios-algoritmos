#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int money, bill1000, bill500, bill200, bill100, bill50, bill20, bill10;
  printf("Enter the amount of money\n");
  scanf("%d", &money);
  bill1000= (int)(money/1000);
  money= money%1000;
  bill500= (int)(money/500);
  money= money%500;
  bill200= (int)(money/200);
  money= money%200;
  bill100= (int)(money/100);
  money= money%100;
  bill50= (int)(money/50);
  money= money%50;
  bill20= (int)(money/20);
  money= money%20;
  bill10= (int)(money/10);
  money= money%10;
  printf("1000: %d\t 500: %d\t 200: %d\t 100: %d\t 50: %d\t 20: %d\t 10: %d\n", bill1000, bill500, bill200, bill100, bill50, bill20, bill10);
  return 0;
}
