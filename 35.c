/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*35*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float K, C;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n              Converter Kelvin em Celsius                 \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Temperatura em graus Celsius: " );
    scanf("%f", &C);

    K = C + 273.15;
    printf("\n\n==================================================\n");
    printf("\n\n  A temperatura em graus Kelvin: %.2f K°.", K );
    printf("\n\n==================================================\n");
    return(0);
}
