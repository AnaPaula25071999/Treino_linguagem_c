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
    printf("\n       PROGRAMA QUE L� O RAIO DE UM C�RCULO E IMPRIME SUA �REA     \n");
    printf("\n\n====================================================================\n\n");

    // l� o valor do raio de um c�rculo
    printf("\n\n   Digite o raio do c�rculo: ");
    scanf("%f", &raio);

    // calculo da �rea do c�rculo
    area = raio*3.141592;

    //imprime o resultado da �rea do c�rculo
    printf("\n\n====================================================================\n\n");
    printf("            A area do c�rculo � de %.2f.", area);
    printf("\n\n====================================================================\n\n");

    return 0;
}
