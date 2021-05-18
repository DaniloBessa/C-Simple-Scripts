#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int num[10], cont, posicao;

posicao=0;

for (cont=1; cont<=10; cont++){
    printf("Digite um número: ");
    scanf("%d", &num[posicao]);
    posicao++;
}
posicao=0;
for (cont=1; cont<=10; cont++){
    printf(" %d -", num[posicao]);
    posicao++;
}




system("pause");
return 0;
}
