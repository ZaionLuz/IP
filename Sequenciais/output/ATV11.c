#include <stdio.h>
int main()
{
    float diagonalM, diagonalm, area;
    printf("Digite a Diagonal maior e menor do losango em cm ");
    scanf("%f %f", &diagonalM, &diagonalm);
    area = (diagonalM * diagonalm) / 2;
    printf("A area do losango sera de %.2fcm2", area);
    return 0;
}