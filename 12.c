/*12*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    float cat1, cat2, hip, hip_qua;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n====================================================================\n\n");
    printf("\n   PROGRAMA QUE LÊ OS CATETOS DE UM TRIÂNGULO E IMPRIME SUA HIPOTENUSA     \n");
    printf("\n\n====================================================================\n\n");

    // lê o valor dos catetos
    printf("\n\n   Digite o valor do primeiro cateto: ");
    scanf("%f", &cat1);
    printf("\n\n   Digite o valor do segundo cateto: ");
    scanf("%f", &cat2);

    // calculo da hipotenusa
    hip_qua = (cat1*cat1) + (cat2*cat2);
    hip = sqrt(hip_qua);

    //imprime o resultado da hipotenusa
    printf("\n\n====================================================================\n\n");
    printf("            Sua hipotenusa é de %.2f.", hip);
    printf("\n\n====================================================================\n\n");

    return 0;
}
