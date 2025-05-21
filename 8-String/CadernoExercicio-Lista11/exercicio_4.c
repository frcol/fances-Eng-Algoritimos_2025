#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Crie  um programa que  recebe primeiramente um sobrenome e depois o nome de uma pessoa, ou seja, receba em diferentes cadeias de strings. 
Mostre o nome e sobrenome concatenando os nomes digitados. 
Retorne também  a  quantidade  de  caracteres  dessa  string  formada  pelo  nome completo. 
*/
int main() {
    system("cls");

    char sobrenome[20], nome[20], nomeCompleto[40];
    int tamanho;

    printf("Digite o sobrenome: ");
    gets(sobrenome);
    fflush(stdin);

    printf("Digite o nome: ");
    gets(nome);
    fflush(stdin);

    // Concatenando o sobrenome e o nome
    strcat(nome, " ");
    strcat(nome, sobrenome);

    // Calculando o tamanho da string
    tamanho = strlen(nome);

    printf("Nome completo: %s\n", nome);
    printf("Tamanho do nome completo: %d\n", tamanho);


    printf("\n\n");
    return 0;
}