#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
2.  Criar  um  programa  que  exibe  todos  os  números  ímpares  de  0  a  100 
utilizando do-while.
*/
int main() {
    system("cls");
    
    int i = 1; // Começa em 1, pois queremos os ímpares

    do {
        printf("%d ", i);
        i += 2; // Incrementa de 2 em 2 para obter os ímpares
    } while (i <= 100); // Continua enquanto i for menor ou igual a 100

    printf("\n\n");
    return 0;
}