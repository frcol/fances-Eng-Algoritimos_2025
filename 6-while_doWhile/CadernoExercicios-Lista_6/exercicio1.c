#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
1.  Criar  um  programa  que  exibe  todos  os  números  pares  de  0  a  100 
utilizando while. 
*/
int main() {
    system("cls");
    
    int i = 0;

    printf("Numeros pares de 0 a 100:\n");
    while (i <= 100) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }

    printf("\n\n");
    return 0;
}