/*17. Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um programa que solicite o
n�mero de dias trabalhados pelo encanador e imprima a quantia l�quida que dever� ser paga,
sabendo-se que s�o descontados 8% para imposto de renda.*/
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
    printf("\n    PROGRAMA QUE L� A O N�MERO DE DIAS TRABALHADOS E EXIBE \n");
    printf("    A QUANTIA L�QUIDA PAGA AO TRABALHADOR   \n");
    printf("\n\n=======================================================================\n\n");

    // l� o n�mero de dias trabalhados
    printf("\n   Digite o n�mero de dias trabalhados pelo encanador:  ");
    scanf("%d", &numDias);

    // calculo da quantia l�quida paga ao encanador

    valor = numDias * 30;
    quant_liq = valor * 0.92;

    //imprime a quantia l�quida paga ao encanador
    printf("\n\n=======================================================================\n\n");
    printf("    A quantia l�quida paga ao trabalhador � de  R$  %.2f.", quant_liq);
    printf("\n\n=======================================================================\n\n");

    return 0;
}
