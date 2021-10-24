/*22. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
ASCII.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int  num;
    char letramai;

    setlocale(LC_ALL, "Portuguese");
    printf("\n\n==============================================================\n\n");
    printf("\n              Converter letra maiúscula em minúscula.\n");
    printf("\n\n==============================================================\n\n");

    printf("\n   Digite uma letra maiúscula: ");
    scanf("%c", &letramai);

    num =(int)letramai;

    num= num + 32;

    printf("\n   O caractere minúsculo da letra digitada é %c .", (char)num);

    printf("\n\n\n\n");

    return 0;
}
