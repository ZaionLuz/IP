#include <stdio.h>
int main()
{
    int i, aparece = 0;
    char z, frase[100];
    printf("Digite uma frase qualquer\n");
    fgets(frase, sizeof(frase), stdin);
    printf("Agora digite um caracter pra procurar dentro da frase\n");
    fflush(stdin);
    scanf("%c", &z);
    for (i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == z)
        {
            aparece++;
        }

        if (aparece == 0)
        {
            printf("O Caractere n foi encontrado na frase :(");
            return 0;
        }
    }
    printf("O Caractere aparece na frase %d vezes", aparece);
    return 0;
}