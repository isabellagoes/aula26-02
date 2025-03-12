#include<stdio.h>
 float entrada()
{
    float aux;
    do
    {
        printf("Digite um numero positivo\n");
        scanf("%f",&aux);
        if(aux<=0)
        {
            printf("Digite apenas numero positivo\n");
        }
    }while(aux<=0);
    return aux;
}
main()
{
    float A,B,P;
    A=entrada();
    printf("O VALOR DE A =%f\n",A);
    B=entrada();
    printf("O VALOR DE B =%f\n",B);
    P=A*B;
    printf("O produto de %.2f * %.2f= %.2f\n",A,B,P);
}
