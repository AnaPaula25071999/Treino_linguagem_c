/*23. Fa�a um programa para ler um n�mero inteiro, positivo de tr�s d�gitos, e gerar outro
n�mero formado pelos d�gitos invertidos do n�mero lido. Exemplo:
N�meroLido = 123
N�meroGerado = 321.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int numG, numL, c, d, u;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n=======================================================================\n\n");
    printf("\n  PROGRAMA QUE L� UM N�MEROS DE 3 D�GITOS E INVERTE O N�MERO   \n");
    printf("\n\n=======================================================================\n\n");

    // l� o um n�mero inteiro de 3 d�gitos:
    printf("\n   Digite um n�mero inteiro de 3 d�gitos: ");
    scanf("%d", &numG);

    // calculo para achar a dezena, a centena e a unidade
    c = numG/100;
    d = (numG -(c*100))/10;
    u = (numG -(d*10)-(c*100));

    numL = (u*100) + (d*10) + (c);

    //imprime o n�mero lido invertido
    printf("\n\n=======================================================================\n\n");
    printf("      O n�mero lido invertido fica: %d\n.", numL);
    printf("\n\n=======================================================================\n\n");
    return 0;
}
