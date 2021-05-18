#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int num, vez, op;

do{
printf("Escolha um número: ");
scanf("%d", &num);

if(num<0){
    printf("Informe um número positivo.");
    printf("\n\nDeseja tentar novamente?");
    printf("\nDigite 1 para sim/Digite 2 para não\n");
    scanf("%d", &op);
}
else{
for(vez=1; vez<=10;vez++){

    printf("\n %d x %d = %d\n", num, vez, (num*vez) );

}
op--;
}
}while(op==1);


system("pause");
return 0;
}
