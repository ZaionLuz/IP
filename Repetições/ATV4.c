#include <stdio.h>
int main()
{
    int i, tabuada, numero;
    printf("Digite o numero que deseja saber a tabuada\n");
    scanf("%d", &numero);
    for (i = 0; i <= 10; i++)
    {
        tabuada= numero*i;
        printf("%d x %d = %d\n", numero, i, tabuada);
        
    }
    return 0;
}