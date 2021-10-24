/*24. Leia um número inteiro de 4 dígitos e imprima 1 dígito por linha.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num, m, c, d, u;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n=======================================================================\n\n");
    printf("\n  PROGRAMA QUE LÊ UM NÚMEROS DE 4 DÍGITOS E IMPRIME EM LINHAS DIFERENTES   \n");
    printf("\n\n=======================================================================\n\n");

    // lê o um número inteiro de 4 dígitos:
    printf("\n   Digite um número inteiro de 4 dígitos:");
    scanf("%d", &num);

    // calculo para achar o milhar, a dezena, a centena e a unidade
    m = num/1000;
    c = (num -(m*1000))/100;
    d = (num -(m*1000)-(c*100))/10;
    u = (num -(m*1000)-(c*100)-(d*10));

    //imprime o milhar, a dezena, a centena e a unidade em linhas diferentes
    printf("\n\n=======================================================================\n\n");
    printf("       %d\n", m);
    printf("       %d\n", c);
    printf("       %d\n", d);
    printf("       %d\n", u);
    printf("\n\n=======================================================================\n\n");
    return 0;
}
