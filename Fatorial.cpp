#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int fat, res, cont;
res=1;

printf("Insira um número: ");
scanf("%d", &fat);

for (cont=1; cont<=fat; cont++){

    res = cont*res;
}

printf("\nO resultado de %d! é: %d\n\n", fat, res);




system("pause");
return 0;
}
