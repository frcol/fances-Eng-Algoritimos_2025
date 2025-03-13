#include <stdio.h>
/*
A empresa RAB paga os empregados por hora trabalhada. 
Para as primeiras 40 horas, eles recebem normalmente. 
Após ultrapassar este limite (40 horas) o valor pago por hora passa a ser três vezes maior. 
Na folha de pagamento é descontado R$ 1,50 para cada refeição. 
Faça um programa que calcule e mostre o salário bruto, o valor do desconto da refeição e o salário líquido de um funcionário que trabalhou 62 horas.
*/

int main() {
    system("cls");

    float salario_bruto, salario_liquido, valor_hora, desconto_refeicao;
    int horas_trabalhadas = 62;
    int refeicoes = 3; // Supondo que ele fez 3 refeições por dia de trabalho
    int horas_normais = 40;
    int horas_extras;
    
    // Definir o valor da hora normal
    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valor_hora);

    // Cálculo do salário bruto
    if (horas_trabalhadas > horas_normais) {
        horas_extras = horas_trabalhadas - horas_normais;
        salario_bruto = (horas_normais * valor_hora) + (horas_extras * (valor_hora * 3));
    } else {
        salario_bruto = horas_trabalhadas * valor_hora;
    }

    // Cálculo do desconto da refeição
    desconto_refeicao = refeicoes * 1.50;

    // Cálculo do salário líquido
    salario_liquido = salario_bruto - desconto_refeicao;

    // Exibição dos resultados
    printf("\nSalario Bruto: R$ %.2f", salario_bruto);
    printf("\nDesconto de Refeicao: R$ %.2f", desconto_refeicao);
    printf("\nSalario Liquido: R$ %.2f\n\n\n", salario_liquido);

    return 0;
}
