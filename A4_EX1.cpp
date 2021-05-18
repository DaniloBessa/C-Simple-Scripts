#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int codfunc;
float salbase, saltotal, extra, horatrab;

printf("\n\nInforme o código do funcionário: \n\n");
scanf("%d", &codfunc);
printf("\n\nInforme a quantidade de horas trabalhadas:\n\n");
scanf("%f", &horatrab);

if (horatrab >= 50)
{
    salbase = 50*10;
    extra = (horatrab - 50)*20;
    saltotal = salbase+extra;

    printf("\nExtrato de pagamento do funcionário %d", codfunc);
    printf("\nSalário Base: R$ %0.2f", salbase);
    printf("\nExtra: R$ %0.2f", extra);
    printf("\nSalário Total: R$ %0.2f\n\n", saltotal);
}
else
{
    salbase = 50*10;
    extra = 0;
    saltotal = salbase;

    printf("\nExtrato de pagamento do funcionário %d", codfunc);
    printf("\nSalário Base: R$ %0.2f", salbase);
    printf("\nExtra: R$ %0.2f", extra);
    printf("\nSalário Total: R$ %0.2f\n\n", saltotal);
}


system("pause");
return 0;
}
