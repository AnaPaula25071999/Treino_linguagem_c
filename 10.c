/*10. Leia o tamanho do lado de um quadrado e imprima como resultado a sua �rea*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int lado, area;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n====================================================================\n\n");
    printf("\n       PROGRAMA QUE L� O LADO DE UM QUADRADO E CALCULA SUA �REA       \n");
    printf("\n\n====================================================================\n\n");

    // l� o tamanho do lado de um quadrado
    printf("\n   Digite o tamanho do lado do quadrado(em metros): ");
    scanf("%d", &lado);

    // calculo da �rea do triangulo
    area = lado*lado;

    //imprime o resultado da �rea do quadrado
    printf("\n\n====================================================================\n\n");
    printf("            A �rea do quadrado � de %d m�.", area);
    printf("\n\n====================================================================\n\n");

    return 0;
}
