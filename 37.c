/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*37*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float K , M;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n                  Converter m/s para Km/h                   \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite a velocidade em m/s: " );
    scanf("%f", &M);

    K = (M*3.6);
    printf("\n\n==================================================\n");
    printf("\n\n A velocidade de %.2F m/s em quilômetros por hora é de: %.2f km/h.", M, K );
    printf("\n\n==================================================\n");
    return(0);
}
