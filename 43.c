/*43. Ler um valor de comprimento em cent�metros e apresent�-lo convertido em polegadas.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float C, P;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n   Converter o valor de comprimento em cent�metros para polegadas  \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite o valor do comprimento em cent�metros: " );
    scanf("%f", &C);

    P = (C/2.54);
    printf("\n\n=================================================================\n");
    printf("\n\n  O valor do comprimento em cent�metros %.2f para polegada � de %.2f polegadas. ", C, P);
    printf("\n\n\n=================================================================\n\n");
    return(0);
}

