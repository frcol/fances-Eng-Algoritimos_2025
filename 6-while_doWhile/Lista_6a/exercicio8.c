#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Solicite ao usuário a quantidade de horas normais (R$20,00 por hora) e horas extras (R$30,00 por hora) trabalhadas no mês. 
Calcule e exiba o salário total. 
Se o salário for superior a R$2000, exiba "Salário acima da média", caso contrário, exiba "Salário dentro da média".
*/
int main() {
    system("cls");


    float horasNormais, horasExtras, salarioTotal;

    printf("Digite a quantidade de horas normais trabalhadas no mes: ");
    scanf("%f", &horasNormais);
    printf("Digite a quantidade de horas extras trabalhadas no mes: ");
    scanf("%f", &horasExtras);

    // Calculo do salario total
    salarioTotal = (horasNormais * 20) + (horasExtras * 30);

    printf("\nSalario total: R$%.2f", salarioTotal);

    // Verifica se o salario é maior que 2000
    if (salarioTotal > 2000) {
        printf("\nSalario acima da media\n");
    } else {
        printf("\nSalario dentro da media\n");
    }

    printf("\n\n");
    return 0;
}