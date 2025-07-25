#include <stdio.h>
int main()
{
    int i, j, tabuada;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            tabuada = i * j;
            printf("%d x %d = %d\n",i, j, tabuada);
        }
    }
    return 0;
}