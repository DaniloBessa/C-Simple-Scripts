#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int posicao, cont, nota[15], qtd_reg;
float idade[15], qtd_bom, soma, media, vez, porcent;

posicao=0;
soma=0;
vez=0;
qtd_reg=0;
qtd_bom=0;

printf("\n-----------------------------------------------------------\nInsira as idades e opiniôes de 15 espectadores:\n-----------------------------------------------------------\n");

for(cont=1; cont<=15; cont++){
    printf("\nInsira a idade do %d espectador: ", cont);
    scanf("%f", &idade[posicao]);
    printf("Insira a nota dada pelo %d espectador(3=Ótimo|2=Bom|1=Regular): ", cont);
    scanf("%d", &nota[posicao]);
    if(nota[posicao] == 3){
        soma = idade[posicao]+soma;
        vez++;
    }
    posicao++;
}

for(posicao=0; posicao<=14; posicao++){

     if(nota[posicao] == 1){
        qtd_reg++;
     }
}

for(posicao=0; posicao<=14; posicao++){

     if(nota[posicao] == 2){
        qtd_bom++;
     }
}

media = soma/vez;
porcent = (qtd_bom/15)*100;

printf("-----------------------------------------------------------\nA média das idades das pessoas que responderam ótimo é de: %0.2f anos", media);
printf("\nQuantas pessoas avaliaram o filme como regular: %d pessoas", qtd_reg);
printf("\nA porcentagem de pessoas que respondeu bom entre todos os espectadores analisados: %0.2f por cento\n\n", porcent);

system("pause");
return 0;
}
