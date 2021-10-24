/*3. Efetue a leitura de um número real e imprima o resultado do quadrado desse número.*/

/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float num1, num_quad;

    setlocale(LC_ALL, "Portuguese");
    printf("\n   Digite um número inteiro: ");
    scanf("%f", &num1);

    num_quad = num1 * num1;

    printf("\n\n==============================================================\n\n");
    printf("\n    O quadrado do numero inteiros digitados é de %.2f .\n", num_quad);
    printf("\n\n==============================================================\n\n");

    printf("\n\n\n\n");

    return 0;
}
