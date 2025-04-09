#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
6. Implementar um programa que exibe todos os números inteiros de 1 a
1000 em ordem inversa (1000, 999, 998, ..., 3, 2, 1).
*/
int main() {
    system("cls");
    
    int i;

    printf("\n\n-- Números de 1000 a 1 --\n\n");
    for (i = 1000; i >= 1; i--) {
        printf("%i ", i);
    }

    
    printf("\n\n");
    return 0;
}