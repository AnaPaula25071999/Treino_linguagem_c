/*15. Receba o sal�rio de um funcion�rio, calcule e imprima o valor do novo sal�rio, sabendo que
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
    printf("\n  PROGRAMA QUE L� SAL�RIO E IMPRIME O NOVO SAL�RIO PARA DO FUNCION�RIO   \n");
    printf("\n\n=======================================================================\n\n");

    // l� o sal�rio do funcion�rio
    printf("\n   Digite o sal�rio de um funcion�rio: R$  ");
    scanf("%f", &sal);

    // calcula o valor do novo sal�rio do funcion�rio

    novo_sal = sal * 1.25;

    //imprime o valor do novo sal�rio do funcion�rio
    printf("\n\n=======================================================================\n\n");
    printf("   O novo sal�rio do funcion�rio � de R$  %.2f.", novo_sal);
    printf("\n\n=======================================================================\n\n");

    return 0;
}
