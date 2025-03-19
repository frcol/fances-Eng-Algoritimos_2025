#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
8.  Você assina um plano de 50 minutos no celular que custa R$ 50.00 por mês,  independente  de  utilizá-los  integralmente  ou  não.  Porém,  se  você utilizar mais do que 50 minutos, é cobrado mais R$ 1.50 por cada minuto que passar dos 50 do seu plano. Receber quantos minutos foram gastos no mês e calcular o valor da conta. 
*/
int main() {
    system("cls");
    
    float minutos, valorConta, extra;

    printf("Digite a quantidade de minutos gastos no mês: ");
    scanf("%f", &minutos);

    if (minutos <= 50) {
        valorConta = 50.00;
    } else {
        extra = (minutos - 50) * 1.50;
        valorConta = 50.00 + extra;
    }

    printf("O valor da conta é de R$ %.2f", valorConta);

    printf("\n\n");
    return 0;
}