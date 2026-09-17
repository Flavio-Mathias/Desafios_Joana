#include <stdio.h>

int main() {

  float consumo[5];
  float soma = 0.0;
  float media;
  int i;

  printf("Monitoramento de Consumo de Água\n\n");

  // Leitura do consumo dos 5 moradores

  for (i = 0; i < 5; i++) {
    printf("Digite o consumo do morador %d (em m3): ", i + 1);
    scanf("%f", &consumo[i]);
  }
  printf("\nRelatório Individual\n");

  // Vai verificar cada um dos 5 moradores

  for (i = 0; i < 5; i++) {
    if (consumo[i] <= 20.0) {
      printf("Morador %d: %.2f m³ - Dentro da média\n", i + 1, consumo[i]);
    } else {
      printf("Morador %d: %.2f m³ - Acima da média\n", i + 1, consumo[i]);
    }
  }

  // Cálculo e exibição da média geral

  media = soma / 5.0;
  printf("\nConsumo Médio Geral\n");
  printf("Média geral do condomínio: %.2f m³\n", media);

  return 0;
}
