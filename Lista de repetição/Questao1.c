#include <stdio.h>
int main()
{
    int a, num, cont;
    printf("Digite os 5 numeros\n");
    for (a = 0; a < 5; a++)
    {

        scanf("%d", &num);
        if (num < 0)
        {
            cont++;
        }
    }
    printf("O total de numeros negativos e de: %d", cont);
    return 0;
}