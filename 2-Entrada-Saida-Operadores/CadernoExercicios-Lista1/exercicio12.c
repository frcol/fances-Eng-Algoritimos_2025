#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
12. Uma empresa paga R$ 10.00 por hora normal trabalhada e R$ 15.00 por hora extra. 
Receber o total de horas normais e o total de horas extras trabalhadas por um empregado no mês. 
Calcular e exibir o salário dele.
*/

int main() {
    system("cls");
    
    float salario, horasNormais, horasExtras;

    printf("Digite o total de horas normais trabalhadas: ");
    scanf("%f", &horasNormais);

    printf("Digite o total de horas extras trabalhadas: ");
    scanf("%f", &horasExtras);

    salario = (horasNormais * 10) + (horasExtras * 15);

    printf("\nSalario do empregado: R$ %.2f", salario);

    
    printf("\n\n");
    return 0;
}