/*1. Fa�a um programa que leia um n�mero inteiro e o imprima, ent�o leia um n�mero real e
tamb�m o imprima.*/

/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num_int;
    float num_real;

    printf("\n\n Digite um n�mero inteiro: ");
    scanf("%d", &num_int);
    printf("\n\n O n�mero inteiro digitado � %d .", num_int);

    printf("\n\n\n Digite um n�mero real: ");
    scanf("%f", &num_real);
    printf("\n\n O n�mero real digitado � %.2f .", num_real);

    printf("\n\n\n\n");

    return 0;
}
