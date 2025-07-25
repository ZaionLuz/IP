#include <stdio.h>
int main()
{
    float n1, n2, media;
    printf("Digite as 2 notas do aluno \n");
    scanf("%f %f", &n1, &n2);
    media = (n1 + n2) / 2;
    printf("A media do aluno e %.1f\n", media);
    if (media <= 3)
    {
        printf("Reprovado :(");
    }
    else if (media <= 7)
    {
        printf("Exame :/");
    }
    else
    {
        printf("Aprovado :)");
    }
    return 0;
}