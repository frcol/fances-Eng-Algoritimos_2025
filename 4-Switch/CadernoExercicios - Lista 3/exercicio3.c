#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
3. Calcular o IMC (Índice de Massa Corporal) de uma pessoa através da
fórmula IMC = Peso (kg) / Altura2

(m). Informe a classificação do IMC na

tela de acordo com as regras abaixo:
< 18,5 Abaixo do peso
De 18,5 a menor que 25,0 Saudável
De 25,0 a menor que 30,0 Sobrepeso
De 30,0 a menor que 35,0 Obesidade Grau I
De 35,0 a menor que 40,0 Obesidade Grau II (severa)
De 40,0 em diante Obesidade Grau III (mórbida)
*/
int main() {
    system("cls");
    
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    if (peso <= 0 || altura <= 0) {
        printf("Peso e altura devem ser maiores que zero.\n");
        return 1;
    }

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25.0) {
        printf("Saudável\n");
    } else if (imc < 30.0) {
        printf("Sobrepeso\n");
    } else if (imc < 35.0) {
        printf("Obesidade Grau I\n");
    } else if (imc < 40.0) {
        printf("Obesidade Grau II (severa)\n");
    } else {
        printf("Obesidade Grau III (mórbida)\n");
    }
    
    printf("\n\n");
    return 0;
}