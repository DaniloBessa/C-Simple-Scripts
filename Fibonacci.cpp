#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int num, primeiro, segundo, terceiro;

terceiro = 1;
primeiro = 0;
segundo = 1;

printf("Informe um n�mero da sequ�ncia de fibonacci: ");
scanf("%d", &num);

while(terceiro<=num){

    printf("| %d |", terceiro);
    terceiro = primeiro+segundo;
    primeiro = segundo;
    segundo = terceiro;
}
if (primeiro == num){
        printf("\n\nEste n�mero faz parte da sequ�ncia\n\n");
}
else{
        printf("\n\nEste n�mero n�o faz parte da sequ�ncia\n\n");
}

system("pause");
return 0;
}
