#include <stdio.h>
int main() {
  char sexo;

  printf("Digite 'F' ou 'f' para Feminino e 'M' ou 'm' para Masculino: ");
  scanf(" %c", &sexo);

  if (sexo == 'M' || sexo == 'm') {
      printf("Sexo Masculino!\n");
  } else if (sexo == 'F' || sexo == 'f') {
      printf("Sexo Feminino!\n");
  } else {
      printf("Sexo Inválido!\n");
  }
  return 0;
}