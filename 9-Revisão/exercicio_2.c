#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
7.  Implemente  um  programa  que  calcule  aumento  de  salário  no  ano corrente.  Se o  salário  for  de até  R$  1000.00  deve  ser  calculado o  novo salário  com  aumento  de  5%,  para  um  salário  maior  que  R$  1000.00  o aumento é de 7%.
*/
int main() {
    system("cls");
    
    float salario = 0, novoSalario = 0;
    
    printf("Digite o salario: ");
    scanf("%f", &salario);

    if (salario <= 1000.00) {
        novoSalario = salario + (salario * 0.05);
    }
    else {
        novoSalario = salario + (salario * 0.07);
    }

    printf("Novo salario: %.2f", novoSalario);

    printf("\n\n");
    return 0;
}