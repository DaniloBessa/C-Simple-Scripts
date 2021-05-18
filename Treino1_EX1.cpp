#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int id_cont;
float soma, media, vez;

soma=0;
vez=0;

printf("\n------------------------------------------------------------------\nInsira idades e descubra a média entre elas (Digite 0 para sair)\n------------------------------------------------------------------\n");

do{
printf("Insira uma idade: ");
scanf("%d", &id_cont);
soma = id_cont + soma;
vez++;
}while(id_cont != 0);

media = soma / (vez-1);

printf("\n------------------------------------------------------------------\n%0.2f dividido por %0.2f é: %0.2f\n\n", soma, (vez-1), media);

system("pause");
return 0;
}
