#include <stdio.h>
main()
{
    int A,B,P;
    do
    {
        printf("Digite um numero positivo\n");
        scanf("%d", &A);
        if (A<=0)
        {
            printf("Numero invalido\n");
        }
    }while(A<0);
do
    {
        printf("Digite um numero positivo\n");
        scanf("%d", &B);
        if(B<=0)
        {
            printf("Numero invalido\n");
        }
    }while(B<=0);
    P=A*B;
    printf("O produto = %i\n",P);
}
