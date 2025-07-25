#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100], resultado[300]; // Buffer maior para armazenar palavras expandidas
    int i, j = 0;

    printf("Digite uma frase:\n");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0'; // Remover o \n do final

    for (i = 0; frase[i] != '\0'; i++)
    {
        if (frase[i] == '1')
            strcpy(&resultado[j], "Um"), j += strlen("Um");
        else if (frase[i] == '2')
            strcpy(&resultado[j], "Dois"), j += strlen("Dois");
        else if (frase[i] == '3')
            strcpy(&resultado[j], "Três"), j += strlen("Três");
        else if (frase[i] == '4')
            strcpy(&resultado[j], "Quatro"), j += strlen("Quatro");
        else if (frase[i] == '5')
            strcpy(&resultado[j], "Cinco"), j += strlen("Cinco");
        else if (frase[i] == '6')
            strcpy(&resultado[j], "Seis"), j += strlen("Seis");
        else if (frase[i] == '7')
            strcpy(&resultado[j], "Sete"), j += strlen("Sete");
        else if (frase[i] == '8')
            strcpy(&resultado[j], "Oito"), j += strlen("Oito");
        else if (frase[i] == '9')
            strcpy(&resultado[j], "Nove"), j += strlen("Nove");
        else if (frase[i] == '0')
            strcpy(&resultado[j], "Zero"), j += strlen("Zero");
        else
            resultado[j++] = frase[i]; // Copia caracteres normais sem alteração
    }
    resultado[j] = '\0'; // Finaliza a string

    printf("Frase modificada: %s\n", resultado);
    return 0;
}
