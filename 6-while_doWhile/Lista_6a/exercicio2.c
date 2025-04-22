#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Peça ao usuário sua idade e classifique-a da seguinte forma: se for menor que 13, exiba "Criança"; se estiver entre 13 e 17, exiba "Adolescente"; se estiver entre 18 e 64, exiba "Adulto"; e se for 65 ou mais, exiba "Idoso".
*/
int main() {
    system("cls");

    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Classificacao: ");
    if (idade < 13) {
        printf("Crianca");
    } else if (idade >= 13 && idade <= 17) {
        printf("Adolescente");
    } else if (idade >= 18 && idade <= 64) {
        printf("Adulto");
    } else {
        printf("Idoso");
    }


    printf("\n\n");
    return 0;
}