#include <stdio.h>
int main()  {
  float valorHora, horasPorDia, diasTrab, salarioMensal;

  printf("Informe quanto você ganha por hora: ");
  scanf("%f", &valorHora);

  printf("Quantas horas você trabalha por dia? ");
  scanf("%f", &horasPorDia);

  printf("Quantos dias você trabalha no mês? ");
  scanf("%f", &diasTrab);

  salarioMensal = valorHora * horasPorDia * diasTrab;

  printf("O seu salário no mês é: R$ %.2f \n", salarioMensal);

  return 0;
}