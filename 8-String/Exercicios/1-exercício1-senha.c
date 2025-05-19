#include <stdio.h>
#include <stdlib.h>
/*
Solicite ao usuário que digite uma senha composta por 6 caracteres e na sequência pergunte novamente a senha. Confira se as duas sequências de caracteres são iguais e em caso afirmativo, exiba uma mensagem dizendo que a senha é valida. Caso os três primeiros caracteres sejam iguais, informe que houve algum erro na digitação, caso contrário, a senha será inválida.
*/
int main()
{
  system("cls");

  char senha1[7], senha2[7]; // string com 6 caracteres
  int i, cont = 0, cont1 = 0;

  printf("Digite a sua senha: ");
  gets(senha1);
  fflush(stdin);

  printf("Confirme a sua senha: ");
  gets(senha2);
  fflush(stdin);

  for (i = 0; i < 6; i++)
    if (senha1[i] == senha2[i])
    {
      cont++;
      
      if (i < 3)
        cont1++;
    }
    
  if (cont == 6) // todos caracteres iguais
    printf("Senha valida!");
  else if (cont1 == 3)
    printf("Apenas 3 primeiros caracteres corretos\n");
  else
    printf("Senha invalida!\n\n");
 
    
  return 0;
}

