/*6. Leia quatro notas, calcule a m�dia aritm�tica e imprima o resultado.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float nota1, nota2, nota3, nota4, media;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n====================================================================\n\n");
    printf("          PROGRAMA QUE L� 4 NOTAS E CALCULA A M�DIA                  ");
    printf("\n\n====================================================================\n\n");

    // leitura das 4 notas
    printf("\n\n   Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("\n   Digite a segundo nota: ");
    scanf("%f", &nota2);
    printf("\n   Digite a terceiro nota: ");
    scanf("%f", &nota3);
    printf("\n   Digite a quarta nota: ");
    scanf("%f", &nota4);

    //calculo da m�dia das notas
    media = (nota1 + nota2 + nota3 + nota4)/4;

    //exibi��o da m�dia

    printf("\n\n====================================================================\n\n");
    printf("\n    A m�dia das quatro notas � de %.2f .\n\n", media);
    printf("\n====================================================================\n\n");

    return 0;
}
