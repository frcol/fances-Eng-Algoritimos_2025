#include <stdio.h>
/*
Construa um programa que receba 3 notas (n1, n2, n3). Calcule a média 
ponderada e exiba o resultado. Os pesos das provas são n1 vale 40%, n2 vale 
40% e n3 vale 20%
*/
int main() {
    system("cls");

    float n1, n2, n3, media;

    // Entrada das notas
    printf("Digite a primeira nota (N1): ");
    scanf("%f", &n1);
    
    printf("Digite a segunda nota (N2): ");
    scanf("%f", &n2);
    
    printf("Digite a terceira nota (N3): ");
    scanf("%f", &n3);

    // Cálculo da média ponderada
    media = (n1 * 0.4) + (n2 * 0.4) + (n3 * 0.2);

    // Exibição do resultado
    printf("\nA media ponderada e: %.2f\n", media);

    return 0;
}
