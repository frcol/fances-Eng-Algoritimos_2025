#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Receber um número inteiro de 1 a 7 e exibir o dia da semana correspondente (1 = Domingo, 2 = Segunda, etc.).
Caso o número não esteja entre 1 e 7, mostrar “dia inválido”.
*/
int main() {
    system("cls");

    int dia;

    printf("Digite um numero de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("Domingo");
            break;
        case 2:
            printf("Segunda-feira");
            break;
        case 3:
            printf("Terça-feira");
            break;
        case 4:
            printf("Quarta-feira");
            break;
        case 5:
            printf("Quinta-feira");
            break;
        case 6:
            printf("Sexta-feira");
            break;
        case 7:
            printf("Sábado");
            break;
        default:
            printf("Dia inválido");
            break;
    }

    printf("\n\n");
    return 0;
}