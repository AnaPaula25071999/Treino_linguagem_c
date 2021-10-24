/*16. A import�ncia de R$ 780.000,00 ser� dividida entre tr�s ganhadores de um concurso.
Sendo que da quantia total:
-O primeiro ganhador receber� 46%;
-O segundo receber� 32%;
-O terceiro receber� o restante;
Calcule e imprima a quantia ganha por cada um dos ganhadores.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float importancia, valor_primeiro, valor_segundo, valor_terceiro;
    importancia = 780000.00;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n=======================================================================\n\n");
    printf("\n    PROGRAMA QUE DIVIDE A IMPORT�NCIA EM 3 GANHADORES  \n");
    printf("\n\n=======================================================================\n\n");


    // calcula o valor de cada um dos ganhadores

    valor_primeiro = importancia * 0.46;
    valor_segundo = importancia * 0.32;
    valor_terceiro = importancia - valor_primeiro - valor_segundo;

    //imprime o valor a receber de cada ganhador
    printf("\n        O primeiro ganhador receber� R$ %.2f", valor_primeiro);
    printf("\n        O segundo ganhador receber� R$ %.2f", valor_segundo);
    printf("\n        O terceiro ganhador receber� R$ %.2f", valor_terceiro);
    printf("\n\n=======================================================================\n\n");

    return 0;
}
