/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*31*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    float c, l, p, peri, pTotal;
    setlocale(LC_ALL, "Portuguese");
    printf("\n=================================================================\n");
	printf("\n         Programa que calcula os dimensões de um terreno\n ");
	printf("\n=================================================================\n\n");
    printf("\n    Digite o comprimento: " );
    scanf("%f", &c);
    printf("\n    Digite o largura: " );
    scanf("%f", &l);
    printf("\n    Digite o preço do metro do arame: R$ " );
    scanf("%f", &p);

    peri = (2*c) + (2*l);//calculo do perimetro
    pTotal = (peri*p);
    printf("\n\n  O custo para cercar o terreno será de R$ %.2f.", pTotal);
    printf("\n\n==================================================\n");
    return(0);
}
