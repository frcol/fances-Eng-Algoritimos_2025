#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Programa que recebe a quantidade de maçãs compradas.
Se for menos que 12, cada maçã custa R$1.30.
Se for 12 ou mais, cada maçã custa R$1.00.
Calcular o total a pagar
*/
int main() {
    system("cls");

    int quantidade;
    float preco, total;

    printf("Digite a quantidade de macas compradas: ");
    scanf("%d", &quantidade);

    if (quantidade < 12) {
        preco = 1.30;
    } else {
        preco = 1.00;
    }

    total = quantidade * preco;

    printf("Preco por maca: R$%.2f\n", preco);
    printf("Total a pagar: R$%.2f\n", total);

    printf("\n\n");
    return 0;
}