#include <stdio.h>
int main()  {
  float R, PI = 3.14, A;
  printf("Digite o raio do circulo: ");
  scanf("%f", &R);
  A = PI * R * R;
  printf("Area do circulo: %.2f\n", A);
  return 0;
}