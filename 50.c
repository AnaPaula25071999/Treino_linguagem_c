/*50. Ler um valor de �rea em metros quadrados apresent�-lo convertido em acres.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float A, M;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n         Converter valor de metros quadrados em acres  \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite o valor da �rea em metros quadrados: " );
    scanf("%f", &M);

    A = (M * 0.000247);
    printf("\n\n=================================================================\n");
    printf("\n\n       A �rea de %.2f metros quadrados equivale a %.3f acres. ", M, A );
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
