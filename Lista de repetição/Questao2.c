#include <stdio.h>
int main()
{
    float chico = 1.50, ze = 1.10;
    int anos = 0;
    while (ze <= chico)
    {
        ze += 0.03;
        chico += 0.02;
        anos++;
    }
    printf("Ze precisaria de %d anos para ser maior que Chico\n", anos);
    return 0;
}