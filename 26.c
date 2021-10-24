/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*26. Fa�a um programa para leia o hor�rio (hora, minuto e segundo) de in�cio e a dura��o, em
segundos, de uma experi�ncia biol�gica. O programa deve resultar com o novo hor�rio (hora,
minuto e segundo) do termino da mesma.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float s, m1;
    int seg, hrs, min, hrsE, minE, segE, durH, durM, durS, m, h;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n=======================================================================\n\n");
    printf("\n   PROGRAMA QUE CALCULA O HOR�RIO DE INICIO E DURA��O DE UMA EXPERI�NCIA   \n");
    printf("\n\n=======================================================================\n\n");

    // l� o hor�rio do inicio do experimento
    printf("\n   Digite a hora do hor�rio de in�cio da experi�ncia: ");
    scanf("%d", &hrs);
    printf("\n   Digite o minuto do hor�rio de in�cio da experi�ncia: ");
    scanf("%d", &min);
    printf("\n   Digite os segundos do hor�rio de in�cio da experi�ncia: ");
    scanf("%d", &seg);
    printf("\n   Digite a dura��o do experimento( em horas):  ");
    scanf("%d", &durH);
    printf("\n   Digite a dura��o do experimento( em minutos):  ");
    scanf("%d", &durM);

    // calculo das horas

    hrsE = hrs + durH;
    minE = min + durM;
    segE = seg + durS;

    if((segE >= 60)&&(segE <= 120)){
       s = (segE/60);
       m = (segE/60);
       minE = minE + m;
       segE = ((s - m)*10);
    }
        if(minE >= 60){
       m1 = minE/60;
       h = minE/60;
       minE = ((m1 - h)*10);
       hrsE = hrsE + m1;
    }
    if(hrsE >24){

        hrsE = hrsE - 24;
        if(hrs<0){
            hrs = -(hrs);
        }
    }


    //imprime o horario do experimento
    printf("\n\n=======================================================================\n\n");
    printf("      %d horas.\n", hrsE);
    printf("      %d minutos.\n", minE);
    printf("      %d segundos.\n\n", segE);
    printf("                Horario:   %d:%d:%d \n", hrsE, minE, segE);
    printf("\n\n=======================================================================\n\n");
    return 0;
}
