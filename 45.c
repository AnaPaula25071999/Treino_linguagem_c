/*45. Ler um valor de volume em litros e apresentá-lo convertido em metros cúbicos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float L, M;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n        Converter o valor de litros em metros cúbicos  \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite o valor do volume em Litros: " );
    scanf("%f", &L);

    M = (L/1000);
    printf("\n\n=================================================================\n");
    printf("\n\n  O valor de %.2f litros equivale a %.2f metros cúbicos. ", L, M);
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
