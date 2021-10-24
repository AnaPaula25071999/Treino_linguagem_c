/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*4. Leia um número real e imprima a quinta parte deste número.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float num, quinta_parte;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n====================================================================\n\n");
    printf("       PROGRAMA QUE CALCULA A QUINTA PARTE DE UM NÚMERO REAL            ");
    printf("\n\n====================================================================\n");

    //leitura do numero
    printf("\n\n   Digite um número real: ");
    scanf("%f", &num);

    //calculo da quinta parte do numero
    quinta_parte = num/5;

    //exibição da quinta parte
    printf("\n\n====================================================================\n\n");
    printf("\n    O valor da quinta parte do número digitados é %.2f .\n\n", quinta_parte);
    printf("\n\n====================================================================\n\n");

    return 0;
}
