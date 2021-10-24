/*49. Ler um valor de comprimento em metros e apresentá-lo convertido em jardas.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float J, M;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n          Converter valor de metros para jardas \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite o valor do comprimento em metros: " );
    scanf("%f", &M);

    J = (M/0.91);
    printf("\n\n=================================================================\n");
    printf("\n\n  O valor de %.2f metros equivale a %.2f jardas. ", M, J );
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
