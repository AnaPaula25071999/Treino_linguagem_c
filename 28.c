/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*28. Fa�a um algoritmo que calcule a m�dia ponderada das notas de 3 provas. A primeira e a
segunda prova t�m peso 1 e a terceira tem peso 2. Antes de o usu�rio entrar com as notas do
aluno ele deve entrar com o n�mero de matricula do aluno. Ao final, mostrar a matricula do
aluno juntamente com a sua m�dia e indicar se o aluno foi aprovado ou reprovado. A nota
para aprova��o deve ser igual ou superior a 60 pontos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    float nota1, nota2, nota3, media;
    int matri;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n   Algoritmo que calcula a m�dia e saber se foi aprovado ou n�o.\n ");
	printf("\n=================================================================\n\n");

    printf("\n  Digite o n�mero de matricula do aluno: " );
    scanf("%d", &matri);
    printf("\n\n==================================================\n\n");
    printf("  Digite as notas de 0 a 100\n\n");
    printf("    Nota da prova 1: " );
    scanf("%f", &nota1);
    printf("\n    Nota da prova 2: " );
    scanf("%f", &nota2);
    printf("\n    Nota da prova 3: " );
    scanf("%f", &nota3);

    media = (nota1 + nota2 + (nota3*2))/4;

    printf("\n\n==================================================\n\n");
    if((media >= 60) && (media<=100) ) {
        printf("       N�mero de matricula: %d.\n", matri);
        printf("       M�dia das provas: %.2f.\n\n", media);
        printf("          APROVADO.");

    }else{
        if((media <= 60) && (media>=0)){

            printf("       N�mero de matricula: %d.\n", matri);
            printf("       M�dia das provas: %.2f.\n\n", media);
            printf("          REPROVADO.");
        }else{
            printf("       OS N�MEROS INSERIDOS N�O S�O V�LIDOS.");
        }
    }

    printf("\n\n==================================================\n");
    return(0);
}
