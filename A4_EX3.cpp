#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int la, lb, lc;

printf("Insira o valor de cada um dos três lados do triângulo: \n");
scanf("%d %d %d", &la, &lb, &lc);

if ((la < lb+lc) && (lb < la+lc) && (lc < lb+la))
{
    if ((la == lb) && (lb == lc))
    {
        printf("\nOs valores informados formam um triângulo equilátero\n");
    }
    else
    {
        if((la != lb) && (lb != lc) && (lc != la))
        {
            printf("\nOs valores informados formam um triângulo escaleno\n");
        }
        else
        {
            printf("\nOs valores informados formam um triângulo isósceles\n");
        }
    }
}
else
{
    printf("\nOs lados informados não formam um triângulo!\n\n");
}


system("pause");
return 0;
}
