/*41.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float R, G;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n             Converter o �ngulo de radianos em graus             \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite um �ngulo em radianos: " );
    scanf("%f", &R);

    G = (R *180)/3.141592;
    printf("\n\n=================================================================\n");
    printf("\n\n         O �ngulo de %.1f radianos equivale a %.2f�. ", R, G);
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
