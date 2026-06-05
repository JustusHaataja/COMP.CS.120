#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int i, j, len, is_palindrome;
  char lower[100];

  for (i = 1; i < argc; i++) {
    /* Lowercase */
    for (j = 0; argv[i][j] != '\0'; j++) {
      lower[j] = tolower(argv[i][j]);
    }
    lower[j] = '\0';

    /* Compare from both ends */
    len = strlen(lower);
    is_palindrome = 1;
    for (j = 0; j < len / 2; j++) {
      if (lower[j] != lower[len - 1 - j]) {
        is_palindrome = 0;
        break;
      }
    }

    /* Compare */
    if (is_palindrome) {
      printf("\"%s\": on palindromi\n", argv[i]);
    } else {
      printf("\"%s\": ei ole palindromi\n", argv[i]);
    }
  }
  return 0;
}