
#include <stdio.h>

int main()
{
  char prodA[30] = "Prod A";
  char prodB[30] = "Prod B";

  unsigned int estoqueA = 1000;
  unsigned int estoqueB = 2000;

  float valorA = 10.50;
  float valorB = 20.55;

  unsigned int estoqueMinA = 150;
  unsigned int estoqueMinB = 300;

  double valorTotalA, valorTotalB;

  int resultadoA, resultadoB;

  // exibir as informçoes dos produtos
  printf("O %s, tem estoque de %u e o valor unitario é de R$%.2f\n", prodA, estoqueA, valorA);
  printf("O %s, tem estoque de %u e o valor unitario é de R$%.2f\n", prodB, estoqueB, valorB);

  // comparacao com o valor minimo de estoque
  resultadoA = estoqueA > estoqueMinA;
  resultadoB = estoqueB > estoqueMinB;

  printf("O %s tem estoque minimo %d\n", prodA, resultadoA); // true
  printf("O %s tem estoque minimo %d\n", prodB, resultadoB); // true
}