/*44. Ler um valor de volume em metros c�bicos e apresent�-lo convertido em litros.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float L, M;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n        Converter o valor de metros  c�bicos em litros \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite o valor do volume em metros c�bicos: " );
    scanf("%f", &M);

    L = (1000 * M);
    printf("\n\n=================================================================\n");
    printf("\n\n  O valor de %.2f metros c�bicos em litros � de %.2f litros. ", M, L);
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
