/*46. Ler um valor de massa em quilogramas e apresentá-lo convertido em libras.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float K, L;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n          Converter valor de quilogramas em libras  \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite o valor da massa em quilogramas: " );
    scanf("%f", &K);

    L = (K/0.45);
    printf("\n\n=================================================================\n");
    printf("\n\n  O valor de %.2f quilogramas equivale a %.2f libras. ", K, L );
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
