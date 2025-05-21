#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Receba um vetor de caracteres para guardar uma sequencia de 10 letras. 
Na  sequencia  exiba  as  6  primeiras  letras,  sendo  que  apenas  uma  letra deve ser apresentada por linha. 
*/
int main() {
    system("cls");

    char letras[11];
    int i;

    printf("Digite uma sequencia de 10 letras: ");
    gets(letras);
    fflush(stdin);

    printf("As 6 primeiras letras sao:\n");
    for (i = 0; i < 6; i++) {
        printf("%c\n", letras[i]);
    }


    printf("\n\n");
    return 0;
}