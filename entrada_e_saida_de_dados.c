
#include <stdio.h>

int main()
{
  int idade = 36;
  float altura = 1.89;
  double saldoBancario = 70000.00;
  char inicial = 'Y';
  char nome[20] = "Yuri";

  printf("Meu nome é %s\n", nome);
  printf("eu tenho: %d anos de idade\n", idade);
  printf("Saldo Bancário: %.2f reais\n", saldoBancario);
  printf("Inicial do Nome: %c\n", inicial);

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("A sua idade é: %d anos, ta acabado!\n", idade);

  printf("Digite sua altura:");
  scanf("%f", &altura);
  printf("A sua altura é: %f\n", altura);

  printf("Digite seu nome: ");
  scanf("%s", &nome);
  printf("Seu nome é: %s\n", nome);

  printf("Digite a letra inicial do seu nome: ");
  scanf(" %c", &inicial);
  printf("A letra inical é: %c\n", inicial);

  // %d: Imprime um inteiro no formato decimal.
  // %i: Equivalente a %d.
  // %f: Imprime um número de ponto flutuante no formato padrão.
  // %e: Imprime um número de ponto flutuante na notação científica.
  // %c: Imprime um único caractere.
  // %s: Imprime uma cadeia (string) de caracteres.
}