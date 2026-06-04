#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
  double a = atof(argv[1]), b = atof(argv[2]), c = atof(argv[3]);
  double d = b * b - 4 * a * c;
  double x1, x2;
  
  if (d < 0) {
    printf("Ei ratkaisua\n");
  } 
  if (d == 0) {
    x1 = -b / (2 * a);
    printf("%.3f\n", x1);
  } 
  if (d > 0) {
    x1 = (-b - sqrt(d)) / (2 * a);
    x2 = (-b + sqrt(d)) / (2 * a);
    printf("%.3f %.3f\n", x1, x2);
  }

  return 0;
}