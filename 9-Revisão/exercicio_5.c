#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Preencher automaticamente um vetor com todos os números pares entre 1 
e 100 e depois exibir os números para o usuário. 
*/
int main() {
    system("cls");

    int vetor[50], i, j = 0;
    printf("Preencher automaticamente um vetor com todos os números pares entre 1 e 100\n\n");
    printf("Vetor: \n\n");
    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            vetor[j] = i;
            j++;
        }
    }

    for (i = 0; i < j; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n\n");
    return 0;
}