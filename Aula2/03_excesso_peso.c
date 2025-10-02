#include <stdio.h>
int main() {
  float peso, excesso, multa;

  printf("Informe o peso dos peixes(em quilos): ");
  scanf("%f", &peso);

  if (peso > 50) {
      excesso = peso - 50;
      multa = excesso * 4.0;
      printf("Excesso de peso: %.2f quilos\n", excesso);
      printf("Multa a ser paga: %.2f$\n", multa);
  } else {
      printf("Não há excesso de peso. Nenhuma multa será aplicada!");
  }

  return 0;
}