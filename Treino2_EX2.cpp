#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int dia, mes, ano;

printf("\nInsira sua data de nascimento neste formato (dd mm aaaa), para saber se pode votar este ano:\n\n");
scanf("%d %d %d", &dia, &mes, &ano);

if (dia>30 || mes>12 || ano>2021 || ano<1900)
{
    printf("\nOs dados inseridos s�o inv�lidos\n");
}
else
{
    if (ano<=2005)
    {
        printf("\n\nVoc� nasceu em %d/%d/%d\n", dia, mes, ano);
        printf("\nParab�ns, voc� pode votar!\n");
    }
    else
    {
        printf("\n\nVoc� nasceu em %d/%d/%d\n", dia, mes, ano);
        printf("\nVoc� ainda n�o pode votar\n");
    }
}


system("pause");
return 0;
}
