/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*39.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float K , M;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n                  Converter quilômetros em milhas                 \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite a distância em quilômetros: " );
    scanf("%f", &K);

    M = (K/1.61);
    printf("\n\n=================================================================\n");
    printf("\n\n  A distância de %.2f quilômetros em milhas é de: %.2f milhas.", K, M);
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
