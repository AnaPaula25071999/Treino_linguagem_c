/*21. Receba a altura do degrau de uma escada e a altura que o usu�rio deseja alcan�ar subindo
a escada. Calcule e mostre quantos degraus o usu�rio dever� subir para atingir seu objetivo,
sem se preocupar com a altura do usu�rio.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float altDegrau, altTotal, degraus;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n=======================================================================\n\n");
    printf("\n          PROGRAMA QUE MOSTRA A QUANTIDADE DE DEGRAUS    \n");
    printf("\n          A SUBIR PARA ATINGIR SEU OBJETIVO   \n");
    printf("\n\n=======================================================================\n\n");

    // l� a altura do degrau da escada
    printf("\n   Digite a altura do degrau da escada:");
    scanf("%f", &altDegrau);
    printf("\n   Digite a altura que o usu�rio deseja alcan�ar subindo a escada:");
    scanf("%f", &altTotal);
    // calculo para achar a quantidade de degraus para alcan�ar a altura pretendida

    degraus = (altTotal/altDegrau);

    //imprime a quantidade de degraus para alcan�ar a altura pretendida
    printf("\n\n=======================================================================\n\n");
    printf("     Para atingir o objetivo o usu�rio dever� subir %.1f degraus.\n", degraus);
    printf("\n\n=======================================================================\n\n");
    return 0;
}
