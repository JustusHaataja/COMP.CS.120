#include <stdio.h>

int main() {
  int x, y;
  int count = 16;
  for (y = 0; y < count; y++) {
    if (y > 0) {
      printf("%4d", y);
    }
    
    for (x = 0; x < count; x++) {
      if (y == 0 && x == 0) {
        printf("   x");
      }
      if (x > 0 && y == 0) {
        printf("%4d", x);
      }
      if (x > 0 && y > 0) {
        printf("%4d", x * y);
      }
    }
    printf("\n");
  }
  return 0;
}