#include <stdio.h>

int main() {
  int i;
  for (i = 0; i < 100; i++)
  {
    if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
    {
      if (i < 97)
      {
        printf("%d ", i);
      }
      else {
        printf("%d\n", i);
      }
    }
  }
  return 0;
}