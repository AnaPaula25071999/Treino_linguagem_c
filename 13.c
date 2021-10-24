/*13. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume
de um cilindro circular é calculado por meio da seguinte fórmula...*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    float altura, raio, raio_qua, v;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n=======================================================================\n\n");
    printf("\n  PROGRAMA QUE LÊ A ALTURA E O RAIO DE UM CILINDRO E IMPRIME SEU VOLUME    \n");
    printf("\n\n=======================================================================\n\n");

    // lê o valor do altura e raio de um cilindro circular
    printf("\n\n   Digite a altura do cilindro circular: ");
    scanf("%f", &altura);
    printf("\n\n   Digite o raio do cilindro circular: ");
    scanf("%f", &raio);

    // calculo do volume do cilindro

    raio_qua = pow(raio, 2);
    v = altura * raio_qua * 3.141592;

    //imprime o resultado do volume do cilindro
    printf("\n\n=======================================================================\n\n");
    printf("            O volume de um cilindro circular é de %.2f.", v);
    printf("\n\n=======================================================================\n\n");

    return 0;
}
