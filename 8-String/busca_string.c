#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
char frase[80],str[80];
int pos[80],tamf,tams,i,j,z,x=0,cont,qtde=0;

printf("\nDigite uma frase:");
gets(frase);
fflush(stdin);
tamf=strlen(frase);
printf("\nDigite o string a ser buscado:");
gets(str);
fflush(stdin);
tams=strlen(str);
for(i=0;i<tamf;i++)
  {
  cont=0;
  for(j=0;j<tams;j++)
    {
    if(frase[i+j]==str[j])
      {
      cont++;
      if(cont==tams)
        {
          qtde++;
          for(z=0;z<tams;z++,x++)
            pos[x]=i+1+z;
        }//if cont
      }//if pf
    else
      j=tams;
    }//for j
  }//for i
printf("\nO string %s ocorreu %i vezes nas posicoes:\n",str,qtde);
for(i=0,x=1;i<qtde*tams;i++,x++)
  {
    printf("%i\t",pos[i]);
    if(x==tams)
     {
       printf("\n");
       x=0;    //para colocar as posições de cada string em 1 linha
     }//if
  }//for
printf("\n\n");
system("pause");
return 0;
}//main


