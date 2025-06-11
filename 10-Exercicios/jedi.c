#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> //função tolower e toupper
/*
/*
Nome JEDI
para compor um nome conforme o costume JEDI, do filme Guerra nas Estrelas, é necessário fazer a seguinte composição:​

Nome Jedi: as 3 primeiras letras do primeiro nome + as 2 primeiras letras do sobrenome​
Sobrenome Jedi: as 2 primeiras letras do nome da mãe + as 3 primeiras letras da cidade em que nasceu​
Nome composto: as 3 primeiras letras do nome Jedi + as 3 últimas letras do sobrenome Jedi. ​

Exemplo:​
Nome: José da Silva​
Nome da mãe: Maria da Silva​
Cidade em que nasceu: Sorocaba​

Nome Jedi: Jossi Masor​
Nome composto: Jos-Sor
*/
int main()
{
    system("cls");
    
    char nome[80], mae[80], cidade[20], njedi[6], sjedi[6], cjedi[8];
    int i, j, tam, z;
    
    printf("\nNome completo: ");
    gets(nome);
    fflush(stdin);

    printf("\nNome da mae: ");
    gets(mae);
    fflush(stdin);

    printf("\nCidade em que nasceu: ");
    gets(cidade);
    fflush(stdin);

    // nome Jedi
    tam = strlen(nome);
    for (i = 0; i < 3; i++)
        njedi[i] = nome[i];

    for (j = tam; j >= 0; j--)
        if (nome[j] == ' ')
        {
            for (z = 0; z < 2; z++, i++)
                njedi[i] = tolower(nome[j + 1 + z]);

            break; // sai do for
        }

    njedi[i] = '\0';

    // sobrenome Jedi
    for (i = 0; i < 2; i++)
        sjedi[i] = mae[i];

    for (j = 0; j < 3; j++, i++)
        sjedi[i] = tolower(cidade[j]);

    sjedi[i] = '\0';

    // nome composto
    // tam = strlen(sjedi);

    // for (i = 0; i < 3; i++)
    //     cjedi[i] = njedi[i];

    // cjedi[i] = '-';
    // i++;

    // for (j = tam - 3; j < tam; j++, i++)
    //     if (j == tam - 3)
    //         cjedi[i] = toupper(sjedi[j]);
    //     else
    //         cjedi[i] = sjedi[j];

    // cjedi[i] = '\0';


    // Nome Composto modo 2
    for (i = 0; i < 3; i++)
        cjedi[i] = nome[i];

    cjedi[i] = '-';
    i++;

    for (j = 0; j < 3; j++, i++)
        if (j == 0)
            cjedi[i] = toupper(cidade[j]);
        else
            cjedi[i] = tolower(cidade[j]);
    
    cjedi[i] = '\0';

    // Exibe os resultados
    printf("\nNome Jedi: %s %s", njedi, sjedi);
    printf("\nNome composto: %s\n\n", cjedi);

    return 0;
} 