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

printf("\n-----------------------------------------------------------\nInsira 4 n�meros para descobrir o maior, menor e m�dia\n-----------------------------------------------------------\n");

for(cont=1; cont<=500; cont++){

    printf("Insira um n�mero: ");
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

printf("-----------------------------------------------------------\nO menor n�mero dentro desta sequ�ncia �: %0.2f", menor);
printf("\nO maior n�mero dentro desta sequ�ncia �: %0.2f", maior);
printf("\nA m�dia destes valores �: %0.2f\n\n", media);

system("pause");
return 0;
}
