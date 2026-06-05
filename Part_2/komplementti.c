#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(int argc, char *argv[]) {
  if (argc < 2) return 1;

  int i, len;
  double v;
  len = strlen(argv[1]);

  if (argv[1][0] == '1') {
    v = - pow(2, len-1);
  } else {
    v = 0;
  }

  for (i = len-1; i > 0; i--) {
    if (argv[1][0] == '1') {
      if (argv[1][i] == '1') {
        v += pow(2, len-i-1);
      }
    }
    else {
      if (argv[1][i] == '1') {
        v += pow(2, i-1);
      }
    }
  }
  printf("%d\n", (int)v);
  return 0;
}