/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*38.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float K , M;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n                  Converter milhas em quil�metros                 \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite a dist�ncia em milhas: " );
    scanf("%f", &M);

    K = (M*1.61);
    printf("\n\n=================================================================\n");
    printf("\n\n  A dist�ncia de %.2f milhas em quil�metros � de: %.2f quil�metros.", M, K );
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
