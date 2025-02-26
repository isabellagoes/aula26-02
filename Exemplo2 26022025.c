#include<stdio.h>
main()
{
    float A=-100,B=0,P;
    while(A<=0)
    {
        printf("Digite um numero positivo\n");
        scanf("%f",&A);
        if(A<=0)
        {
            printf("NUMERO INVALIDO\n");
        }
    }
     while(B<=0)
    {   printf("Digite um numero positivo\n");
        scanf("%f",&B);
        if(B<=0)
        {
            printf("NUMERO INVALIDO\n");
        }
    }
    P=A*B;
    printf("O produto de %f * %f= %f\n",A,B,P);
}
