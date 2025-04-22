#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Crie um programa que receba uma quantidade de segundos e converta para horas, minutos e segundos. Use apenas variáveis inteiras e exiba o resultado no formato hh:mm:ss.
*/
int main() {
    system("cls");

    int segundos, horas, minutos, segundosRestantes;
    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    // Calcula horas, minutos e segundos restantes
    horas = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    segundosRestantes = segundos % 60;

    // Exibe o resultado no formato hh:mm:ss
    printf("Resultado: %02d:%02d:%02d\n", horas, minutos, segundosRestantes);
    

    printf("\n\n");
    return 0;
}