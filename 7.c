/*7. Leia um valor em real e a cota��o do d�lar. Em seguida, imprima o valor correspondente em
d�lares*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
//cota��o do dia dia 22/08/2021  1 dolar = 5,365 ou 1 real= 0,186
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float real, dolar;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n====================================================================\n\n");
    printf("\n          PROGRAMA QUE L� VALOR EM REAL E PASSA PARA O D�LAR                 \n\n");
    printf("\n\n====================================================================\n\n");

    // l� um valor em real
    printf("\n   Digite o valor em real: R$ ");
    scanf("%f", &real);

    //passa real para d�lar
    dolar = (real*0.186);

    //exibibe valor dos d�lar

    printf("\n\n====================================================================\n\n");
    printf("\n    O valor de %.2f em real em d�lar equivale a %.3f .\n\n", real, dolar);
    printf("\n====================================================================\n\n");

    return 0;
}
