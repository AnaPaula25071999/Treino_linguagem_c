/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*2. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int num1, num2, num3, soma;

    setlocale(LC_ALL, "Portuguese");
    printf("\n   Digite um número inteiro: ");
    scanf("%d", &num1);
    printf("\n   Digite um número inteiro: ");
    scanf("%d", &num2);
    printf("\n   Digite um número inteiro: ");
    scanf("%d", &num3);


    soma = num1 + num2 + num3;
    printf("\n\n   A soma dos 3 números inteiros digitados é de %d ", soma);

    printf("\n\n\n\n");

    return 0;
}
