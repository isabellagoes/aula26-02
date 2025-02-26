#include<stdio.h>
main()
{
    int A,B,P;
    do
    {
        printf("Digite um numero positivo\n");
        scanf("%i",&A);
        if(A<=0)
        {
            printf("NUMERO INVALIDO\n");
        }
    }while(A<=0);
     do
    {
        printf("Digite um numero positovo\n");
        scanf("%i",&B);
        if(B<=0)
        {
            printf("NUMERO INVALIDO\n");
        }
    }while(B<=0);
    P=A*B;
    printf("O produto de %d * %i= %d\n",A,B,P);
}
