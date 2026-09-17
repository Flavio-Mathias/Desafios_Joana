#include <stdio.h>

int main() {
  float nota;
  float soma = 0.0;
  float media;
  int i;

  printf("Avaliação de Atendimento\n\n");

  // Le as notas dos 10 clientes

  for (i = 1; i <= 10; i++) {
    do {
      printf("Digite a nota do cliente %d (0 a 10): ", i);
      scanf("%f", &nota);

      // Validação simples para garantir nota entre 0 e 10

      if (nota < 0 || nota > 10) {
        printf("Nota inválida! Por favor, digite um valor entre 0 e 10.\n");
      }
    } while (nota < 0 || nota > 10);

    soma += nota;
  }

  // Cálculo da média geral

  media = soma / 10.0;

  printf("Média geral do atendimento: %.2f\n", media);

  // Alerta de desempenho

  if (media < 7.0) {
    printf("Alerta: A média do atendimento está abaixo do esperado!\n");
  } else {
    printf("O atendimento está dentro da meta!\n");
  }

  return 0;
}