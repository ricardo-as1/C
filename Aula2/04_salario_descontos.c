#include <stdio.h>
int main() {
  float valorHora, hrTrab, valorLiq, salarioBruto, sindicato, IR, INSS;

  printf("Quanto você ganha por hora: ");
  scanf("%f", &valorHora);

  printf("Número de horas trabalhadas: ");
  scanf("%f", &hrTrab);

  salarioBruto = valorHora * hrTrab;
  IR = salarioBruto * 0.11;
  INSS = salarioBruto * 0.08;
  sindicato = salarioBruto * 0.05;
  valorLiq = salarioBruto - ( IR + INSS + sindicato );
  
  printf("\nSalário Bruto     : R$%.2f\n", salarioBruto);
  printf("IR                : R$%.2f\n", IR);
  printf("INSS              : R$%.2f\n", INSS);
  printf("Sindicato         : R$%.2f\n", sindicato);
  printf("Valor Liquido     : R$%.2f\n", valorLiq);

  return 0;
}