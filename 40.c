/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*40.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float R, G;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n             Converter o �ngulo em graus em radianos              \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite um �ngulo em graus: " );
    scanf("%f", &G);

    R = (G *3.141592)/180;
    printf("\n\n=================================================================\n");
    printf("\n\n         O �ngulo %.2f� em radianos � de %.1f radiano. ", G, R);
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
