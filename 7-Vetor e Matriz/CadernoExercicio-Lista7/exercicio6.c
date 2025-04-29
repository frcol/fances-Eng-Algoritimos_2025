#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Receber  12  números  e  armazená-los  em  um  vetor.  Ao  final,  exibir  a 
quantidade de números negativos informados. 
*/
int main() {
    system("cls");

    int i, cont = 0, num[12];

    printf("Digite 12 numeros:\n");
    for (i = 0; i < 12; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &num[i]);
        if (num[i] < 0) {
            cont++;
        }
    }
    printf("\n\nA quantidade de numeros negativos informados foi: %d", cont);

    printf("\n\n");
    return 0;
}