#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    system("cls");
    
    int i = 1;

    while (i <= 10)
    {
        printf("\nNumero %i", i);
        i++;
    }

    getch();
    return 0;
}