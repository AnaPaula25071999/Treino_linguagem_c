/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*30. Tr�s amigos jogaram na loteria. Caso eles ganhem, o pr�mio deve ser repartido
proporcionalmente ao valor que cada deu para a realiza��o da aposta. Fa�a um programa que
l� quanto cada apostador investiu, l� o valor do pr�mio, e escreve quanto cada um ganharia*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float p1, p2, p3, amig1, amig2, amig3, total, premio, premio1, premio2, premio3 ;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n     Divide o valor do pr�mio entre 3 amigos\n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite o valor do investimento do 1� amigo: R$ " );
    scanf("%f", &amig1);
    printf("\n    Digite o valor do investimento do 2� amigo: R$ " );
    scanf("%f", &amig2);
    printf("\n    Digite o valor do investimento do 3� amigo: R$ " );
    scanf("%f", &amig3);
    printf("\n    Digite o valor do pr�mio: R$ " );
    scanf("%f", &premio);

    //achar a propor��o
    total = amig1 + amig2 + amig3;
    p1 = (amig1/total);
    p2 = (amig2/total);
    p3 = (amig3/total);
    //calcular o valor recebido por cada amigo
    premio1 = p1*(premio);
    premio2 = p2*(premio);
    premio3 = p3*(premio);
    //exibe o valor recebido por cada amigo
    printf("\n\n  O valor recebido pelo 1� amigo � de R$ %.2f.", premio1);
    printf("\n\n  O valor recebido pelo 2� amigo � de R$ %.2f.", premio2);
    printf("\n\n  O valor recebido pelo 3� amigo � de R$ %.2f.", premio3);
    printf("\n\n==================================================\n");
    return(0);
}
