#include <stdio.h>
int main() {
  int numero;

  for(int numero = 1; numero <= 50; numero++) {
      if (numero % 2 != 0) {
      printf("%d\n", numero);
      }
  }
  return 0;
}