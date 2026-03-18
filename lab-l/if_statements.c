#include <stdio.h>

int main(void) {
  int i, a, b;
  scanf("%d %d %d", &a, &b, &i);

  if (a != 0) {
    ++i;
  }

  if (a > 5) {
    if (a < 0) {
      ++i;
    } else {
      --i;
    }
  } else {
    if (b >= 1) {
      i++;
    } else {
      if (b == 0) {
        i--;
      } else {
        i++;
      }
    }
  }
  printf("i=%d\n", i);
  printf("a=%d\n", a);
  printf("b=%d\n", b);
  return 0;
};
