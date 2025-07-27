#include <stdio.h>

int main()
{
  // Começamos com um valor inicial.
  int valor = 100;
  printf("Valor inicial: %d\n", valor);
  printf("----------------------------------\n");

  // SOMA E ATRIBUI (+=)
  // Isso é o mesmo que: valor = valor + 20;
  valor += 20;
  printf("Após += 20, o valor é: %d\n", valor);

  // SUBTRAI E ATRIBUI (-=)
  // Isso é o mesmo que: valor = valor - 40;
  valor -= 40;
  printf("Após -= 40, o valor é: %d\n", valor);

  // MULTIPLICA E ATRIBUI (*=)
  // Isso é o mesmo que: valor = valor * 3;
  valor *= 3;
  printf("Após *= 3, o valor é:  %d\n", valor);

  // DIVIDE E ATRIBUI (/=)
  // Isso é o mesmo que: valor = valor / 6;
  // Lembre-se que a divisão de inteiros descarta o resto.
  valor /= 6;
  printf("Após /= 6, o valor é:  %d\n", valor);

  // MÓDULO E ATRIBUI (%=)
  // Isso é o mesmo que: valor = valor % 7;
  // Pega o resto da divisão do valor atual por 7.
  valor %= 7;
  printf("Após %%= 7, o valor é:   %d (resto da divisão de 40 por 7)\n", valor);

  return 0;
}