#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
4.  Calcular a média de um aluno em um semestre com duas provas, onde M = (p1  + p2) / 2. Se  a média for maior ou  igual a 5 escreva “aprovado”, senão calcule e mostre quanto faltou para atingir 5. 
*/
int main() {
    system("cls");
    
    float p1, p2, m;

    printf("Digite a nota da primeira prova: ");
    scanf("%f", &p1);

    printf("Digite a nota da segunda prova: ");
    scanf("%f", &p2);

    m = (p1 + p2) / 2;

    if (m >= 5) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
        printf("Faltou %.2f para atingir 5\n", 5 - m);
    }
    printf("\n\n");
    return 0;
}