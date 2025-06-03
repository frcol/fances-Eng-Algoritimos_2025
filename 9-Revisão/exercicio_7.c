#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
8. Desenvolver um programa que recebe a quantidade de alunos que estão
cursando o 3o semestre. Para cada aluno receber a quantidade de
disciplinas que cursou no 2o semestre e também a nota final relativa a
cada disciplina. Calcular e mostrar a média de cada aluno para verificar o
aproveitamento do último semestre cursado.
usando vetor ou matriz
*/
int main() {
    system("cls");

    int numAlunos, numDisciplinas;
    printf("Digite a quantidade de alunos cursando o 3o semestre: ");
    scanf("%d", &numAlunos);

    float notas[numAlunos][10]; // Supondo no máximo 10 disciplinas por aluno
    float medias[numAlunos];

    for (int i = 0; i < numAlunos; i++) {
        printf("Digite a quantidade de disciplinas cursadas pelo aluno %d: ", i + 1);
        scanf("%d", &numDisciplinas);

        float somaNotas = 0.0;
        for (int j = 0; j < numDisciplinas; j++) {
            printf("Digite a nota da disciplina %d: ", j + 1);
            scanf("%f", &notas[i][j]);
            somaNotas += notas[i][j];
        }
        medias[i] = somaNotas / numDisciplinas;
    }

    printf("\nMedias dos alunos:\n");
    for (int i = 0; i < numAlunos; i++) {
        printf("Aluno %d: Media = %.2f\n", i + 1, medias[i]);

        if (medias[i] >= 7.0) {
            printf("Aluno %d: Aprovado", i + 1);
        } else if (medias[i] >= 5.0) {
            printf("Aluno %d: Em recuperação", i + 1);
        } else {
            printf("Aluno %d: Reprovado", i + 1);
        }
    }

    printf("\n\n");
    return 0;
}