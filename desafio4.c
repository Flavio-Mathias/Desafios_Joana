#include <stdio.h>

int main() {
  int passos_hora;
  int total_passos = 0;
  int horas = 0;
  const int META = 10000;

  printf("Acompanhamento da Meta de Passos\n\n");
  printf("Meta do dia: %d passos\n\n", META);

  while (total_passos < META) {
    horas++;

    printf("Digite a quantidade de passos dados na hora %d: ", horas);
    scanf("%d", &passos_hora);

    if (passos_hora < 0) {
      printf("Quantidade inválida! Digite um valor maior ou igual a zero.\n");
      horas--;
      continue;
    }

    total_passos += passos_hora;
    printf("Total acumulado até agora: %d passos\n\n", total_passos);
  }

  printf("Parabéns! Meta de %d passos atingida ou superada!\n", META);
  printf("Total acumulado: %d passos\n", total_passos);
  printf("Tempo necessário: %d hora(s)\n", horas);

  return 0;
}