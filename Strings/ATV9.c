#include <stdio.h>
#include <string.h>
int main()
{
    char z, frase[100];
    int i;
    printf("Digite uma frase:\n");
    fgets(frase, 100, stdin);
    printf("Digite um caractere:\n");
    scanf("%c", &z);
    for (i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == z)
        {
            printf("O caractere %c foi encontrado pela primeira vez na posicao %d\n", z, i);
        }
    }

    return 0;
}