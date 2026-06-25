#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int i, len;
  int v;

  if (argc < 2) return 1;

  len = strlen(argv[1]);
  v = 0;

  for (i = 0; i < len; i++) {
    v = v * 2 + (argv[1][i] - '0');
  }

  if (argv[1][0] == '1') {
    v -= 1 << len;
  }

  printf("%d\n", v);
  return 0;
}