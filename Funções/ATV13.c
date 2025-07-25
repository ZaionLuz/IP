#include <stdio.h>

// Definir uma constante para o número de habitantes
#define NUM_HABITANTES 15

// Estrutura para armazenar os dados dos habitantes
typedef struct {
    int idade;
    char sexo;
    float salario;
    int num_filhos;
} Habitante;

// Sub-rotina para ler os dados dos habitantes
void ler_dados(Habitante habitantes[NUM_HABITANTES]) {
    for (int i = 0; i < NUM_HABITANTES; i++) {
        printf("Digite os dados do habitante %d:\n", i + 1);
        printf("Idade: ");
        scanf("%d", &habitantes[i].idade);
        printf("Sexo (M/F): ");
        scanf(" %c", &habitantes[i].sexo);  // O espaço antes de %c é para consumir o caractere de nova linha
        printf("Salário: ");
        scanf("%f", &habitantes[i].salario);
        printf("Número de filhos: ");
        scanf("%d", &habitantes[i].num_filhos);
    }
}

// Sub-rotina para calcular a média de salários
float calcular_media_salario(Habitante habitantes[NUM_HABITANTES]) {
    float soma_salarios = 0;
    for (int i = 0; i < NUM_HABITANTES; i++) {
        soma_salarios += habitantes[i].salario;
    }
    return soma_salarios / NUM_HABITANTES;
}

// Sub-rotina para encontrar a menor e maior idade
void encontrar_idades_extremas(Habitante habitantes[NUM_HABITANTES], int *menor_idade, int *maior_idade) {
    *menor_idade = habitantes[0].idade;
    *maior_idade = habitantes[0].idade;

    for (int i = 1; i < NUM_HABITANTES; i++) {
        if (habitantes[i].idade < *menor_idade) {
            *menor_idade = habitantes[i].idade;
        }
        if (habitantes[i].idade > *maior_idade) {
            *maior_idade = habitantes[i].idade;
        }
    }
}

// Sub-rotina para contar mulheres com 3 filhos que ganham até R$ 500
int contar_mulheres_tres_filhos(Habitante habitantes[NUM_HABITANTES]) {
    int contador = 0;
    for (int i = 0; i < NUM_HABITANTES; i++) {
        if (habitantes[i].sexo == 'F' || habitantes[i].sexo == 'f') {
            if (habitantes[i].num_filhos == 3 && habitantes[i].salario <= 500.0) {
                contador++;
            }
        }
    }
    return contador;
}

int main() {
    Habitante habitantes[NUM_HABITANTES];
    
    // Ler dados
    ler_dados(habitantes);

    // Calcular e exibir a média de salários
    float media_salario = calcular_media_salario(habitantes);
    printf("Média de salário: %.2f\n", media_salario);

    // Encontrar e exibir a menor e maior idade
    int menor_idade, maior_idade;
    encontrar_idades_extremas(habitantes, &menor_idade, &maior_idade);
    printf("Menor idade: %d\n", menor_idade);
    printf("Maior idade: %d\n", maior_idade);

    // Contar e exibir o número de mulheres com 3 filhos que recebem até R$ 500
    int mulheres_tres_filhos = contar_mulheres_tres_filhos(habitantes);
    printf("Número de mulheres com 3 filhos que ganham até R$ 500: %d\n", mulheres_tres_filhos);

    return 0;
}
