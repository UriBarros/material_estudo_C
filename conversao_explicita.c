
#include <stdio.h>

int main()
{
  int num = 10;
  float result = 10.1;

  int comparison = num == (int)result;

  printf("num == result: %d\n", comparison);

  return 0;
}