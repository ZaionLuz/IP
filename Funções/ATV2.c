#include <stdio.h>
void preencher(int vetor[], int tamanho)
{
    printf("Digite os elementos do vetor\n");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }
}
void media(int vetor[], int tamanho)
{
    printf("Media de todos os elementos do vetor\n");
    int soma = 0;
    for (int i = 0; i < tamanho; i++)
    {
        soma += vetor[i];
    }
    printf("%.1f \n", (float)soma / tamanho);
}
void mostrar(int vetor[], int tamanho)
{
    printf("Todos os elementos do vetor\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
void menor(int vetor[], int tamanho)
{
    int menor = vetor[0];

    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    printf("Menor elemento do vetor: %d\n", menor);
}

void crescente(int vetor[], int tamanho)
{
    printf("Vetor em ordem crescente\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            if (vetor[i] < vetor[j])
            {
                int aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
int main()
{
    int elementos, opcao;
    printf("Digite a quantidade de elementos q o vetor de inteiros deve possuir\n");
    scanf("%d", &elementos);
    int vetor[elementos];
    preencher(vetor, elementos);
    do
    {
        printf("1- Calcular a media dos elementos\n2- Exibir todos os elementos\n3- Exibir menor elemento\n4- Ordenar vetor em ordem crescente\n5- Finalizar o programa\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            media(vetor, elementos);
            break;
        case 2:
            mostrar(vetor, elementos);
            break;
        case 3:
            menor(vetor, elementos);
            break;
        case 4:
            crescente(vetor, elementos);
            break;
        case 5:
            printf("Finalizando o programa...\n");
            break;
        default:
            printf("OPCAO INVALIDA\n");
        }
    } while (opcao != 5);

    return 0;

}