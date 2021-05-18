#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int senha;

printf("\nInsira a senha númerica:\n\n");
scanf("%d", &senha);

if(senha==1234)
{
    printf("\nAcesso Permitido\n");
}
else
{
    printf("\nAcesso Negado\n");
}



system("pause");
return 0;

}
