#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Receber o valor de um produto e aplicar um desconto com base no seguinte critério:
Até R$100,00 → 5% de desconto
De R$100,01 até R$500,00 → 10% de desconto
Acima de R$500,00 → 15% de desconto
👉 Exibir o valor com desconto aplicado.
*/
int main() {
    system("cls");

    float valor, desconto, valor_final;
    int faixa_desconto;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("\n");

    if (valor <= 100) {
        desconto = valor * 0.05;
    } else if (valor <= 500) {
        desconto = valor * 0.10;
    } else {
        desconto = valor * 0.15;
    }

    valor_final = valor - desconto;

    printf("Valor do produto: R$%.2f\n", valor);
    printf("Desconto aplicado: R$%.2f\n", desconto);
    printf("Valor com desconto: R$%.2f\n", valor_final);

    printf("\n\n");
    return 0;
}