/*10. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int lado, area;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n====================================================================\n\n");
    printf("\n       PROGRAMA QUE LÊ O LADO DE UM QUADRADO E CALCULA SUA ÁREA       \n");
    printf("\n\n====================================================================\n\n");

    // lê o tamanho do lado de um quadrado
    printf("\n   Digite o tamanho do lado do quadrado(em metros): ");
    scanf("%d", &lado);

    // calculo da área do triangulo
    area = lado*lado;

    //imprime o resultado da área do quadrado
    printf("\n\n====================================================================\n\n");
    printf("            A área do quadrado é de %d m².", area);
    printf("\n\n====================================================================\n\n");

    return 0;
}
