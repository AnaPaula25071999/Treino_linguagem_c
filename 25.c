
/*25. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.*/
/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float seg, hrs, min;
    int hrs1, min1, seg1;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n=======================================================================\n\n");
    printf("\n     PROGRAMA QUE LÊ UM VALOR INTEIRO EM SEGUNDOS E IMPRIME EM SEGUNDOS  \n");
    printf("\n\n=======================================================================\n\n");

    // lê a altura do degrau da escada
    printf("\n   Digite o valor inteiro em segundos: ");
    scanf("%f", &seg);
    // calculo para achar a quantidade de degraus para alcançar a altura pretendida

    min = seg/60;
    hrs = seg/3600;
    hrs1 = hrs;
    min1 = ((hrs-hrs1)*100);
    seg1 = ((min-min1)/10);
    //imprime a quantidade de degraus para alcançar a altura pretendida
    printf("\n\n=======================================================================\n\n");
    printf("      %d horas.\n", hrs1);
    printf("      %d minutos.\n", min1);
    printf("      %d segundos.\n\n", seg1);
    printf("                Horario:   %d:%d:%2.d \n", hrs1, min1, seg1);
    printf("\n\n=======================================================================\n\n");
    return 0;
}

