/*18. Fa�a um programa que leia o valor da hora de trabalho (em reais) e n�mero de horas
trabalhadas no m�s, e imprima o valor a ser pago ao funcion�rio, adicionando 10% sobre o
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
    printf("\n    PROGRAMA QUE L� IMPRIME O VALOR A SER PAGO AO FUNCION�RIO     \n");
    printf("\n\n=======================================================================\n\n");

    // l� o n�mero de dias trabalhados
    printf("\n   Digite o valor da hora de trabalho: R$ ");
    scanf("%f", &valorHora);
    printf("\n   Digite o n�mero de horas trabalhadas no m�s em horas: ");
    scanf("%d", &numHoras);

    // calculo do valor a ser pago ao funcion�rio

    valor = valorHora * numHoras;
    valorPago = valor * 1.1;

    //imprime o valor a ser pago ao funcion�rio
    printf("\n\n=======================================================================\n\n");
    printf("    O valor a ser pago ao funcion�rio � de R$  %.2f.", valorPago);
    printf("\n\n=======================================================================\n\n");

    return 0;
}
