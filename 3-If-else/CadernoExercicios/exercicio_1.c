#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
1.  Receber um número e informar se ele é negativo ou não é negativo. 
    (Obs.: Zero não é negativo.)
*/
int main() {
    system("cls");

    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("O número %i \x82 negativo.\n", num);
    } else {
        printf("O número %i não \x82 negativo.\n", num);
    }

    printf("\n\n");
    return 0;
}