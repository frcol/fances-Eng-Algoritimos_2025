#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
14. A disciplina Algoritmos e Programação é dividida em duas partes: teoria e prática. 
Na teoria, são aplicadas duas provas (com nota de 0 a 10 cada) e na prática também. 
A nota final do semestre é composta pelas médias das provas de teoria e prática, mas a teoria tem peso de 60%, enquanto a prática tem peso de 40%. 
Receba as notas de um aluno em cada prova teórica e prática e mostre a nota final do semestre.
*/

int main() {
    system("cls");
    
    float notaTeoria1, notaTeoria2, notaPratica1, notaPratica2, mediaTeoria, mediaPratica, mediaFinal;

    printf("Digite a nota da primeira prova teorica: ");
    scanf("%f", &notaTeoria1);

    printf("Digite a nota da segunda prova teorica: ");
    scanf("%f", &notaTeoria2);

    printf("Digite a nota da primeira prova pratica: ");
    scanf("%f", &notaPratica1);

    printf("Digite a nota da segunda prova pratica: ");
    scanf("%f", &notaPratica2);

    mediaTeoria = (notaTeoria1 + notaTeoria2) / 2;
    mediaPratica = (notaPratica1 + notaPratica2) / 2;
    mediaFinal = (mediaTeoria * 0.6) + (mediaPratica * 0.4);

    printf("Media Teoria: %.2f\n", mediaTeoria);
    printf("Media Pratica: %.2f\n", mediaPratica);
    printf("Nota Final: %.2f\n", mediaFinal);

    printf("\n\n");
    return 0;
}