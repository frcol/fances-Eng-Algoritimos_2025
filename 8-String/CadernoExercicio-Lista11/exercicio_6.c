#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Escreva um programa que receba um conjunto de caracteres e mostre o seu inverso. 
Exemplo: texto recebido = matriz, texto inverso = zirtam. 
*/
int main() {
    system("cls");

    char str[100], inverted[100];
    int i, j, length;

    printf("Digite uma string: ");
    gets(str);
    fflush(stdin);

    length = strlen(str);

    // Invertendo a string
    for (i = 0; i < length; i++) {
        inverted[i] = str[length - 1 - i];
    }

    inverted[i] = '\0'; // finalizar a string inv
  
    printf("\nA frase invertida:\n%s\n\n", inverted);

    printf("\n\n");
    return 0;
}