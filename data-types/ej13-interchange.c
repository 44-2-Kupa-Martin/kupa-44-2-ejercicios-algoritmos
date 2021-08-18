#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

  int temp;
  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[2]);
  temp = num1;
  num1 = num2;
  num2 = temp;
  printf("%d %d\n", num1, num2);
  return 0;
}
