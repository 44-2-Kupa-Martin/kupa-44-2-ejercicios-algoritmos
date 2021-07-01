#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[]) {
  int num = atoi(argv[1]);
  for (size_t i = 1; i < 101; i++) {
    if ((((int)i)%num)==3) {
      printf("%d\t", i);
    }
  }
  printf("\n");
  return 0;
}
