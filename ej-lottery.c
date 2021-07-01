#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
  int num;
  printf("Enter a number\n");
  scanf("%d", &num);
  srand(time(NULL));
  int randnum= rand()%100;
  printf("%s\n", num== randnum ? "You won\n" : "You lose\n");
  return 0;
}
