#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]), b = atoi(argv[2]),
      c = atoi(argv[3]), d = atoi(argv[4]);
  int x, y;
  int w = 2, p = b * d;
  while (p / 10 != 0) {
    p /= 10;
    w++;
  }
  
  for (y = c-1; y <= d; y++) {
    if (y > c-1) {
      printf("%*d", w, y);
    } else {
      printf("%*s", w, "");
    }
    for (x = a; x <= b; x++) {
      if (y == c-1) {
        printf("%*d", w, x);
      } else {
        printf("%*d", w, x * y);
      }
    }
    printf("\n");
  }
  return 0;
}