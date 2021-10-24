/*47. Ler um valor de massa em libras e apresentá-lo convertido em quilogramas.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float K, L;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n          Converter valor de libras em quilogramas  \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite o valor da massa em libras: " );
    scanf("%f", &L);

    K = (L * 0.45);
    printf("\n\n=================================================================\n");
    printf("\n\n  O valor de %.2f libras em quilogramas equivale a %.2f Kg. ", L, K );
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
