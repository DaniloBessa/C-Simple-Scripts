#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int cont, posicao, rec, rep, ap;
float nota1[6], nota2[6], soma1[6], med1[6], resul, med_total;

resul=0;
rec=0;
ap=0;
rep=0;
posicao=0;

for(cont=1; cont<=6; cont++){

    printf("\nInsira a 1º nota da %dº pessoa: ", cont);
    scanf("%f", &nota1[posicao]);
    printf("\nInsira a 2º nota da %dº pessoa: ", cont);
    scanf("%f", &nota2[posicao]);
    printf("---------------------------------------");
    soma1[posicao] = nota1[posicao]+nota2[posicao];
    med1[posicao] = soma1[posicao]/2;
    posicao++;
}

for(posicao=0; posicao<=5; posicao++){

    printf("\nA média das notas do %dº aluno é: %0.2f", (posicao+1), med1[posicao]);
}
printf("\n\n----------------------------------------\n|Boletim de Notas|\n\nDe 0 a 5: Reprovado\nDe 5,1 a 6,9: Aprovado em recuperação\nDe 7 a 10: Aprovado\n---------------------------------------\n");

for(posicao=0; posicao<=5; posicao++){

    if(med1[posicao] >= 0 && med1[posicao] <= 5){
        rep++;
    }
    else{
        if(med1[posicao]>=5.1 && med1[posicao] <=6.9){
            rec++;
        }
        else{
        ap++;
        }
    }
}
printf("\n---------------------------------------\nAlunos reprovados: %d\nAlunos aprovados em recuperação: %d\nAlunos aprovados: %d\n---------------------------------------\n", rep, rec, ap);

for(posicao=0; posicao<=5; posicao++){

    resul = med1[posicao]+resul;
}
med_total = resul/6;

printf("\n---------------------------------------\nMédia das notas de todos os alunos: %0.2f\n---------------------------------------\n\n", med_total);


system("pause");
return 0;
}
