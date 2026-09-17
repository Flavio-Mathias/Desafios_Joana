#include <stdio.h>

int main() {
  int opcao;
  float total = 0.0;

  printf("Cofrinho Digital\n\n");

  do {

    // As opções

    printf("Saldo atual: R$ %.2f\n", total);
    printf("Escolha uma opcao para adicionar no cofrinho:\n");
    printf("1 - Moeda de R$ 0,50\n");
    printf("2 - Moeda de R$ 1,00\n");
    printf("3 - Moeda de R$ 2,00\n");
    printf("0 - Encerrar e ver total acumulado\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    // Processamento da escolha

    switch (opcao) {
    case 1:
      total += 0.50;
      printf(">> Moeda de R$ 0,50 adicionada!\n\n");
      break;
    case 2:
      total += 1.00;
      printf(">> Moeda de R$ 1,00 adicionada!\n\n");
      break;
    case 3:
      total += 2.00;
      printf(">> Moeda de R$ 2,00 adicionada!\n\n");
      break;
    case 0:
      printf("\nEncerrando o cofrinho\n");
      break;
    default:
      printf(">> Opcao invalida! Tente novamente.\n\n");
      break;
    }

  } while (opcao != 0);

  // Resultado final

  printf("Total acumulado no cofrinho: R$ %.2f\n", total);

  return 0;
}