#include <stdio.h>
#define tam1 15
#define tam2 5

int main()
{
    int i, j, matriz[tam1][tam2];
    char vetor[tam1][50];
    float media, media_classe = 0;

    printf("Digite as notas das 3 provas dos 3 alunos\n");
    for (i = 0; i < tam1; i++)
    {
        for (j = 0; j < tam2; j++)
        {
            printf("Nota do aluno %d na prova %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nAgora digite os nomes dos 3 alunos:\n");
    for (i = 0; i < tam1; i++)
    {
        printf("Nome do aluno %d: ", i + 1);
        scanf("%s", vetor[i]);
    }

    printf("\nResultados:\n");
    for (i = 0; i < tam1; i++)
    {
        media = 0;
        for (j = 0; j < tam2; j++)
        {
            media += matriz[i][j];
        }
        media /= tam2;
        media_classe += media;

        printf("Aluno: %s\n", vetor[i]);
        printf("Media: %.2f\n", media);
        if (media >= 7.0)
        {
            printf("Situacao: Aprovado\n");
        }
        else if (media >= 4.0)
        {
            printf("Situacao: Exame\n");
        }
        else
        {
            printf("Situacao: Reprovado\n");
        }
        printf("-------------------------\n");
    }

    media_classe /= tam1;
    printf("Media da classe: %.2f\n", media_classe);

    return 0;
}
