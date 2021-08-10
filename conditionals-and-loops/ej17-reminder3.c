#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[]) {
  int num = atoi(argv[1]);
  for (int i = 1; i <= 100; i++) {
    if ((i%num)==3) {
      printf("%d\t", i);
    }
  }
  printf("\n");
  return 0;
}
