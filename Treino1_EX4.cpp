#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int num, menor, maior;

printf("-----------------------------------------------------------\nInsira um número positivo e inteiro(Digite 0 para calcular):\n-----------------------------------------------------------\n");

do{

    printf("Insira um número: ");
    scanf("%d", &num);
    if(num<0){
    printf("\n\nO último número digitado é inválido\n\n");
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
printf("\nO menor número desta sequência é: %d", menor);
printf("\nO maior número desta sequência é: %d\n\n", maior);
}


system("pause");
return 0;
}
