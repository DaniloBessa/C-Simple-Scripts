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

printf("Informe um número da sequência de fibonacci: ");
scanf("%d", &num);

while(terceiro<=num){

    printf("| %d |", terceiro);
    terceiro = primeiro+segundo;
    primeiro = segundo;
    segundo = terceiro;
}
if (primeiro == num){
        printf("\n\nEste número faz parte da sequência\n\n");
}
else{
        printf("\n\nEste número não faz parte da sequência\n\n");
}

system("pause");
return 0;
}
