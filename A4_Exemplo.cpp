#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int palpite;

printf("Insira o seu palpite: ");
scanf("%d", &palpite);

if (palpite == 15)
{
    printf("\nParabéns, você acertou!\n\n");

}
 else
    {
        if (palpite < 15)
        {
            printf("\n\nVocê chutou baixo!\n\n");
        }
        else
        {
            printf("\n\nVocê chutou alto!\n\n");
        }
    }
system("pause");
return 0;
}
