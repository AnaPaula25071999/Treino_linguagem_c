/*20. Escreva um algoritmo para criar um programa de ajuda para vendedores. A partir de um
valor total lido, mostre:
- O total a pagar com desconto de 10%;
- O valor de cada parcela, no parcelamento de 3 x sem juros;
- A comiss�o do vendedor, no caso de a venda ser a vista (5% sobre o valor com desconto)
- A comiss�o do vendedor, no caso de a venda ser parcelada (5% sobre o valor total)*/
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

    // l� o o sal�rio-base de um funcion�rio
    printf("\n   Digite o valor total da compra: R$ ");
    scanf("%f", &total);

    // calculo do total a pagar com desconto de 10%
    totalDesc = total * 0.9;
    // calculo do total a pagar com desconto de 10%
    totalParc = (total/3);
    // calculo da comiss�o de vendedor em a vista
    comisDesc = totalDesc*0.05;
    // calculo da comiss�o de vendedor em venda parcelada
    comisParc = total*0.05;

    //imprime os valores
    printf("\n\n=======================================================================\n\n");
    printf("    O total a pagar com desconto � de: R$  %.2f.\n\n", totalDesc);
    printf("    O valor de cada parcela, no parcelamento de 3 x sem juros � de: R$  %.2f.\n\n", totalParc);
    printf("    A comiss�o de vendedor em uma compra a vista � de: R$  %.2f.\n\n", comisDesc);
    printf("    A comiss�o de vendedor em uma compra parcelada � de: R$  %.2f.\n\n", comisParc);
    printf("\n\n=======================================================================\n\n");

    return 0;
}
