#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

   int a, b, soma;

   printf ("informe  o primeiro n�mero: ");
   scanf("%d", &a);

   printf ("informe o segundo n�mero: ");
   scanf("%d", &b);

   soma = a+b;

   printf("a soma dos valores informados �: %d \n\n", soma);

   system("pause");
    return 0;
}
