#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  if (argc > 2) {
    int i;
    int d = atoi(argv[1]);
    for (i = 2; i < argc; i++) {
      double x = atof(argv[i]);
      printf("sqrt(%.*f) = %.*f\n", d, x, d, sqrt(x));
    }
  }
  return 0;
}