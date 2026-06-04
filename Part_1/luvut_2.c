#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc > 2) {
    int i, j;
    int start = atoi(argv[1]);
    int end = atoi(argv[2]);
    int first = 1;
    
    for (i = start; i <= end; i++) {
      int divisible = 0;
      for (j = 3; j < argc; j++) {
        int divisor = atoi(argv[j]);
        if (divisor == 1){return 0;}
        if (i % divisor == 0) {
          divisible = 1;
          break;
        }
      }
      if (!divisible) {
        if (first) {
          printf("%d", i);
          first = 0;
        } else {
          printf(" %d", i);
        }
      }
    }
  }
  printf("\n");
  return 0;
}