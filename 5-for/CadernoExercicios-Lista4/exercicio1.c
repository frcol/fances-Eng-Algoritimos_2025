#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
1. Receber 10 números e mostrar o dobro de cada um deles (sem array).
*/
int main() {
    system("cls");
    
    int i, num;

    printf("\n\n-- Dobro de 10 números --\n\n");
    for (i = 1; i <= 10; i++) {
        printf("Digite o %iº número: ", i);
        scanf("%i", &num);
        printf("\nO dobro de %i é %i\n", num, num * 2);
    }

    printf("\n\n");
    return 0;
}