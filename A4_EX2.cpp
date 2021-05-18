#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

int num1, num2, num3, num4, quadrado;

printf("Insira quatro números distintos para o cálculo do quadrado: \n");
scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

quadrado = num3*num3;

if (quadrado >= 1000)
{
    printf("\nO quadrado do número %d é: %d\n\n\n", num3, quadrado);

}
else
{
    quadrado = num1*num1;
    printf("\nO quadrado do número %d é: %d\n", num1, quadrado);

    quadrado = num2*num2;
    printf("\nO quadrado do número %d é: %d\n", num2, quadrado);

    quadrado = num3*num3;
    printf("\nO quadrado do número %d é: %d\n", num3, quadrado);

    quadrado = num4*num4;
    printf("\nO quadrado do número %d é: %d\n\n\n", num4, quadrado);
}



system("pause");
return 0;
}
