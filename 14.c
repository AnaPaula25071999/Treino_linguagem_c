/*14. Faça um programa que possa entrar com o valor de um produto e imprima o valor tendo
em vista que o desconto foi de 12%*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float valor, desc;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n=======================================================================\n\n");
    printf("\n    PROGRAMA QUE LÊ O VALOR DE UM PRODUTO E IMPRIMA ELE COM DESCONTO     \n");
    printf("\n\n=======================================================================\n\n");

    // lê o valor do produto
    printf("\n   Digite o valor do produto: R$  ");
    scanf("%f", &valor);

    // calcula o valor do produto com desconto

    desc = valor * 0.88;

    //imprime o valor do produto com desconto
    printf("\n\n=======================================================================\n\n");
    printf("        O valor do produto com desconto de 12%% é de R$  %.2f.", desc);
    printf("\n\n=======================================================================\n\n");

    return 0;
}
