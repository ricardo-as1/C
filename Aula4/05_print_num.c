#include <stdio.h>
int main() {
  int numero = 0;

  for(int numero = 0; numero <= 20; numero++) {
      printf("%d\n", numero);
  }
  for(int numero = 0; numero <= 20; numero++) {
      printf("%d, ", numero);
  }
  return 0;
}