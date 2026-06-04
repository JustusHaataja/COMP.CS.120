#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc > 1) {
    int i;
    for (i = 1; i < argc; i++) {
      printf("%d: %s (pituus: %lu)\n", i, argv[i], strlen(argv[i]));
    }
  }
  return 0;
}