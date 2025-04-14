#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");

    int a = 8, b = 3;
    if (a % b == 2)
        printf("Valor 1");
    else if (a / b > 2)
        printf("Valor 2");
    else
        printf("Valor 3");

    printf("\n\n");
    return 0;
}