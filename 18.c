/*18. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
trabalhadas no mês, e imprima o valor a ser pago ao funcionário, adicionando 10% sobre o
valor calculado.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float valor, valorHora, valorPago;
    int numHoras;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n=======================================================================\n\n");
    printf("\n    PROGRAMA QUE LÊ IMPRIME O VALOR A SER PAGO AO FUNCIONÁRIO     \n");
    printf("\n\n=======================================================================\n\n");

    // lê o número de dias trabalhados
    printf("\n   Digite o valor da hora de trabalho: R$ ");
    scanf("%f", &valorHora);
    printf("\n   Digite o número de horas trabalhadas no mês em horas: ");
    scanf("%d", &numHoras);

    // calculo do valor a ser pago ao funcionário

    valor = valorHora * numHoras;
    valorPago = valor * 1.1;

    //imprime o valor a ser pago ao funcionário
    printf("\n\n=======================================================================\n\n");
    printf("    O valor a ser pago ao funcionário é de R$  %.2f.", valorPago);
    printf("\n\n=======================================================================\n\n");

    return 0;
}
