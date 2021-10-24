/*20. Escreva um algoritmo para criar um programa de ajuda para vendedores. A partir de um
valor total lido, mostre:
- O total a pagar com desconto de 10%;
- O valor de cada parcela, no parcelamento de 3 x sem juros;
- A comissão do vendedor, no caso de a venda ser a vista (5% sobre o valor com desconto)
- A comissão do vendedor, no caso de a venda ser parcelada (5% sobre o valor total)*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float total, totalDesc, totalParc, comisDesc, comisParc;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n=======================================================================\n\n");
    printf("\n               PROGRAMA PARA AJUDAR VENDEDORES     \n");
    printf("\n\n=======================================================================\n\n");

    // lê o o salário-base de um funcionário
    printf("\n   Digite o valor total da compra: R$ ");
    scanf("%f", &total);

    // calculo do total a pagar com desconto de 10%
    totalDesc = total * 0.9;
    // calculo do total a pagar com desconto de 10%
    totalParc = (total/3);
    // calculo da comissão de vendedor em a vista
    comisDesc = totalDesc*0.05;
    // calculo da comissão de vendedor em venda parcelada
    comisParc = total*0.05;

    //imprime os valores
    printf("\n\n=======================================================================\n\n");
    printf("    O total a pagar com desconto é de: R$  %.2f.\n\n", totalDesc);
    printf("    O valor de cada parcela, no parcelamento de 3 x sem juros é de: R$  %.2f.\n\n", totalParc);
    printf("    A comissão de vendedor em uma compra a vista é de: R$  %.2f.\n\n", comisDesc);
    printf("    A comissão de vendedor em uma compra parcelada é de: R$  %.2f.\n\n", comisParc);
    printf("\n\n=======================================================================\n\n");

    return 0;
}
