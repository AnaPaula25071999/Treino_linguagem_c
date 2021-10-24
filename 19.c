/*19. Receba o salário-base de um funcionário, calcule e imprima o salário a receber, sabendo-se
que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, paga 7% de
imposto sobre o salário-base.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float sal_base, sal_rec, grat, imp;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n=======================================================================\n\n");
    printf("\n    PROGRAMA QUE LÊ IMPRIME O VALOR A SER PAGO AO FUNCIONÁRIO     \n");
    printf("\n\n=======================================================================\n\n");

    // lê o o salário-base de um funcionário
    printf("\n   Digite o salário-base de um funcionário: R$ ");
    scanf("%f", &sal_base);

    // calculo do valor a ser pago ao funcionário
    grat = (sal_base * 1.05) - sal_base;
    imp = sal_base * 0.93;// 100 - 7 = 93
    sal_rec = imp + grat;

    //imprime o salário a receber
    printf("\n\n=======================================================================\n\n");
    printf("    O salário a receber é de R$  %.2f.", sal_rec);
    printf("\n\n=======================================================================\n\n");

    return 0;
}
