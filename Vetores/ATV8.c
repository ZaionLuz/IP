#include <stdio.h>

int main()
{
    int i, j, aft = 0;
    float media[7], af[7];
    char nome[7][12], reprovados[7][12], maior[12];
    float maiorMedia = 0;

    printf("Digite o nome de 7 alunos:\n");
    for (i = 0; i < 7; i++)
    {
        printf("Nome do aluno %d: ", i + 1);
        scanf("%s", nome[i]);
    }

    printf("Digite a media final dos 7 alunos:\n");
    for (i = 0; i < 7; i++)
    {
        printf("Media do aluno %d: ", i + 1);
        scanf("%f", &media[i]);

        if (media[i] > maiorMedia)
        {
            maiorMedia = media[i];
            for (j = 0; nome[i][j] != '\0'; j++)
            {
                maior[j] = nome[i][j];
            }
            maior[j] = '\0';
        }

        if (media[i] < 7)
        {
            for (j = 0; nome[i][j] != '\0'; j++)
            {
                reprovados[aft][j] = nome[i][j];
            }
            reprovados[aft][j] = '\0';

            af[aft] = 10 - media[i];
            aft++;
        }
    }

    printf("\nAluno com a maior media: %s\n", maior);
    printf("Alunos reprovados e quanto precisam para passar:\n");

    for (i = 0; i < aft; i++)
    {
        printf("%s : %.2f\n", reprovados[i], af[i]);
    }

    return 0;
}
