#include <stdio.h>
int main()  {
    float L, A;
    printf("Digite o valor do lado de um quadrado: ");
    scanf("%f", &L);
    A = L * L;
    printf("Area do quadrado: %.2f\n", A);
    return 0;
}