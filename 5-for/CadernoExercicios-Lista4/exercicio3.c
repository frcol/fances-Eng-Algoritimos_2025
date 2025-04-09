#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
3. Receber 10 números e informar se cada um deles é negativo, positivo ou
nulo.
*/
int main() {
    system("cls");
    
    int i, num;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &num);
        
        if (num > 0) {
            printf("%d é positivo.\n", num);
        } else if (num < 0) {
            printf("%d é negativo.\n", num);
        } else {
            printf("%d é nulo.\n", num);
        }
    }

    
    printf("\n\n");
    return 0;
}