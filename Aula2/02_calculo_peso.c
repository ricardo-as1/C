#include <stdio.h>
int main()  {
  float H, kg;
  char sexo;

  printf("Informe sua altura em metros: ");
  scanf("%f", &H);

  printf("Informe seu sexo: ");
  scanf(" %c", &sexo);

  if (sexo == 'M' || sexo == 'm')
  {
    kg = (72.7 * H) - 58;
    printf("Peso ideal do homem é: %.2f\n", kg);
  }
  else if (sexo == 'F' || sexo == 'f')
  {
    kg = (62.1 * H) - 44.7;
    printf("Pesoal ideal da mulher é: %.2f\n", kg);
  }
  else
  {
    printf("Sexo inválido!\n");
  }

  return 0;
}