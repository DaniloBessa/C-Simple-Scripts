#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int la, lb, lc;

printf("Insira o valor de cada um dos tr�s lados do tri�ngulo: \n");
scanf("%d %d %d", &la, &lb, &lc);

if ((la < lb+lc) && (lb < la+lc) && (lc < lb+la))
{
    if ((la == lb) && (lb == lc))
    {
        printf("\nOs valores informados formam um tri�ngulo equil�tero\n");
    }
    else
    {
        if((la != lb) && (lb != lc) && (lc != la))
        {
            printf("\nOs valores informados formam um tri�ngulo escaleno\n");
        }
        else
        {
            printf("\nOs valores informados formam um tri�ngulo is�sceles\n");
        }
    }
}
else
{
    printf("\nOs lados informados n�o formam um tri�ngulo!\n\n");
}


system("pause");
return 0;
}
