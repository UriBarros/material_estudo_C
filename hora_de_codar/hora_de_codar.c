
#include <stdio.h>

int main()
{
  int idade, matricula;
  float altura;
  char nome[50];

  printf("Qual é a sua idade: ");
  scanf("%d", &idade);

  printf("Qual seu nome: ");
  scanf("%s", nome);

  printf("Qual sua matrícula: ");
  scanf("%d", &matricula);

  printf("Nome do aluno: %s - Matrícula: %d\n", nome, matricula);
  printf("Idade do aluno: %d anos", idade);
}