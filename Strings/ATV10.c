#include <stdio.h>
#include <string.h>
int main()
{
    char z, frase[100];
    int i;
    printf("Digite uma frase:\n");
    fgets(frase, 100, stdin);
    int tamanho = strlen(frase);
    printf("Digite um caractere:\n");
    scanf("%c", &z);
    for (i = tamanho - 1; frase[i] != '\0'; i--)
    {
        if (frase[i] == z)
        {
            printf("O caractere %c foi encontrado pela ultima vez na posicao %d\n", z, i);
            break;
        }
    }

    return 0;
}
