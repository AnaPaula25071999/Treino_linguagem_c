/*1. Faça um programa que leia um número inteiro e o imprima, então leia um número real e
também o imprima.*/

/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num_int;
    float num_real;

    printf("\n\n Digite um número inteiro: ");
    scanf("%d", &num_int);
    printf("\n\n O número inteiro digitado é %d .", num_int);

    printf("\n\n\n Digite um número real: ");
    scanf("%f", &num_real);
    printf("\n\n O número real digitado é %.2f .", num_real);

    printf("\n\n\n\n");

    return 0;
}
