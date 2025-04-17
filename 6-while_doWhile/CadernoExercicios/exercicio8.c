#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
8.  A  prefeitura  de  Sorocaba  está  em  eleições.  Apresentaram-se  3 
candidatos:  JOSÉ  com o nº  1,  MARIA  com o  nº  2  e  JOÃO  com o nº  3. 
Cada eleitor deve indicar a sua opção, que pode ser o nº de um candidato 
(1,2,3), voto branco (nº 4) ou voto nulo (nº 5). Preparar um programa que 
receba e processe os dados de um número não determinado de cédulas 
até que seja digitado 0 para o voto, escrevendo os seguintes dados:  
a)  o número de votos de cada uma das 5 opções;  
b)  o nome do candidato vencedor;   
c)  o percentual de eleitores que elegeram o candidato vencedor.
sem usar array
*/
int main() {
    system("cls");
    
    int voto, votosJose = 0, votosMaria = 0, votosJoao = 0, votosBranco = 0, votosNulo = 0;
    float percentualVencedor = 0.0;

    do {
        system("cls");

        printf("Digite o numero do candidato: \n1-JOSE \n2-MARIA, \n3-JOAO, \n4-BRANCO, \n5-NULO \n0-SAIR: \n");
        scanf("%d", &voto);

        switch (voto) {
            case 1:
                votosJose++;
                break;
            case 2:
                votosMaria++;
                break;
            case 3:
                votosJoao++;
                break;
            case 4:
                votosBranco++;
                break;
            case 5:
                votosNulo++;
                break;
            case 0:
                break;
            default:
                printf("Voto invalido! Tente novamente.\n");
        }
    } while (voto != 0);

    system("cls");
    int totalVotos = votosJose + votosMaria + votosJoao + votosBranco + votosNulo;

    if (totalVotos > 0) {
        if (votosJose > votosMaria && votosJose > votosJoao) {
            printf("\nCandidato vencedor: JOSE");
            percentualVencedor = (float)votosJose / totalVotos * 100;
        } else if (votosMaria > votosJose && votosMaria > votosJoao) {
            printf("\nCandidato vencedor: MARIA");
            percentualVencedor = (float)votosMaria / totalVotos * 100;
        } else if (votosJoao > votosJose && votosJoao > votosMaria) {
            printf("\nCandidato vencedor: JOAO");
            percentualVencedor = (float)votosJoao / totalVotos * 100;
        } else {
            printf("\nHouve empate entre os candidatos.\n");
        }

        printf("\n\nResultados da Eleicao:\n");
        printf("Votos de JOSE: %d\n", votosJose);
        printf("Votos de MARIA: %d\n", votosMaria);
        printf("Votos de JOAO: %d\n", votosJoao);
        printf("Votos em BRANCO: %d\n", votosBranco);
        printf("Votos NULOS: %d\n", votosNulo);

        if (votosJose != votosMaria && votosJose != votosJoao) {
            printf("\nPercentual de eleitores que elegeram o candidato vencedor: %.2f%%\n", percentualVencedor);
        }
    } else {
        printf("Nenhum voto foi registrado.\n");
    }

    printf("\n\n");
    return 0;
}