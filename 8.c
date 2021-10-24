/*8. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num, num_ant, num_suc;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n====================================================================\n\n");
    printf("\n   PROGRAMA QUE LÊ UM NÚMERO E IMPRIME O  SEU SUCESSOR E ANTECESSOR       \n\n");
    printf("\n====================================================================\n\n");

    // lê um número inteiro
    printf("\n\n   Digite um número inteiro: ");
    scanf("%d", &num);

    //descobre o numero antecessor e o sucessor
    num_ant = num - 1;
    num_suc = num + 1;

    //exibe o numero antecessor e o sucessor

    printf("\n\n====================================================================\n\n");
    printf("\n    O número antecessor é %d.\n\n", num_ant );
    printf("\n    O número sucessor é %d.\n\n", num_suc );
    printf("\n\n====================================================================\n\n");

    return 0;
}
