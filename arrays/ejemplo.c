#include <stdio.h>
#include <string.h>
int main(void) {
  char *deck[40];
  deck[0] = "cuatro de copas";
  deck[1] = "";
  char str1[] = "cinco de ";
  char str2[] = "copas";
  char carta[30] = "";
  strcat(carta, str1);
  strcat(carta, str2);


  printf("%s\n", carta);
//strcat(str1, str2)
  // for (size_t i = 0; i < 40; i++) {
  //   printf("%s\n", deck[1]);
  // }
}
