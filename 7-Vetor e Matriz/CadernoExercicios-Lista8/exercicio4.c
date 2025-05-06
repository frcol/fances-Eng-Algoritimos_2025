#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
4. Leia um vetor A de 6 elementos contendo o gabarito da Mega-Sena. O
sorteio consiste na extração de 6 números diferentes, no universo de 01 a
60. 
A seguir, ler um vetor B de 10 elementos contendo uma aposta.
Escrever quantos pontos fez o apostador, e se ele fez a sena (6 acertos),
a quina (5 acertos) ou a quadra (4 acertos).
*/
int main() {
    system("cls");
    
    int gabarito[6], aposta[10], acertos = 0;

    printf("Digite o gabarito da Mega-Sena (6 numeros entre 1 e 60):\n");
    for (int i = 0; i < 6; i++) {
        do {
            printf("[%i] Digite um numero valido (entre 1 e 60):\n", i+1);
            scanf("%d", &gabarito[i]);
        } while (gabarito[i] < 1 || gabarito[i] > 60);
    }

    printf("\nDigite sua aposta (10 numeros entre 1 e 60):\n");
    for (int i = 0; i < 10; i++) {
        do {
            printf("[%i] Digite um numero valido (entre 1 e 60):\n", i+1);
            scanf("%d", &aposta[i]);
        } while (aposta[i] < 1 || aposta[i] > 60);
    }

    printf("\nGabarito: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", gabarito[i]);
    }

    printf("\nAposta: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", aposta[i]);
    }

    // Verifica quantos acertos o apostador teve
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 10; j++) {
            if (gabarito[i] == aposta[j]) {
                acertos++;
            }
        }
    }
    printf("\n\nVoce acertou %d numeros.\n", acertos);

    switch (acertos) {
        case 6:
            printf("Voce fez a sena!\n");
            break;
        case 5:
            printf("Voce fez a quina!\n");
            break;
        case 4:
            printf("Voce fez a quadra!\n");
            break;
        default:
            printf("Voce nao fez nenhum premio.\n");
            break;
    }


    printf("\n\n");
    return 0;
}