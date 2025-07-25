#include <stdio.h>

int main()
{
    char nomes[10][50];
    char nomeProcurado[50];
    int achei = 0;

    printf("Digite 10 nomes:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Nome %d: ", i + 1);
        fgets(nomes[i], 50, stdin);
        for (int j = 0; nomes[i][j] != '\0'; j++)
        {
            if (nomes[i][j] == '\n')
            {
                nomes[i][j] = '\0';
                break;
            }
        }
    }

    printf("Digite um nome para procurar: ");
    fgets(nomeProcurado, 50, stdin);
    for (int j = 0; nomeProcurado[j] != '\0'; j++)
    {
        if (nomeProcurado[j] == '\n')
        {
            nomeProcurado[j] = '\0';
            break;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        int igual = 1;
        for (int j = 0; nomeProcurado[j] != '\0' || nomes[i][j] != '\0'; j++)
        {
            if (nomeProcurado[j] != nomes[i][j])
            {
                igual = 0;
                break;
            }
        }
        if (igual)
        {
            achei = 1;
            break;
        }
    }

    if (achei)
    {
        printf("ACHEI\n");
    }
    else
    {
        printf("NÃO ACHEI\n");
    }

    return 0;
}
