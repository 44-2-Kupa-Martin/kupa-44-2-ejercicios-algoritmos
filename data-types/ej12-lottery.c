#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
  int num;
  printf("Enter a number between 0 and 99\n");
  scanf("%d", &num);
  while (!(num >= 0 && num <= 99))
  {
    printf("Invalid input\nNumber must be in the interval [0; 99]\n");
    scanf("%d", &num);
  }
  
  srand(time(NULL));
  int randnum= rand()%100;
  printf("%s\n", num== randnum ? "You won\n" : "You lose\n");
  return 0;
}
