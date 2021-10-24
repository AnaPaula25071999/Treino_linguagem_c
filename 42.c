/*42. Ler um valor de comprimento em polegadas e apresentá-lo convertido em centímetros.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float C, P;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n   Converter o valor de comprimento em polegadas para centímetros  \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite o valor do comprimento em polegadas: " );
    scanf("%f", &P);

    C = (P * 2.54);
    printf("\n\n=================================================================\n");
    printf("\n\n  O valor do comprimento em polegadas %.2f em centímetros é de %.2f cm. ", P, C);
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
