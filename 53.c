/*53. Ler um valor de �rea em hectares e apresent�-lo convertido em metros quadrados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    float H, M;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n         Converter valor de hectares para metros quadrados  \n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite o valor da �rea em hectares: " );
    scanf("%f", &H);

    M = (H * 10000);
    printf("\n\n=================================================================\n");
    printf("\n\n       A �rea de %.2f hectares equivale a %.2f metros quadrados. ", H, M );
    printf("\n\n\n=================================================================\n\n");
    return(0);
}
