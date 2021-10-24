/*23. Faça um programa para ler um número inteiro, positivo de três dígitos, e gerar outro
número formado pelos dígitos invertidos do número lido. Exemplo:
NúmeroLido = 123
NúmeroGerado = 321.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int numG, numL, c, d, u;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n=======================================================================\n\n");
    printf("\n  PROGRAMA QUE LÊ UM NÚMEROS DE 3 DÍGITOS E INVERTE O NÚMERO   \n");
    printf("\n\n=======================================================================\n\n");

    // lê o um número inteiro de 3 dígitos:
    printf("\n   Digite um número inteiro de 3 dígitos: ");
    scanf("%d", &numG);

    // calculo para achar a dezena, a centena e a unidade
    c = numG/100;
    d = (numG -(c*100))/10;
    u = (numG -(d*10)-(c*100));

    numL = (u*100) + (d*10) + (c);

    //imprime o número lido invertido
    printf("\n\n=======================================================================\n\n");
    printf("      O número lido invertido fica: %d\n.", numL);
    printf("\n\n=======================================================================\n\n");
    return 0;
}
