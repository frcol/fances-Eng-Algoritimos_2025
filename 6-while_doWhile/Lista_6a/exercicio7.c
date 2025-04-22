#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Peça ao usuário seu peso e altura, calcule o IMC e classifique conforme a tabela: 
menor que 18.5 (abaixo do peso), 
entre 18.5 e 24.9 (saudável), 
entre 25.0 e 29.9 (sobrepeso), 
30.0 ou mais (obesidade).
*/
int main() {
    system("cls");

    float peso, altura, imc;

    printf("Informe seu peso (em kg): ");
    scanf("%f", &peso);
    printf("Informe sua altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);

    printf("Classificacao: ");
    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Saudavel\n");
    } else if (imc >= 25.0 && imc < 29.9) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }

    printf("\n\n");
    return 0;
}