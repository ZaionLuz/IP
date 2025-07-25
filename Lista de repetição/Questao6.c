#include <stdio.h>
int main()
{
    int i, num, mult;
    printf("Digite um numero inteiro\n");
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        mult = num * i;
        printf("%d ", mult);
    }
    return 0;
}