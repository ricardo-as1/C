#include <stdio.h>
int main() {
  int numero = 0;

  while (numero >= 0) {
      printf("Por favor, digite uma nota: ");
      scanf("%d", &numero);

      if (numero <= 10) {
      printf("O nota é válida!");
      } else {
          printf("O nota é inválida!");
      }
  }
  return 0;
}