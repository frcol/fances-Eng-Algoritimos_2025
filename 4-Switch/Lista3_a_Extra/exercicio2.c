#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Receber uma idade e informar em qual faixa etária a pessoa está:

Criança (0 a 12 anos)
Adolescente (13 a 17 anos)
Adulto (18 a 59 anos)
Idoso (60 anos ou mais)
*/
int main() {
    system("cls");

    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("\n");
    if (idade >= 0 && idade <= 12) {
        printf("Criança\n");
    } else if (idade >= 13 && idade <= 17) {
        printf("Adolescente\n");
    } else if (idade >= 18 && idade <= 59) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }

    printf("\n\n");
    return 0;
}