#include <stdio.h>
#include <string.h>
int main()
{
    char frase[100];
    int i, vezes;
    printf("Digite uma frase:\n");
    fgets(frase, 100, stdin);
    frase[strcspn(frase, "\n")] = '\0';
    printf("Digite o numero de vezes que deseja imprimir a frase: (com limite de 5)\n");
    scanf("%d", &vezes);
    if (vezes > 5)
    {
        printf("Numero de vezes invalido\n");
    }
    else
    {
        for (i = 0; i < vezes; i++)
        {
            printf("%s ", frase);
        }
    }
    return 0;
}