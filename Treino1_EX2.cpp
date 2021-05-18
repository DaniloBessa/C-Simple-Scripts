#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int cont, posicao;
float num[500], soma, media, maior, menor, vez;

posicao=0;
soma=0;
vez=0;

printf("\n-----------------------------------------------------------\nInsira 4 números para descobrir o maior, menor e média\n-----------------------------------------------------------\n");

for(cont=1; cont<=500; cont++){

    printf("Insira um número: ");
    scanf("%f", &num[posicao]);
    soma = num[posicao] + soma;
    vez++;
    posicao++;
}
menor = num[0];
maior = num[0];

for(posicao=0; posicao<=499; posicao++){
    if (num[posicao] < menor){
       menor = num[posicao];
    }
}

for(posicao=0; posicao<=499; posicao++){
    if (num[posicao] > maior){
       maior = num[posicao];
    }
}

media = soma / vez;

printf("-----------------------------------------------------------\nO menor número dentro desta sequência é: %0.2f", menor);
printf("\nO maior número dentro desta sequência é: %0.2f", maior);
printf("\nA média destes valores é: %0.2f\n\n", media);

system("pause");
return 0;
}
