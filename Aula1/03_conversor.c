#include <stdio.h>
int main()  {
  int M, C;
  printf("Digite o numero em metros: ");
  scanf("%d", &M);
  C = M * 100;
  printf("Resultado em centimetros: %d\n", C);
  return 0;
}