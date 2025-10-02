#include <stdio.h>
int main() {
  int numero;

  while (numero >= 0) {
      printf("Por favor, digite um número positivo(ou um negativo para sair): ");
      scanf("%d", &numero);

      if (numero >= 0) {
      printf("O número digitado é positivo: %d\n", numero);
      } else if (numero <= 0) {
          printf("O número digitado é negativo: %d\n", numero);
      }

  }
  return 0;
}