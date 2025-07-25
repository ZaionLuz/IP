#include <stdio.h>

int main()
{
    int i, j, cont1 = 0, cont2 = 0;

    for (i = 1; i <= 10; i++)
    {
        printf("Digite o %d valor:\n", i);
        scanf("%d", &j);

        if (j >= 10 && j <= 20)
        {
            cont1++;
        }
        else
        {
            cont2++;
        }
    }

    printf("O total de numeros dentro do intervalo [10, 20] e: %d\n", cont1);
    printf("O total de numeros fora do intervalo e: %d\n", cont2);

    return 0;
}
