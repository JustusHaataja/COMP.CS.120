#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bitit.h"


int main(int argc, char *argv[]) {
  if (argc < 2) return 1;
  int i, len;
  len = strlen(argv[1]);
  for (i = 0; i < len; i++) {
    scharBitit(argv[1][i]);
  }

  return 0;
}