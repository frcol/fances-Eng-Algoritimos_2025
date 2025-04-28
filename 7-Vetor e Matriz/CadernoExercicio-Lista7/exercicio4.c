#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Receber 15 números e armazená-los em um vetor. Ao final, exibir o dobro 
de cada um dos números. 
*/
int main() {
    system("cls");

    int i, numeros[15];

    printf("Digite 15 numeros inteiros:\n");
    for (i = 0; i < 15; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    printf("\nO dobro dos numeros digitados:\n");

    for (i = 0; i < 15; i++) {
        printf("%d ", numeros[i]*2);
    }


    printf("\n\n");
    return 0;
}