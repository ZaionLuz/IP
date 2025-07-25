#include <stdio.h>

#define NUM_HABITANTES 5

typedef struct {
    char sexo;
    char corOlhos;
    char corCabelos;
    int idade;
} Habitante;

void lerDados(Habitante habitantes[]);
double mediaIdadeOlhosCastanhosCabelosPretos(Habitante habitantes[]);
int maiorIdade(Habitante habitantes[]);
int contarMulheresAzuisLouros(Habitante habitantes[]);

int main() {
    Habitante habitantes[NUM_HABITANTES];
    
    lerDados(habitantes);
    
    printf("Media de idade das pessoas com olhos castanhos e cabelos pretos: %.2f\n", mediaIdadeOlhosCastanhosCabelosPretos(habitantes));
    printf("Maior idade entre os habitantes: %d\n", maiorIdade(habitantes));
    printf("Quantidade de mulheres entre 18 e 35 anos com olhos azuis e cabelos louros: %d\n", contarMulheresAzuisLouros(habitantes));
    
    return 0;
}

void lerDados(Habitante habitantes[]) {
    for (int i = 0; i < NUM_HABITANTES; i++) {
        printf("Digite os dados do habitante %d:\n", i + 1);
        printf("Sexo (M/F): ");
        scanf(" %c", &habitantes[i].sexo);
        printf("Cor dos olhos (A - azuis, C - castanhos): ");
        scanf(" %c", &habitantes[i].corOlhos);
        printf("Cor dos cabelos (L - louros, P - pretos, C - castanhos): ");
        scanf(" %c", &habitantes[i].corCabelos);
        printf("Idade: ");
        scanf(" %d", &habitantes[i].idade);
    }
}

double mediaIdadeOlhosCastanhosCabelosPretos(Habitante habitantes[]) {
    int somaIdades = 0, contador = 0;
    for (int i = 0; i < NUM_HABITANTES; i++) {
        if (habitantes[i].corOlhos == 'C' && habitantes[i].corCabelos == 'P') {
            somaIdades += habitantes[i].idade;
            contador++;
        }
    }
    return (contador > 0) ? (double)somaIdades / contador : 0.0;
}

int maiorIdade(Habitante habitantes[]) {
    int maior = habitantes[0].idade;
    for (int i = 1; i < NUM_HABITANTES; i++) {
        if (habitantes[i].idade > maior) {
            maior = habitantes[i].idade;
        }
    }
    return maior;
}

int contarMulheresAzuisLouros(Habitante habitantes[]) {
    int contador = 0;
    for (int i = 0; i < NUM_HABITANTES; i++) {
        if (habitantes[i].sexo == 'F' && habitantes[i].idade >= 18 && habitantes[i].idade <= 35 &&
            habitantes[i].corOlhos == 'A' && habitantes[i].corCabelos == 'L') {
            contador++;
        }
    }
    return contador;
}
