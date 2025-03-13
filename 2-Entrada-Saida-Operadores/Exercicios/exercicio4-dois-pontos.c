#include <stdio.h>
#include <math.h> // Para sqrt() e pow()
/*
calcular a distância entre dois pontos P(x1, y1) e Q(x2, y2) no plano cartesiano
formula raiz((x2-x1)^2 + (y2-y1)^2) 
*/
int main() {
    system("cls");

    double x1, y1, x2, y2, distancia;

    // Entrada dos pontos
    printf("Digite as coordenadas do ponto P (x1, y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Digite as coordenadas do ponto Q (x2, y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Cálculo da distância
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Exibição do resultado
    printf("\nA distância entre os pontos P(%.2f, %.2f) e Q(%.2f, %.2f) é: %.4f\n", x1, y1, x2, y2, distancia);

    return 0;
}
