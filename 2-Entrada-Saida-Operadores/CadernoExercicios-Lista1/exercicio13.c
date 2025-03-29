#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
13. Uma empresa contrata um encanador a R$ 35.00 por dia. 
Crie um programa que solicite o número de dias trabalhados pelo encanador e mostre o valor líquido a ser pago, sabendo que são descontados 8% de imposto de renda.
*/

int main() {
    system("cls");
    
    float salarioDia = 35.00;
    float imposto = 0.08;
    int diasTrabalhados;
    float salarioBruto, salarioLiquido;

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    salarioBruto = diasTrabalhados * salarioDia;
    salarioLiquido = salarioBruto - (salarioBruto * imposto);

    printf("\nSalario Bruto: R$ %.2f", salarioBruto);
    printf("\nSalario Liquido: R$ %.2f", salarioLiquido);

    printf("\n\n");
    return 0;
}