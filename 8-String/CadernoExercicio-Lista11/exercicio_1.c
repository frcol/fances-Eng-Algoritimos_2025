#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Solicite ao usuário que digite uma senha composta por 6 caracteres e na sequência pergunte novamente a senha. 
Confira se as duas sequências de  caracteres  são  iguais  e  em  caso  afirmativo,  exiba  uma  mensagem 
dizendo  que  a  senha  é  valida.  
Caso  os  três  primeiros  caracteres  sejam iguais,  informe  que  houve  algum  erro  na  digitação,  caso  contrário,  a senha será inválida.
*/
int main() {
    system("cls");

    char senha1[7], senha2[7];
    
    printf("Digite a senha: ");
    gets(senha1);
    fflush(stdin);
    
    printf("Digite novamente a senha: ");
    gets(senha2);
    fflush(stdin);

    if (strcmp(senha1, senha2) == 0) {
        printf("Senha valida!\n");
    } else if (memcmp(senha1, senha2, 3) == 0) {
        printf("Houve erro na digitação!\n");
    } else {
        printf("Senha inválida!\n");
    }

    printf("\n\n");
    return 0;
}