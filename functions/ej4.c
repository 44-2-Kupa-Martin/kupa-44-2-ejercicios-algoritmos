#include <stdio.h>

int is_triangle(int a, int b, int c) {
  return a+b > c && b+c > a && a+c > b ? 1 : 0;
}

int main(void) {
  printf(is_triangle(5, 5, 5) ? "It's a triangle\n" : "It's not a triangle\n");
  return 0;
}
