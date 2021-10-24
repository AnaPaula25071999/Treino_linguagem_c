/*Ana Paula Oliveira Castro(GU3015131) - aluna do IFSP */
/*28. Faça um algoritmo que calcule a média ponderada das notas de 3 provas. A primeira e a
segunda prova têm peso 1 e a terceira tem peso 2. Antes de o usuário entrar com as notas do
aluno ele deve entrar com o número de matricula do aluno. Ao final, mostrar a matricula do
aluno juntamente com a sua média e indicar se o aluno foi aprovado ou reprovado. A nota
para aprovação deve ser igual ou superior a 60 pontos.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    float nota1, nota2, nota3, media;
    int matri;

    setlocale(LC_ALL, "Portuguese");

    printf("\n=================================================================\n");
	printf("\n   Algoritmo que calcula a média e saber se foi aprovado ou não.\n ");
	printf("\n=================================================================\n\n");

    printf("\n  Digite o número de matricula do aluno: " );
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
        printf("       Número de matricula: %d.\n", matri);
        printf("       Média das provas: %.2f.\n\n", media);
        printf("          APROVADO.");

    }else{
        if((media <= 60) && (media>=0)){

            printf("       Número de matricula: %d.\n", matri);
            printf("       Média das provas: %.2f.\n\n", media);
            printf("          REPROVADO.");
        }else{
            printf("       OS NÚMEROS INSERIDOS NÃO SÃO VÁLIDOS.");
        }
    }

    printf("\n\n==================================================\n");
    return(0);
}
