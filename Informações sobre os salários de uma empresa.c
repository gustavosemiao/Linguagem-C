#include "stdio.h"
#include "stdlib.h"

int main()
{
    int i, qntdsalarios, qntdab, qntdac;
    float salarios, vtsalarios, mediasalarial, menorsalario, maiorsalario;

    qntdab=0;
    qntdac=0;
    vtsalarios=0;
    menorsalario=2500;
    maiorsalario=0;
    i=1;

    printf("\n\tVERIFICACAO DE SALARIOS\n\n");

    printf("\tDigite quantos salarios deseja verificar: ");
    scanf("%d", &qntdsalarios);

    system("cls");

    printf("\n\tVERIFICACAO DE SALARIOS\n\n");

    while (i<=qntdsalarios)
    {
        printf("\tDigite o salario %d : R$ ", i);
        scanf("%f", &salarios);

        if(salarios<=2500)
        {
            qntdab=qntdab+1;

            if(salarios<menorsalario)
            {
                menorsalario=salarios;
            }
        }
        else
        {
            qntdac=qntdac+1;

            if(salarios>maiorsalario)
            {
                maiorsalario=salarios;
            }
        }

        vtsalarios=vtsalarios+salarios;

        i=i+1;
    }

    mediasalarial=vtsalarios/qntdsalarios;

    system("cls");

    printf("\n\tVERIFICACAO DE SALARIOS\n\n");

    printf("\tINFORMACOES SOBRE OS SALARIOS\n\n");
    printf("\tA quantidade de salarios menores que R$ 2.500: %d \n", qntdab);
    printf("\tA quantidade de salarios maiores que R$ 2.500: %d \n", qntdac);
    printf("\tO valor total dos salarios somados: R$ %.2f \n", vtsalarios);
    printf("\tO valor da media salarial: R$ %.2f \n", mediasalarial);
    printf("\tO menor salario informado: R$ %.2f \n", menorsalario);
    printf("\tO maior salario informado: R$ %.2f \n", maiorsalario);

    return 0;
}
