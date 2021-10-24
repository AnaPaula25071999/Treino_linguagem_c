/*15. Receba o salário de um funcionário, calcule e imprima o valor do novo salário, sabendo que
ele recebeu um aumento de 25%.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float sal, novo_sal;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n=======================================================================\n\n");
    printf("\n  PROGRAMA QUE LÊ SALÁRIO E IMPRIME O NOVO SALÁRIO PARA DO FUNCIONÁRIO   \n");
    printf("\n\n=======================================================================\n\n");

    // lê o salário do funcionário
    printf("\n   Digite o salário de um funcionário: R$  ");
    scanf("%f", &sal);

    // calcula o valor do novo salário do funcionário

    novo_sal = sal * 1.25;

    //imprime o valor do novo salário do funcionário
    printf("\n\n=======================================================================\n\n");
    printf("   O novo salário do funcionário é de R$  %.2f.", novo_sal);
    printf("\n\n=======================================================================\n\n");

    return 0;
}
