#include<stdio.h>
#include<stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

char nome1[100], nome2[100];
float idade1, idade2, med_idade;

printf("Insira o nome da primeira pessoa:");
scanf("%s", nome1);
printf("\nInsira a idade desta pessoa:");
scanf("%f", &idade1);
printf("\nInsira o nome da segunda pessoa:");
scanf("%s", nome2);
printf("\nInsira a idade desta pessoa:");
scanf("%f", &idade2);

med_idade=(idade1+idade2)/2;


printf("\n\n%s tem %0.1f anos\n", nome1, idade1);
printf("\n%s tem %0.1f anos\n", nome2, idade2);
printf("\n\nA idade média entre estas pessoas é de: %0.1f\n\n", med_idade);


system("pause");
return 0;
}
