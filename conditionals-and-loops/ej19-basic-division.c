#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int a= atoi(argv[1]);
  int b= atoi(argv[2]);
  if (a%b != 0) {
    printf("Cannot divide these numbers\n");
  }
  return 0;
}
