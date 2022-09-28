#include "stdio.h"
#include "stdlib.h"

int main()
{
  float n1,n2,md;
  printf("Digite a nota da primeira avaliacao: \n");
  scanf("%f", &n1);
  printf("Digite a nota da segunda avaliacao: \n");
  scanf("%f", &n2);

  md=(n1+n2)/2;

  printf("A media do aluno eh: %1.1f \n", md);

  if(md>=6)
   {
      printf("O aluno foi aprovado!");
   }
  else
   {
      if(md>=3)
       {
           printf("O aluno tera de fazer exame.");
       }
       else
       {
           printf("O aluno foi reprovado...");
       }
   }

 return 0;
}
