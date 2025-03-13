#include<stdio.h>
#include<conio.h>
/*
Dado o preço do produto em reais, converta esse valor para
o equivalente em dólares. O programa deverá receber o valor
em reais e a taxa de conversão para dólar.
*/

int main()
{
    system("cls");

    float real, cotacao, dolar;

    printf("Digite o valor do produto e o valor do dolar hoje: ");	  
    scanf("%f %f",&real, &cotacao);

    dolar = real/cotacao;

    printf("R$ %.2f => US$ %.2f.", real, dolar);

    system("pause");

    return 0;
}

