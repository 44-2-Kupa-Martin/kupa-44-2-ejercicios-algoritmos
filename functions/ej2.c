#include <stdio.h>
#include <string.h>

void salute(char name[]) {
  char salute[100]= "Hi, ";
  strcat(salute, name);
  printf(salute);
  printf("\n");
  return;
}

int main(void) {
  salute("juan");
  return 0;
}
