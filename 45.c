/*45. Ler um valor de volume em litros e apresent�-lo convertido em metros c�bicos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float L, M;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n        Converter o valor de litros em metros c�bicos  \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite o valor do volume em Litros: " );
    scanf("%f", &L);

    M = (L/1000);
    printf("\n\n=================================================================\n");
    printf("\n\n  O valor de %.2f litros equivale a %.2f metros c�bicos. ", L, M);
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
