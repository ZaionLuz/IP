#include <stdio.h>
int main()
{
    float n1, n2, n3, n4, media;
    printf("Digite as 4 notas do aluno \n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf("A media do aluno e %.1f\n", media);
    if (media >= 7)
    {
        printf("Aprovado :)");
    }
    else
    {
        printf("Nao Aprovado :(");
    }
    return 0;
}