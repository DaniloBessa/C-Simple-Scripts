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
    printf("\nParab�ns, voc� acertou!\n\n");

}
 else
    {
        if (palpite < 15)
        {
            printf("\n\nVoc� chutou baixo!\n\n");
        }
        else
        {
            printf("\n\nVoc� chutou alto!\n\n");
        }
    }
system("pause");
return 0;
}
