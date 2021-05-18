#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

float num1, num2;

printf("\nDigite dois números distintos e o maior será determinado:\n\n");
scanf("%f %f", &num1, &num2);

if (num1==num2)
{
    printf("\n\nPor favor digite dois números diferentes\n\n");
}
else
{

if (num1>num2)
{
    printf("\n\n%0.2f é maior que %0.2f\n\n", num1, num2);
}
else
{
    printf("\n\n%0.2f é maior que %0.2f\n\n", num2, num1);
}
}

system("pause");
return 0;
}
