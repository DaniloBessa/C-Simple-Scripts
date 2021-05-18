#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

   float nota1, nota2, nota3, media;

   printf("Insira a primeira nota: ");
   scanf("%f", &nota1);

   printf("Insira a segunda nota: ");
   scanf("%f", &nota2);

   printf("Insira a terceira nota: ");
   scanf("%f", &nota3);

   if ((nota1>=0 && nota1<=10) && (nota2>=0 && nota2<=10) && (nota3>=0 && nota3<=10))
    {
        media = (nota1 + nota2 + nota3)/3;
        if(media>=5)
        {
        printf("\nAprovado;\n\nSua média é: %0.2f\n\n", media);
        }
        else
        {
        printf("\nReprovado;\n\nSua média é: %0.2f\n\n", media);
        }
    }
    else
    {
        printf("Valor invalido");
    }
   system("pause");
    return 0;
}

