/*48. Ler um valor de comprimento em jardas e apresentá-lo convertido em metros.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float J, M;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n          Converter valor de jardas para metros  \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite o valor do comprimento em jardas: " );
    scanf("%f", &J);

    M = (J * 0.91);
    printf("\n\n=================================================================\n");
    printf("\n\n  O valor de %.2f jardas equivale a %.2f metros. ", J, M );
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
