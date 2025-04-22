#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Uma operadora cobra R$30,00 por um pacote com 10GB de internet. Cada GB extra custa R$5,00. Solicite ao usuário a quantidade de GB utilizada no mês e calcule o valor total da fatura.
*/
int main() {
    system("cls");

    float valorPacote = 30.0; // Valor do pacote de 10GB
    float valorGBExtra = 5.0; // Valor por GB extra
    float valorTotal = 0.0; // Valor total da fatura
    float gbUtilizados = 0.0; // GB utilizados pelo usuário 

    // Solicita ao usuário a quantidade de GB utilizados
    printf("Digite a quantidade de GB utilizados no mes: ");
    scanf("%f", &gbUtilizados);

    // Verifica se o usuário utilizou mais de 10GB
    if (gbUtilizados > 10) {
        // Calcula o valor total da fatura
        valorTotal = valorPacote + ((gbUtilizados - 10) * valorGBExtra);
    } else {
        // Se não ultrapassou 10GB, o valor total é apenas o do pacote
        valorTotal = valorPacote;
    }

    // Exibe o valor total da fatura
    printf("Valor total da fatura: R$%.2f\n", valorTotal);


    printf("\n\n");
    return 0;
}