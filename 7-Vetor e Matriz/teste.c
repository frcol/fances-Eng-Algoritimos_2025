#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cls");

    int idades[3][2] = {{18, 21}, 
                        {33, 45}, 
                        {52, 23}};
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%i\t", idades[i][j]);
        }
        printf("\n");
    }

   printf("\n\n");
    return 0;
}