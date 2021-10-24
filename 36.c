/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*36*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float K,M;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n                  Converter Km/h para m/s                   \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite a velocidade em km/h: " );
    scanf("%f", &K);

    M = (K/3.6);
    printf("\n\n==================================================\n");
    printf("\n\n  A velocidade de %.2F km/h em metros por segundo é de: %.2f m/s.", K, M );
    printf("\n\n==================================================\n");
    return(0);
}
