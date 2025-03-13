#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
10. Calcular e exibir o consumo médio de combustível de um veículo recebendo a distância percorrida e a quantidade de combustível gasto.
Consumo médio = distância percorrida (km) / combustível gasto (l).
*/

int main() {
    system("cls");
    
    float distanciaPercorrida, combustivelGasto, consumoMedio;

    printf("Digite a distância percorrida (km): ");
    scanf("%f", &distanciaPercorrida);

    printf("Digite a quantidade de combustível gasto (l): ");
    scanf("%f", &combustivelGasto);

    consumoMedio = distanciaPercorrida / combustivelGasto;

    printf("\n\nConsumo medio: %.2f km/l", consumoMedio);

    printf("\n\n");
    return 0;
}