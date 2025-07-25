#include <stdio.h>
#include <string.h>
int main()
{
    char frase[100];
    int i, tamanho, letras = 0, numeros = 0, espacos = 0;
    printf("Digite uma frase\n");
    fgets(frase, 100, stdin);
    tamanho = strlen(frase);
    for (i = 0; i < tamanho; i++)
    {
        if ((frase[i] >= 'a' && frase[i] <= 'z') || (frase[i] >= 'A' && frase[i] <= 'Z'))
        {
            letras++;
        }
        if (frase[i] >= '0' && frase[i] <= '9')
        {
            numeros++;
        }
        if (frase[i] == ' ')
        {
            espacos++;
        }
    }
    printf("A frase: %sTem: %d letras %d numeros e %d espacos", frase, letras, numeros, espacos);
    return 0;
}