#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

   int a, b, soma;

   printf ("informe  o primeiro número: ");
   scanf("%d", &a);

   printf ("informe o segundo número: ");
   scanf("%d", &b);

   soma = a+b;

   printf("a soma dos valores informados é: %d \n\n", soma);

   system("pause");
    return 0;
}
