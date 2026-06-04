#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc > 14) {
    int w[7], p[7], s[7];
    int i, j, count = 0;

    printf("Voittorivi:");
    for (i = 0; i < 7; i++) {
      w[i] = atoi(argv[i+1]);
      printf(" %d", w[i]);
    }

    printf("\nLottorivi:");
    for (i = 0; i < 7; i++) {
      p[i] = atoi(argv[i+8]);
      printf(" %d", p[i]);
    }
    printf("\n");

    for (j = 0; j < 7; j++) {
      for (i = 0; i < 7; i++) {
        if (p[j] == w[i]) {
          s[count] = p[j];
          count++;
          break;
        }
      } 
    }
    if (count > 1) {
      printf("%d oikein:", count);
      for (i = 0; i < count; i++) {
        printf(" %d", s[i]);
      }
      printf("\n");
    } else {
      printf("Ei yhtään oikein!\n");
    }
  }
  return 0;
}