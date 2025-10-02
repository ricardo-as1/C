#include <stdio.h>
int main() {
  int soma = 0, numero;

  for (int i = 1; i <= 5; i++) {
      printf("Digite o %dº número: ", i);
      scanf("%d", &numero);
      soma += numero;
  }
  printf("A soma dos 5 números é: %d\n", soma);
  return 0;
}