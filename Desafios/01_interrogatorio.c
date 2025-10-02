// Faça um programa que faça 5 perguntas para uma pessoa sobre um crime.
// O programa no final deve emitir uma classificação sobre a participação da pessoa no crime.
// Se a pessoa responder positivamente a 5 questões, ela deve ser classificada como Assassino.
// Se responder positivamente a 3 ou 4, deve ser classificada como Cúmplice.
// Se responder positivamente a 2, deve ser classificada como Suspeita.
// Se responder 5 ou 1 com 'n', deve ser classificada como Inocente.

#include <stdio.h>
int main() {

    char p1, p2, p3, p4, p5;
    int respostas_positivas = 0;
    
    printf("Interrogatório:\n");
    
    printf("O(A) Senhor(a) telefonou para a vítima? ");
    scanf("%c", &p1);
    if (p1 == 's' || p1 == 'S') respostas_positivas++;
    getchar();
    
    printf("O(A) Senhor(a) esteve no local do crime? ");
    scanf("%c", &p2);
    if (p2 == 's' || p2 == 'S') respostas_positivas++;
    getchar();
    
    printf("O(A) Senhor(a) mora perto da vítima? ");
    scanf("%c", &p3);
    if (p3 == 's' || p3 == 'S') respostas_positivas++;
    getchar();
    
    printf("O(A) Senhor(a) devia para a vítima? ");
    scanf("%c", &p4);
    if (p4 == 's' || p4 == 'S') respostas_positivas++;
    getchar();
    
    printf("O(A) Senhor(a) já trabalhou com a vítima? ");
    scanf("%c", &p5);
    if (p5 == 's' || p5 == 'S') respostas_positivas++;
    getchar();
    
    if (respostas_positivas == 5) {
        printf("\nAssasino!");
    } else if(respostas_positivas >= 3) {
        printf("\nCúmplice!");
    } else if(respostas_positivas == 2) {
        printf("\nSuspeito!");
    } else {
        printf("\nInocente!");
    }
    
    return 0;
}
