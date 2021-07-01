#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int num;
  int sum= 0;
  for (size_t i = 1; i < 6; i++) {
    num= atoi(argv[i]);
    if ((num % 2)== 0) {
      sum= sum+num;
    }
  }
  printf("%d\n", sum);
  return 0;
}
