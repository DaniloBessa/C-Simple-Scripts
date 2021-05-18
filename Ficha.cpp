#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int posicao, cont, qtd1, qtd3;
float peso[20], idade[20], altura[20], med, soma, vez, qtd2, pcent;
char olho[20];
char cabelo[20];

qtd3=0;
qtd2=0;
vez=0;
posicao=0;
qtd1=0;
soma=0;

for(cont=1; cont<=20; cont++){

    printf("\nInsira a idade da %dº pessoa: ", cont);
    scanf("%f", &idade[posicao]);
    printf("\nInsira o peso da %dº pessoa em kg: ", cont);
    scanf("%f", &peso[posicao]);
    printf("\nInsira a altura da %dº pessoa: ", cont);
    scanf("%f", &altura[posicao]);
    printf("\nInsira a cor dos olhos da %dº pessoa|P=Preto|A=Azul|V=Verde|C=Castanho: ", cont);
    scanf(" %c", &olho[posicao]);
    printf("\nInsira a cor dos cabelos da %dº pessoa|P=Preto|R=Ruivo|L=Loiro|C=Castanho: ", cont);
    scanf(" %c", &cabelo[posicao]);
    printf("--------------------------------------------------------------------------------");
    posicao++;
}

for(posicao=0; posicao<=19; posicao++){

    if(idade[posicao]>50 && peso[posicao]<60){
        qtd1++;
    }
}

for(posicao=0; posicao<=19; posicao++){

    if(altura[posicao] < 1.50){
        soma = idade[posicao]+soma;
        vez++;
    }
    med=soma/vez;
}

for(posicao=0; posicao<=19; posicao++){

    if(olho[posicao] == 'A'){
        qtd2++;
    }
    pcent = (qtd2/20)*100;
}

for(posicao=0; posicao<=19; posicao++){

    if(cabelo[posicao] == 'R' && olho[posicao] != 'A'){
        qtd3++;
    }
}

printf("\n\nA quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 quilos é: %d", qtd1);
printf("\nA média das idades das pessoas com altura inferior a 1,50 é de: %0.3f", med);
printf("\nA porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas é de: %0.2f", pcent);
printf("\nA quantidade de pessoas ruivas que não possuem olhos azuis é de: %d\n\n", qtd3);

system("pause");
return 0;
}
