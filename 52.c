/*52. Ler um valor de �rea em metros quadrados e apresent�-lo convertido em hectares..*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float A, M;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n         Converter valor de metros quadrados para hectares \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite o valor da �rea em metros quadrados: " );
    scanf("%f", &M);

    A = (M * 0.0001);
    printf("\n\n=================================================================\n");
    printf("\n\n       A �rea de %.2f metros quadrados equivale a %.2f hectares. ", M, A );
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
