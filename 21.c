/*21. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo
a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo,
sem se preocupar com a altura do usuário.*/
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

    // lê a altura do degrau da escada
    printf("\n   Digite a altura do degrau da escada:");
    scanf("%f", &altDegrau);
    printf("\n   Digite a altura que o usuário deseja alcançar subindo a escada:");
    scanf("%f", &altTotal);
    // calculo para achar a quantidade de degraus para alcançar a altura pretendida

    degraus = (altTotal/altDegrau);

    //imprime a quantidade de degraus para alcançar a altura pretendida
    printf("\n\n=======================================================================\n\n");
    printf("     Para atingir o objetivo o usuário deverá subir %.1f degraus.\n", degraus);
    printf("\n\n=======================================================================\n\n");
    return 0;
}
