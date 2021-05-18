#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

float mor, maca, kg_maca, kg_mor, total_ini, total_desc, total_ma, total_mo, total, desconto, peso_total;

printf("Insira a quantidade de morangos em Kg:");
scanf("%f", &kg_mor);
printf("Insira a quantidade de maçãs em Kg:");
scanf("%f", &kg_maca);


if (kg_maca<5)
{
    maca=2.80;
}
else
{
    if(kg_maca>5)
    {
      maca=1.80;
    }
}
;
if (kg_mor<5)
{
    mor=4.50;
}
else
{
    if (kg_mor>5)
    {
        mor=3.20;
    }
}
;
total_ma=kg_maca*maca;
total_mo=kg_mor*mor;
total_ini=total_ma+total_mo;
peso_total=kg_maca+kg_mor;

printf("O valor sem desconto é de: R$ %0.2f\n\n", total_ini);

if (peso_total>=8 || total_ini>=25)
{
    desconto=0.10;
    total_desc=total_ini*desconto;
    total= (total_ma+total_mo) - total_desc;
    printf("%0.2f\n", total_desc);
    printf("O valor com desconto é de: R$ %0.2f\n\n", total);
}
system("pause");
return 0;
}
