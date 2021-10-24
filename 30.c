/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*30. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
lê quanto cada apostador investiu, lê o valor do prêmio, e escreve quanto cada um ganharia*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float p1, p2, p3, amig1, amig2, amig3, total, premio, premio1, premio2, premio3 ;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n     Divide o valor do prêmio entre 3 amigos\n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite o valor do investimento do 1° amigo: R$ " );
    scanf("%f", &amig1);
    printf("\n    Digite o valor do investimento do 2° amigo: R$ " );
    scanf("%f", &amig2);
    printf("\n    Digite o valor do investimento do 3° amigo: R$ " );
    scanf("%f", &amig3);
    printf("\n    Digite o valor do prêmio: R$ " );
    scanf("%f", &premio);

    //achar a proporção
    total = amig1 + amig2 + amig3;
    p1 = (amig1/total);
    p2 = (amig2/total);
    p3 = (amig3/total);
    //calcular o valor recebido por cada amigo
    premio1 = p1*(premio);
    premio2 = p2*(premio);
    premio3 = p3*(premio);
    //exibe o valor recebido por cada amigo
    printf("\n\n  O valor recebido pelo 1° amigo é de R$ %.2f.", premio1);
    printf("\n\n  O valor recebido pelo 2° amigo é de R$ %.2f.", premio2);
    printf("\n\n  O valor recebido pelo 3° amigo é de R$ %.2f.", premio3);
    printf("\n\n==================================================\n");
    return(0);
}
