/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*29*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    int x, y;
    float dist;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n  Leia as coordenadas x e y de pontos no plano cartesiano e\n ");
    printf("\n  calcule sua dist�ncia\n\n");
	printf("\n=================================================================\n\n");
    printf("\n    Coordenadas 1: " );
    scanf("%d", &x);
    printf("\n    Coordenadas 2: " );
    scanf("%d", &y);

    dist = (x*x) + (y*y);
    dist = sqrt(dist);
    printf("\n\n  A dist�ncia das coordenadas da origem � de %.2f.", dist );

    printf("\n\n==================================================\n");
    return(0);
}
