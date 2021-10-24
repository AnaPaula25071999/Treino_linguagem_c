/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*27. Implemente um programa em C que calcule o ano de nascimento de uma pessoa a partir
de sua idade e do ano atual.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int idade, anoAtual, anoNasc;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n=======================================================================\n\n");
    printf("\n     PROGRAMA QUE LÊ A IDADE E ANO ATUAL E CALCULA O ANO DE NASCIMENTO  \n");
    printf("\n\n=======================================================================\n\n");

    // lê a idade e o ano atual
    printf("\n   Digite sua idade: ");
    scanf("%d", &idade);
    printf("\n   Digite o ano atual: ");
    scanf("%d", &anoAtual);

    // calcula o ano de nascimento
    anoNasc = anoAtual - idade;

    //imprime o ano de nascimento
    printf("\n\n=======================================================================\n\n");
    printf("      Você nasceu no ano %d\n.", anoNasc);
    printf("\n\n=======================================================================\n\n");
    return 0;
}
