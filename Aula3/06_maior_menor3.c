#include <stdio.h>
int main() {
  int n1, n2, n3, maior, menor;

  printf("Digite o primeiro número: ");
  scanf("%d", &n1);

  printf("Digite o segundo número: ");
  scanf("%d", &n2);

  printf("Digite o terceiro número: ");
  scanf("%d", &n3);

  if (n1 >= n2 && n1 >= n3) {
      maior = n1;
  } else if (n2 >= n1 && n2 >= n3) {
      maior = n2;
  } else {
      maior = n3;
  }

  if (n1 <= n2 && n1 <= n3) {
      menor = n1;
  } else if (n2 <= n1 && n2 <= n3) {
      menor = n2;
  } else {
      menor = n3;
  }

  printf("O maior número é: %d\n", maior);
  printf("O menor número é: %d\n", menor);
  return 0;
}