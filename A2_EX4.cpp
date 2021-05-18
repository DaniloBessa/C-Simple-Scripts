#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int hr, mi, seg, total, sobra;

printf("\nInforme a duração do evento em segundos:");
scanf("%d", &total);

hr=total/3600;
sobra=total%3600;
mi=sobra/60;
seg=sobra%60;

printf("\n\nA duração deste evento é de: %02d:%02d:%02d ou %02dh %02dmin e %02dseg\n", hr, mi, seg, hr, mi, seg);


system("pause");
return 0;
}
