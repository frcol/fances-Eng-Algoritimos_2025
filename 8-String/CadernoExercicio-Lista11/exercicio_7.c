#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Faça um programa que converta todas as letras de uma string em letras maiúsculas.  
Para  desenvolver  o  programa  pode-se  utilizar  uma  das seguintes  estratégias:  
1)  fazer  uso  das  funções  toupper(char)  e tolower(char)
2) utilizar a tabela ASCII, onde a diferença entre o valor do  mesmo  caractere  em  sua  forma  maiúscula  e  minúscula  possui a diferença de 32. Exemplo: A=65, Z=90 e a=97, z=122. 
*/
int main() {
    system("cls");

    char str[100];

    printf("Digite uma string: ");
    gets(str);
    fflush(stdin);
    printf("\nA string em maiusculo:\n");   

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Converte para maiúscula
        }
    }

    /* Exemplo usando toupper */
    // printf("\nUsando toupper:\n");
    // for (int i = 0; i < len; i++) {
    //     str[i] = toupper(str[i]);
    // }


    printf("%s", str);

    

    printf("\n\n");
    return 0;
}