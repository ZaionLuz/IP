#include <stdio.h>

int main()
{
    int a, b, c, d, temp, i, j;

    printf("Digite cinco grupos de quatro valores (A, B, C, D):\n");

    for (i = 1; i <= 5; i++)
    {
        printf("Grupo %d:\n", i);

        printf("Digite A: ");
        scanf("%d", &a);
        printf("Digite B: ");
        scanf("%d", &b);
        printf("Digite C: ");
        scanf("%d", &c);
        printf("Digite D: ");
        scanf("%d", &d);

        printf("Ordem lida: %d %d %d %d\n", a, b, c, d);

        for (j = 0; j < 3; j++)
        {
            if (a > b)
            {
                temp = a;
                a = b;
                b = temp;
            }
            if (b > c)
            {
                temp = b;
                b = c;
                c = temp;
            }
            if (c > d)
            {
                temp = c;
                c = d;
                d = temp;
            }
        }

        printf("Ordem crescente: %d %d %d %d\n", a, b, c, d);

        for (j = 0; j < 3; j++)
        {
            if (a < b)
            {
                temp = a;
                a = b;
                b = temp;
            }
            if (b < c)
            {
                temp = b;
                b = c;
                c = temp;
            }
            if (c < d)
            {
                temp = c;
                c = d;
                d = temp;
            }
        }

        printf("Ordem decrescente: %d %d %d %d\n", a, b, c, d);
    }

    return 0;
}
