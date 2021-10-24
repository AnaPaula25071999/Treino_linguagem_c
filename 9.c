/*9. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu
dobro*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num, soma, sucessor_triplo, antecessor_dobro;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n============================================================================\n\n");

    //lê um número inteiro
    printf("   Digite um número inteiro: ");
    scanf("%d", &num);

    //Calculo da soma do sucessor de seu triplo com o antecessor de seu dobro
    sucessor_triplo = (num*3) + 1;
    antecessor_dobro = (num*2) - 1;
    soma = sucessor_triplo + antecessor_dobro;

    //exibe o resultado do calculo
    printf("\n\n=============================================================================\n\n");
    printf("\n   O valor soma do sucessor de seu triplo com o antecessor de seu dobro é %d.\n\n", soma);
    printf("\n=============================================================================\n\n");

    return 0;
}
