#include <stdio.h>
int main()  {
  float C, F;
  printf("Indique a temperatura em Celsius: ");
  scanf("%f", &C);
  F = (C * 9 / 5) + 32;
  printf("Temperatura em Fahrenheit: %.2f°F\n", F);
  return 0;
}