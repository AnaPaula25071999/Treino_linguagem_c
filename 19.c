/*19. Receba o sal�rio-base de um funcion�rio, calcule e imprima o sal�rio a receber, sabendo-se
que esse funcion�rio tem uma gratifica��o de 5% sobre o sal�rio-base. Al�m disso, paga 7% de
imposto sobre o sal�rio-base.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float sal_base, sal_rec, grat, imp;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n=======================================================================\n\n");
    printf("\n    PROGRAMA QUE L� IMPRIME O VALOR A SER PAGO AO FUNCION�RIO     \n");
    printf("\n\n=======================================================================\n\n");

    // l� o o sal�rio-base de um funcion�rio
    printf("\n   Digite o sal�rio-base de um funcion�rio: R$ ");
    scanf("%f", &sal_base);

    // calculo do valor a ser pago ao funcion�rio
    grat = (sal_base * 1.05) - sal_base;
    imp = sal_base * 0.93;// 100 - 7 = 93
    sal_rec = imp + grat;

    //imprime o sal�rio a receber
    printf("\n\n=======================================================================\n\n");
    printf("    O sal�rio a receber � de R$  %.2f.", sal_rec);
    printf("\n\n=======================================================================\n\n");

    return 0;
}
