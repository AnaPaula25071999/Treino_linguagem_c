/*51. Ler um valor de área em acres e apresentá-lo convertido em metros quadrados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float A, M;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n         Converter valor de acres para metros quadrados  \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite o valor da área em acres: " );
    scanf("%f", &A);

    M = (A * 4048.58);
    printf("\n\n=================================================================\n");
    printf("\n\n       A área de %.2f acres equivale a %.2f metros quadrados. ", A, M );
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
