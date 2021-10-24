/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*5. Efetue a leitura de três valores e apresente como resultado a soma dos quadrados dos três
valores lido*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num1, num2, num3, quad1, quad2, quad3, soma;

    setlocale(LC_ALL, "Portuguese");

    // leitura dos 3 valores
    printf("\n\n   Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("\n   Digite o segundo número: ");
    scanf("%d", &num2);
    printf("\n   Digite o terceiro número: ");
    scanf("%d", &num3);

    //calculo do quadrado dos 3 números
    quad1 = num1 * num1;
    quad2 = num2 * num2;
    quad3 = num3 * num3;

    //soma dos quadrados e exibição
    soma = quad1 + quad2 + quad3;

    printf("\n\n====================================================================\n\n");
    printf("\n    O valor da soma dos quadrados dos 3 números digitados é de %d .\n\n", soma);
    printf("\n\n====================================================================\n\n");

    return 0;
}
