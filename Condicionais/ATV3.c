#include <stdio.h>
int main()
{
    int n1, n2;
    printf("Digite os 2 numeros inteiros \n");
    scanf("%d %d", &n1, &n2);
    if (n1 < n2)
    {
        printf("O menor numero e o primeiro: %d", n1);
    }
    else
    {
        printf("O menor numero e o segundo: %d", n2);
    }
    return 0;
}