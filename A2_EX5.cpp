#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int idade;

printf("Digite a idade do nadador para saber a sua classificação:");
scanf("%d", &idade);

if (idade<0)
{
    printf("\n\nIdade inválida, por favor preencha corretamente\n\n");
}
else
{
if (idade>=0 && idade<5)
{
    printf("\n\nNão existem categorias para esta idade\n\n");
}
else
{
if(idade>=5 && idade<=7)
{
    printf("\n\nCategoria: Infantil A\n\n");
}
else
{
if(idade>=8 && idade<=10)
{
    printf("\n\nCategoria: Infantil B\n\n");
}
else
{
if(idade>=11 && idade<=13)
{
    printf("\n\nCategoria: Juvenil A\n\n");
}
else
{
if(idade>=14 && idade<=17)
{
    printf("\n\nCategoria: Juvenil B\n\n");
}
else
{
if(idade>=18)
{
    printf("\n\nCategoria: Sênior\n\n");
}
}
}
}
}
}
}

system("pause");
return 0;
}
