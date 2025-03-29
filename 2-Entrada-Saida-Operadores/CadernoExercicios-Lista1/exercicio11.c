#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
11. A velocidade média de um veículo em um percurso é dada através da distância percorrida pelo tempo, ou seja, Vm = S / t. Calcular e exibir a velocidade média do veículo em uma estrada recebendo esses dois
dados do percurso.
*/

int main() {
    system("cls");
    
    float distancia, tempo, velocidadeMedia;

    printf("Digite a distancia percorrida: ");
    scanf("%f", &distancia);
    printf("Digite o tempo gasto: ");
    scanf("%f", &tempo);

    velocidadeMedia = distancia / tempo;

    printf("Velocidade media: %.2f", velocidadeMedia);

    printf("\n\n");
    return 0;
}