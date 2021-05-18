#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

float n1, n2, n3, n4, med;

printf("Insira a primeira nota:");
scanf("%f", &n1);
printf("\nInsira a segunda nota:");
scanf("%f", &n2);
printf("\nInsira a terceira nota:");
scanf("%f", &n3);
printf("\nInsira a quarta nota:");
scanf("%f", &n4);

med=(n1+n2+n3+n4)/4;

printf("\n\nSua nota média é: %0.1f\n\n", med);

system("pause");
return 0;
}
