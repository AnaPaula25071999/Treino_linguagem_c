/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*32.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float F, C;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n              Converter Celsius em Fahrenheit                    \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Temperatura em graus Celsius: " );
    scanf("%f", &C);

    F = (C *(9.0/5.0))+ 32.0;
    printf("\n\n==================================================\n");
    printf("\n\n  A temperatura em graus Fahrenheit: %.2f F°.", F );
    printf("\n\n==================================================\n");
    return(0);
}
