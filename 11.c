/*11*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*obs: esta sem acento por conta que estava dando problema no codigo mesmo com locale*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float raio, area;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n====================================================================\n\n");
    printf("\n       PROGRAMA QUE LÊ O RAIO DE UM CÍRCULO E IMPRIME SUA ÁREA     \n");
    printf("\n\n====================================================================\n\n");

    // lê o valor do raio de um círculo
    printf("\n\n   Digite o raio do círculo: ");
    scanf("%f", &raio);

    // calculo da área do círculo
    area = raio*3.141592;

    //imprime o resultado da área do círculo
    printf("\n\n====================================================================\n\n");
    printf("            A area do círculo é de %.2f.", area);
    printf("\n\n====================================================================\n\n");

    return 0;
}
