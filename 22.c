/*22. Fa�a um programa para converter uma letra mai�scula em letra min�scula. Use a tabela
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
    printf("\n              Converter letra mai�scula em min�scula.\n");
    printf("\n\n==============================================================\n\n");

    printf("\n   Digite uma letra mai�scula: ");
    scanf("%c", &letramai);

    num =(int)letramai;

    num= num + 32;

    printf("\n   O caractere min�sculo da letra digitada � %c .", (char)num);

    printf("\n\n\n\n");

    return 0;
}
