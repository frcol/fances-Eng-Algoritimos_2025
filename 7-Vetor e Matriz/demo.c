#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");
    
    int matriz[2][3]; // = {{1,2,3}, {5,4,3}};

    for (int i = 0; i<2; i++ ) {
        for (int j = 0; j<3; j++) {
            printf("[%i][%i]: ", i, j) ;
            scanf("%i", &matriz[i][j]);
        }
    }

    for (int i = 0; i<2; i++ ) {
        for (int j = 0; j<3; j++) {
            printf("\t%i", matriz[i][j]) ;
        }
        printf("\n");
    }


    printf("\n\n");
    return 0;
}