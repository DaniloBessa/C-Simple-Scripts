#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int opc;
float n1, n2, n3, p1, p2, p3, med_arit, med_pond;

printf("Escolha a opera��o desejada:\n\n1:M�dia Aritm�tica\n\n2:M�dia Ponderada\n\n3:Sair do programa\n\n");
scanf("%d", &opc);

if(opc>0 && opc<4)
{

switch (opc)
{
   case 1:

       printf("\nInsira o primeiro n�mero:");
       scanf("%f", &n1);
       printf("Insira o segundo n�mero:");
       scanf("%f", &n2);

       med_arit=(n1+n2)/2;

       printf("\nA m�dia aritm�tica entre esses n�meros � de: %0.3f\n\n", med_arit);
    break;

   case 2:

        printf("\nInsira o primeiro n�mero:");
        scanf("%f", &n1);
        printf("Indique o peso deste n�mero:");
        scanf("%f", &p1);
        printf("\nInsira o segundo n�mero:");
        scanf("%f", &n2);
        printf("Indique o peso deste n�mero:");
        scanf("%f", &p2);
        printf("\nInsira o terceiro n�mero:");
        scanf("%f", &n3);
        printf("Indique o peso deste n�mero:");
        scanf("%f", &p3);

        med_pond = ((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3);

        printf("\nA m�dia ponderada entre esses n�meros � de: %0.3f\n\n", med_pond);
    break;

    case 3:

        printf("\nAt� mais!\n\n");
    break;

}
}
else
{
    printf("\nEscolha inv�lida, por favor preencha corretamente.\n\n");
}

system("pause");
return 0;
}
