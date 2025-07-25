#include <stdio.h>
int main()
{
    int i;
    char frase[100];
    printf("Digite uma frase qualquer\n");
    fgets(frase, sizeof(frase), stdin);
    for (i = 0; frase[i] != '\0'; i++)
    {
        printf("%c%c", frase[i], frase[i]);
    }
    return 0;
}