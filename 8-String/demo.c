#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");

    //char nome[50] = {'F','a','b','i','o','\0'};
    //char nome[80] = "Fabio";
    //char nome2[] = "Fabio";

    //printf("Qual o seu nome: ");
    //scanf("%s", nome);
    //gets(nome);
    //fgets(nome, 11, stdin);
    //fflush(stdin);

    //printf("Ola %s, como vc esta?", nome);
    //puts(nome);

    char palavra1[80] = "FabXXXXX";
    char palavra2[80] = "Fabio";

    if (memcmp(palavra1, palavra2, 3) == 0) {
        printf("Igual");
    }
    else{
        printf("Diferente");
    }

    // int tam = strlen(palavra1);
    // printf("%i", tam);

    //strcpy(palavra2, palavra1);
    //memcpy(palavra2, palavra1, 3);

    // for (int i = 0; i < 80; i++) {
    //     palavra2[i] = palavra1[i];
    // }

    //puts(palavra2);

    printf("\n\n");
    return 0;
}