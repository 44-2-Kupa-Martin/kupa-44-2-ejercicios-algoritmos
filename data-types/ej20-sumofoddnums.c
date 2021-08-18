#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  printf("This program only takes numbers!\n");
  int num1;
  int num2;
  int num3;
  int num4;
  int num5;
  int sum= 0;
  printf("Enter 5 integers\n");
  scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
  if (!num1 % 2 == 0) {
    sum + num1;
  }
  if (!num2 % 2 == 0) {
    sum + num2;
  }
  if (!num3 % 2 == 0) {
    sum + num3;
  }
  if (!num4 % 2 == 0) {
    sum + num4;
  }
  if (!num5 % 2 == 0) {
    sum + num5;
  }
  printf("%d\n", sum);
  return 0;
}
