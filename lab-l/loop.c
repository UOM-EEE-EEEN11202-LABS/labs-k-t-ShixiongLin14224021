#include "stdio.h"
int main(void) {
  int k = 1;
  do {
    printf("%d\n", k);
    k *= 2;
  } while (k < 1024);
}