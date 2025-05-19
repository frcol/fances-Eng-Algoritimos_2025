#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");

    char nome[80] = "Fabio";
    char nome2[80] = "FAbi";

    
    int result = strcmp(nome, nome2);

    printf("%i", result);

    printf("\n\n");
    return 0;
}