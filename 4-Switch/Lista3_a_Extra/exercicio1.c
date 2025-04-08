#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
1-Receber três notas e um peso para cada nota, calcular a média ponderada e exibir o resultado.
Fórmula: Média = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 + p3)
*/
int main() {
    system("cls");

    float n1, n2, n3, p1, p2, p3, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite o peso da primeira nota: ");
    scanf("%f", &p1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite o peso da segunda nota: ");
    scanf("%f", &p2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite o peso da terceira nota: ");
    scanf("%f", &p3);

    media = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);
    printf("A média ponderada é: %.2f\n", media);

    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media >= 5) {
        printf("Recuperação\n");
    } else {
        printf("Reprovado\n");
    }

    printf("\n\n");
    return 0;
}