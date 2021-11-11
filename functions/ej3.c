#include <stdio.h>

int equals(int a, int b, int c) {
  return a == b && b == c ? 1 : 0;
}

int main(void) {
  printf(equals(5, 5, 4) ? "Equals\n" : "Not equals\n");
  return 0;
}
