/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*34.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float K, C;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n              Converter Celsius em graus Kelvin                \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Temperatura em graus Kelvin: " );
    scanf("%f", &C);

    C = K - 273.15;
    printf("\n\n==================================================\n");
    printf("\n\n  A temperatura em graus Celsius: %.2f C°.", C );
    printf("\n\n==================================================\n");
    return(0);
}
