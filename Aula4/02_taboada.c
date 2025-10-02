#include <stdio.h>
int main() {
  int numero;

  printf("Digite o número desejado para a taboada: ");
  scanf("%d", &numero);

  printf("Taboada do %d:\n", numero);

  for(int i = 1; i <= 10; i++) {
      printf("%d x %d = %d\n", numero, i, numero * i);
  }
  return 0;
}