/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*26. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
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
    printf("\n   PROGRAMA QUE CALCULA O HORÁRIO DE INICIO E DURAÇÃO DE UMA EXPERIÊNCIA   \n");
    printf("\n\n=======================================================================\n\n");

    // lê o horário do inicio do experimento
    printf("\n   Digite a hora do horário de início da experiência: ");
    scanf("%d", &hrs);
    printf("\n   Digite o minuto do horário de início da experiência: ");
    scanf("%d", &min);
    printf("\n   Digite os segundos do horário de início da experiência: ");
    scanf("%d", &seg);
    printf("\n   Digite a duração do experimento( em horas):  ");
    scanf("%d", &durH);
    printf("\n   Digite a duração do experimento( em minutos):  ");
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
