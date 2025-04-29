#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Receber  10  números  e  armazená-los  em  um  vetor.  Copiar  os  números 
em outro vetor na ordem inversa e mostrar na tela todas as posições em que 
se tem o mesmo número nos dois vetores. 
Exemplo: 
1  2  3  1  2  3  1  2  3  1 
1  3  2  1  3  2  1  3  2  1 
Posições: 0, 3, 6, 9  
*/
int main() {
    system("cls");

    int numero[10], inverso[10], x, cont = 0;
    
    // Receber 10 numeros e armazenar em um vetor
    for (x = 0; x < 10; x++) {
        printf("Digite o numero da posicao %i: ", x);
        scanf("%i", &numero[x]);
        fflush(stdin);
    }

    // Copiar os numeros em outro vetor na ordem inversa

    for (x = 0; x < 10; x++) {
        inverso[x] = numero[9 - x];
    }

    // Mostrar na tela todas as posições em que se tem o mesmo número nos dois vetores
    printf("\n\nPosicoes: ");
    for (x = 0; x < 10; x++) {
        if (numero[x] == inverso[x]) {
            printf("%i ", x);
            cont++;
        }
    }
    
    if (cont == 0) {
        printf("Nenhuma posicao encontrada!");
    }

    printf("\n\n");
    return 0;
}