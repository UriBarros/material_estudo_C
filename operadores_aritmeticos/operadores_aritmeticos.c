
#include <stdio.h>

int main()
{
  int num1, num2;
  int soma, subtracao, multiplicacao, divisao;

  printf("informe um numero: ");
  scanf("%d", &num1);
  printf("informe outro numero: ");
  scanf("%d", &num2);

  soma = num1 + num2;
  subtracao = num1 - num2;
  multiplicacao = num1 * num2;
  divisao = num1 / num2;

  printf("\n--Abaixo são os resultados--\n");

  printf("A soma é igual a : %d\n", soma);
  printf("A subtração é igual a : %d\n", subtracao);
  printf("A multiplicação é igual a : %d\n", multiplicacao);
  printf("A divisão é igual a : %d\n", divisao);
}