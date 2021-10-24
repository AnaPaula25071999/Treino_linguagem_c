/*17. Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o
número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
sabendo-se que são descontados 8% para imposto de renda.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float valor, quant_liq, impR;
    int numDias;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n=======================================================================\n\n");
    printf("\n    PROGRAMA QUE LÊ A O NÚMERO DE DIAS TRABALHADOS E EXIBE \n");
    printf("    A QUANTIA LÍQUIDA PAGA AO TRABALHADOR   \n");
    printf("\n\n=======================================================================\n\n");

    // lê o número de dias trabalhados
    printf("\n   Digite o número de dias trabalhados pelo encanador:  ");
    scanf("%d", &numDias);

    // calculo da quantia líquida paga ao encanador

    valor = numDias * 30;
    quant_liq = valor * 0.92;

    //imprime a quantia líquida paga ao encanador
    printf("\n\n=======================================================================\n\n");
    printf("    A quantia líquida paga ao trabalhador é de  R$  %.2f.", quant_liq);
    printf("\n\n=======================================================================\n\n");

    return 0;
}
