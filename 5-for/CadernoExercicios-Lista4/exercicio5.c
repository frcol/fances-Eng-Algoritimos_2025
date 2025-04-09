#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
5. Implementar um programa que exibe todos os números pares contidos
entre 10 e 80.
*/
int main() {
    system("cls");
    
    int i;

    printf("\n\n-- Numeros pares entre 10 e 80 --\n\n");
    for (i = 10; i <= 80; i++) {
        if (i % 2 == 0) {
            printf("%i ", i);
        }
    }

    
    printf("\n\n");
    return 0;
}