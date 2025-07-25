#include <stdio.h>

int main() {
    float i, lucro, ingresso;

    printf("Lucro   Preco   Ingressos\n");

    for (i = 5; i >= 1; i -= 0.5) {
        ingresso = 120 + (26 * (10 - i*2));
        lucro = (ingresso * i) - 200;
        printf("%.1fR$   %.1fR$   %.1f\n", lucro, i, ingresso);
    }

    return 0;
}
