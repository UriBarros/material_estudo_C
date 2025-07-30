#include <stdio.h>

int main()
{

  int nota1, nota2, nota3;
  float media;

  printf("--\nNotas--\n");
  printf("Digite as 3 notas: \n");

  scanf("%d %d %d", &nota1, &nota2, &nota3);

  media = (nota1 + nota2 + nota3) / 3;

  printf("A média do aluno é: %.1f\n", media);

  return 0;
}