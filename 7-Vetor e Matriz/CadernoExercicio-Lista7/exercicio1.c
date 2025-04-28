#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 Receber  10  números  e  armazená-los  em  um  vetor.  
 Ao  final,  exibir  os números na ordem que foram recebidos. 
*/
int main() {
    system("cls");

    int i, numeros[10];

    printf("Digite 10 numeros:\n");
    
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    printf("\nOs numeros digitados foram:\n");
    
    for (i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n\n");
    return 0;
}