#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
7. Para 30 alunos da turma de Algoritmos e Programação, receber a média
de teoria e a média de laboratório, calcular a média final (final = teoria *
0.6 + laboratório * 0.4) e informar se cada um foi bem (final >= 7), razoável
(5 <= final < 7) ou mal (final < 5). 
Sem array
*/
int main() {
    system("cls");

    int i;
    float mediaTeoria, mediaLaboratorio, mediaFinal;
    
    for (i = 1; i <= 30; i++) {
        printf("Aluno %d:\n", i);
        printf("Digite a média de teoria: ");
        scanf("%f", &mediaTeoria);
        printf("Digite a média de laboratório: ");
        scanf("%f", &mediaLaboratorio);

        mediaFinal = mediaTeoria * 0.6 + mediaLaboratorio * 0.4;

        if (mediaFinal >= 7) {
            printf("Aluno %d foi bem (média final: %.2f)\n", i, mediaFinal);
        } else if (mediaFinal >= 5) {
            printf("Aluno %d foi razoável (média final: %.2f)\n", i, mediaFinal);
        } else {
            printf("Aluno %d foi mal (média final: %.2f)\n", i, mediaFinal);
        }
        printf("\n");
    }
    
    printf("\n\n");
    return 0;
}