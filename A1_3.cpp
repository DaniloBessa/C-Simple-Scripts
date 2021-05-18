#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int um, dois, tres, quatro,m_velha,m_nova,h_novo,h_velho, soma, mul;

printf("Insira a idade distinta do primeiro homem:");
scanf("%d", &um);
printf("\nInsira a idade distinta do segundo homem:");
scanf("%d", &dois);
printf("\nInsira a idade distinta da primeira mulher:");
scanf("%d", &tres);
printf("\nInsira a idade distinta da segunda mulher:");
scanf("%d", &quatro);



if (um>dois)
{
    h_velho=um;
    h_novo=dois;
}
else
{
    h_novo=um;
    h_velho=dois;
}

if (tres>quatro)
{
    m_velha=tres;
    m_nova=quatro;
}
else
{
    m_nova=tres;
    m_velha=quatro;
}

soma=h_velho+m_nova;
mul=m_velha*h_novo;


printf("\n\nA soma entre o homem mais velho e a mulher mais nova é de: %d\n\n", soma);
printf("O produto entre a mulher mais velha e o homem mais novo é de: %d\n\n", mul);

system("pause");
return 0;
}
