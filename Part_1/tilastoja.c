#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  double *a = malloc((argc) * sizeof(double));
  int *count = malloc((argc) * sizeof(int));
  int *seen = malloc((argc) * sizeof(int));
  
  double s = atof(argv[1]), b = atof(argv[1]);
  int i, j, cnt, has_unique, max_count;

  for (i = 1; i < argc; i++) {
    a[i] = atof(argv[i]);
    count[i] = 0;
    seen[i] = 0;

    /* Find smallest and biggest */
    if (a[i] < s) s = a[i];
    if (a[i] > b) b = a[i];
  }
  
  printf("Pienin: %f\nSuurin: %f\n", s, b);

  /* Count occurances of each unique number */
  for (i = 1; i < argc; i++) {
    if (seen[i]) continue;

    cnt = 0;
    for (j = 1; j < argc; j++) {
      if (a[i] == a[j]) {
        cnt++;
        seen[j] = 1;
      }
    }
    count[i] = cnt;
  }
  
  /* Print all unique numbers */
  has_unique = 0;
  for (i = 1; i < argc; i++) {
    if (count[i] == 1) {
      has_unique = 1;
      break;
    }
  }
  if (has_unique) {
    printf("Ainutlaatuiset:");
    for (i = 1; i < argc; i++) {
      if (count[i] == 1) {
        printf(" %f", a[i]);
      }
    }
    printf("\n");
  }

  /* Find maximum count */
  max_count = 0;
  for (i = 1; i < argc; i++) {
    if (count[i] > max_count) {
      max_count = count[i];
    }
  }

  /* Print all numbers with max count */
  if (max_count > 1) {
    printf("Useimmiten esiintyneet (%d kertaa):", max_count);
    for (i = 1; i < argc; i++) {
      if (count[i] > 1 && count[i] == max_count) {
        printf(" %f", a[i]);
      }
    }
    printf("\n");
  }
  
  free(a);
  free(count);
  free(seen);
  return 0;
}