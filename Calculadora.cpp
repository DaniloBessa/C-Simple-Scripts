#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int fechar;
char operador;
float pnum, snum, soma, multi, sub, div;

do{

printf("\n---------------------\nMenu:\n\nDigite + para somar\nDigite - para subtrair\nDigite * para multiplicar\nDigite / para dividir\nDigite 0 para sair do programa\n");
scanf(" %c", &operador);

switch(operador){

case '+' :
    printf("\n\nDigite o primeiro número: ");
    scanf("%f", &pnum);
    printf("\nDigite o segundo número: ");
    scanf("%f", &snum);
    soma = pnum + snum;
    printf("\nA soma entre estes números é de: %0.2f\n", soma);
    break;

case '-' :
    printf("\n\nDigite o primeiro número: ");
    scanf("%f", &pnum);
    printf("\nDigite o segundo número: ");
    scanf("%f", &snum);
    sub = pnum - snum;
    printf("\nA subtração entre estes números é de: %0.2f\n", sub);
    break;

case '*' :
    printf("\n\nDigite o primeiro número: ");
    scanf("%f", &pnum);
    printf("\nDigite o segundo número: ");
    scanf("%f", &snum);
    multi = pnum * snum;
    printf("\nA multiplicação entre estes números é de: %0.2f\n", multi);
    break;

case '/' :
    printf("\n\nDigite o primeiro número: ");
    scanf("%f", &pnum);
    printf("\nDigite o segundo número: ");
    scanf("%f", &snum);
    div = pnum / snum;
    printf("\nA divisão entre estes números é de: %0.2f\n", div);
    break;

case 0:
    break;



}
}while(operador  0);


system("pause");
return 0;
}
