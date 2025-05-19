#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
6. Dada uma seqüência de n números reais, determine os números que
compõem a seqüência e o número de vezes que cada um deles ocorre na
mesma.
Exemplo: n = 8
Sequência: -1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1,7
Saída: 
-1.7 ocorre 3 vezes
3.0 ocorre 1 vez
0.0 ocorre 2 vezes
1.5 ocorre 1 vez
2.3 ocorre 1 vez

sem usar ponteiros
*/
int main() {
    system("cls");

    int n, i, j, count;

    printf("Digite o tamanho da sequência: ");
    scanf("%d", &n);

    float sequencia[n];
    int frequencia[n];

    printf("Digite os números da sequência:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &sequencia[i]);
        frequencia[i] = -1; // Inicializa o vetor de frequência
    }

    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (sequencia[i] == sequencia[j]) {
                count++;
                frequencia[j] = 0; // Marca como já contado
            }
        }
        
        if (frequencia[i] != 0) {
            frequencia[i] = count; // Armazena a frequência
        }
    }

    printf("\nSaída:\n");
    for (i = 0; i < n; i++) {
        if (frequencia[i] != 0) {
            printf("%.1f ocorre %d vez(es)\n", sequencia[i], frequencia[i]);
        }
    }
    

    printf("\n\n");
    return 0;
}