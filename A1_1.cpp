#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

char tipo_comb;
float litro, gasol, alcool, desconto, valor_desc, valor_ini, valor_total;

printf("Escolha o tipo de combustível:\n\nA==>Alcool\nG==>Gasolina\n\n");
scanf("%c", &tipo_comb);
printf("Insira a quantidade de litros:");
scanf("%f", &litro);

alcool= 2.90;
gasol= 3.30;

if (tipo_comb=='A')
{
  if (litro<=20)
  {
      valor_ini=litro*alcool;
      desconto=0.03;
      valor_desc=valor_ini*desconto;
      valor_total=valor_ini-valor_desc;

      printf("Seu valor total com desconto é de: R$ %0.2f", valor_total);
  }
  else
  {
      valor_ini=litro*alcool;
      desconto=0.05;
      valor_desc=valor_ini*desconto;
      valor_total=valor_ini-valor_desc;

      printf("Seu valor total com desconto é de: R$ %0.2f", valor_total);
  }
}
else
{
    if (tipo_comb=='G')
    {
        if (litro<=20)
      {
        valor_ini=litro*gasol;
        desconto=0.04;
        valor_desc=valor_ini*desconto;
        valor_total=valor_ini-valor_desc;

        printf("Seu valor total com desconto é de: R$ %0.2f", valor_total);
      }
      else
      {
        valor_ini=litro*gasol;
        desconto=0.06;
        valor_desc=valor_ini*desconto;
        valor_total=valor_ini-valor_desc;

        printf("Seu valor total com desconto é de: R$ %0.2f", valor_total);
      }
    }
}


system("pause");
return 0;
}
