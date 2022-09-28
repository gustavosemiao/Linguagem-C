#include "stdio.h"
#include "math.h"

int main()
{
    int i, n, pot;
    printf("\n\tPOTENCIAS\n\n");
    printf("\tDigite um numero inteiro para saber suas potencias de 0 a 20: ");
    scanf("%d", &n);

    for(i=0;i<=20;i++)
    {
        pot=pow(n,i);
        printf("\t%d^%d = %d \n", n, i, pot);
    }
    return 0;
}
