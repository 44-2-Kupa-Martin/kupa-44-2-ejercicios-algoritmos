#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i, b;
  printf("Enter first number\n");
  scanf("%d", &i);
  printf("Enter second number\n");
  scanf("%d", &b);
  while (i <= b) {
    if (i%3 == 0) printf("%d ", i);
    i++;
  }
  printf("\n");
  return 0;
}
