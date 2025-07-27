
#include <stdio.h>

int main()
{
  int x = 5;
  float y = 5.0;
  char c = 'y';

  printf("x == y: %d\n", x == y);
  printf("x != y: %d\n", x != y);
  printf("x >= y: %d\n", x >= y);

  printf("x >= c: %d\n", x >= c);
  printf("O valor de ASCII de %c é %d: ", c, c);

  return 0;
}