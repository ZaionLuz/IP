#include <stdio.h>
int main()
{
    int encontrou = 0, i,j, v1[15], v2[10];
    printf("Digite as 15 matriculas de Logica\n");
    for (i = 0; i < 15; i++)
    {
        printf("Digite a matricula do aluno %d ", i + 1);
        scanf("%d", &v1[i]);
    }
    printf("Digite as 10 matriculas de Linguagem de Progamacao\n");
    for (i = 0; i < 10; i++)
    {
        printf("Digite a matricula do aluno %d ", i + 1);
        scanf("%d", &v2[i]);
    }
    printf("Matriculas em ambas disciplinas:");
    for (i = 0; i < 15; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (v1[i] == v2[j])
            {
                printf("%d ", v1[i]);
                encontrou = 1;
            }
        }
    }

    if (!encontrou)
    {
        printf("Nenhuma\n");
    }
    return 0;
}