
#include <stdio.h>

int main()
{
  // Exemplo de Pós-incremento
  int a = 10;
  printf("1. Valor de 'a': %d\n", a); // Imprime 10

  // 'b' recebe o valor ATUAL de 'a' (10), e SÓ DEPOIS 'a' vira 11.
  int b = a++;

  printf("2. Valor de 'b' (que recebeu a++): %d\n", b); // Imprime 10
  printf("3. Valor final de 'a': %d\n", a);             // Imprime 11

  // Exemplo de Pré-incremento
  int c = 10;
  printf("1. Valor de 'c': %d\n", c); // Imprime 10

  // 'c' primeiro vira 11, e SÓ DEPOIS 'd' recebe o NOVO valor de 'c'.
  int d = ++c;

  printf("2. Valor de 'd' (que recebeu ++c): %d\n", d); // Imprime 11
  printf("3. Valor final de 'c': %d\n", c);             // Imprime 11

  // Exemplo de Pós-decremento
  int e = 10;
  printf("1. Valor de 'e': %d\n", e); // Imprime 10

  // 'f' recebe o valor ATUAL de 'e' (10), e SÓ DEPOIS 'e' vira 9.
  int f = e--;

  printf("2. Valor de 'f' (que recebeu e--): %d\n", f); // Imprime 10
  printf("3. Valor final de 'e': %d\n", e);             // Imprime 9

  // Exemplo de Pré-decremento
  int g = 10;
  printf("1. Valor de 'g': %d\n", g); // Imprime 10

  // 'g' primeiro vira 9, e SÓ DEPOIS 'h' recebe o NOVO valor de 'g'.
  int h = --g;

  printf("2. Valor de 'h' (que recebeu --g): %d\n", h); // Imprime 9
  printf("3. Valor final de 'g': %d\n", g);             // Imprime 9

  return 0;
}