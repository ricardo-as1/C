#include <stdio.h>
int main() {
  char letra;

  printf("Digite uma letra: ");
  scanf(" %c", &letra);

  letra = (letra >= 'a' && letra <= 'z') ? letra - ('a' - 'A') : letra;

  if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
      printf("A letra digitada é Vogal!\n");
  } else {
      printf("A letra digitada é Consoante!\n");
  }
  return 0;
}