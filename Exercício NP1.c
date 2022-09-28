#include "stdio.h"
#include "stdlib.h"

int main ()
{
    int tpop, erro, vi;
    float vp;

    erro=0;
    while(tpop<1 || tpop>2)
    {
        if(erro>0)
        {
            printf("\n\tPor favor, digite apenas opcoes validas(1 ou 2)\n");
        }
        printf("\n\tOPCOES DE OPERACOES\n");
        printf("\n\t1- Importacao\n");
        printf("\t2- Exportacao\n");
        printf("\n\tDigite qual das operacoes voce deseja: ");
        scanf("%d", &tpop);
        erro=erro+1;
        system("cls");
    }

    printf("\tAgora, digite o valor do produto: ");
    scanf("%f", &vp);

    switch(tpop)
    {
       case 1:
       if(vp<=9000)
       {
           vi=9;
       }
       else
       {
           if(vp<=13600)
           {
               vi=14;
           }
           else
           {
               vi=18;
           }
       }
       break;

       case 2:
       if(vp<=9000)
       {
           vi=4;
       }
       else
       {
           if(vp<=12000)
           {
               vi=8;
           }
           else
           {
               vi=12;
           }
       }
       break;
    }

    printf("\n\tSera cobrado %d%% para realizar a operacao.\n", vi);

    return 0;
}
