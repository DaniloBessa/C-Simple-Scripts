#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int num, menor, maior;

printf("-----------------------------------------------------------\nInsira um n�mero positivo e inteiro(Digite 0 para calcular):\n-----------------------------------------------------------\n");

do{

    printf("Insira um n�mero: ");
    scanf("%d", &num);
    if(num<0){
    printf("\n\nO �ltimo n�mero digitado � inv�lido\n\n");
    break;
    }
    if(num<menor && num>0){
    menor = num;
    }
    if(num>maior && num>0){
    maior = num;
    }

}while(num > 0);


if(num>=0){
printf("\nO menor n�mero desta sequ�ncia �: %d", menor);
printf("\nO maior n�mero desta sequ�ncia �: %d\n\n", maior);
}


system("pause");
return 0;
}
