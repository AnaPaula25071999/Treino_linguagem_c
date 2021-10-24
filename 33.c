/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*330*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float F, C;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n              Converter Fahrenheit em Celsius                 \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Temperatura em graus Fahrenheit: " );
    scanf("%f", &F);

    C = (5.0 * (F - 32.00))/ 9.0;
    printf("\n\n==================================================\n");
    printf("\n\n  A temperatura em graus Celsius: %.2f C°.", C );
    printf("\n\n==================================================\n");
    return(0);
}
