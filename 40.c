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
	printf("\n             Converter o ângulo em graus em radianos              \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite um ângulo em graus: " );
    scanf("%f", &G);

    R = (G *3.141592)/180;
    printf("\n\n=================================================================\n");
    printf("\n\n         O ângulo %.2f° em radianos é de %.1f radiano. ", G, R);
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
