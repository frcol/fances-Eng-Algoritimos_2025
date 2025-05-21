#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Escreva um programa que receba uma palavra que contenha no máximo 10  caracteres  e  no  mínimo  3.  
Caso  a  palavra  digitada  não  esteja  de acordo,  informe  a  quantidade  de  caracteres  digitados  e  leia  uma  nova palavra. 
*/
int main() {
    system("cls");

    char palavra[11];

    do {
        printf("Digite uma palavra (3 a 10 caracteres): ");
        gets(palavra);
        fflush(stdin);

        int tamanho = strlen(palavra);
        if (tamanho < 3 || tamanho > 10) {
            printf("Quantidade de caracteres digitados: %d\n", tamanho);
            printf("Palavra inválida! Tente novamente.\n");
        }
    } while (strlen(palavra) < 3 || strlen(palavra) > 10);

    printf("\n\n");
    return 0;
}