#include <stdio.h>
int main()
{
    int idade[8], codigo[5], i, j, provas[8][5];
    printf("Digite a idade dos 8 alunos \n");
    for (i = 0; i < 8; i++)
    {
        printf("Digite a idade do aluno %d ", i + 1);
        scanf("%d", &idade[i]);
    }
    printf("\nDigite o codigo das 5 disciplinas\n");
    for (i = 0; i < 5; i++)
    {
        printf("Digite a disciplina %d ", i + 1);
        scanf("%d", &codigo[i]);
    }
    printf("\nDigite a quantidade de provas q cada aluno fez em cada disciplina\n");
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Aluno %d Disciplina %d ", i + 1, j + 1);
            scanf("%d", &provas[i][j]);
        }
    }
    printf("\nIdade dos alunos:\n");
    for (i = 0; i < 8; i++)
    {
        printf("Aluno %d Idade %d\n", i + 1, idade[i]);
    }
    printf("\nCodigo das disciplinas:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Disciplina %d Codigo %d\n", i + 1, codigo[i]);
    }
    printf("\nQuantidade de Provas Realizadas\n");
    for (i = 0; i < 8; i++)
    {
        printf("Aluno %d:\n", i + 1);
        for (j = 0; j < 5; j++)
        {
            printf("Disciplina %d (%d provas)\n", codigo[j], provas[i][j]);
        }
    }
    return 0;
}